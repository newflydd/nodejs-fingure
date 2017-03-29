#include <QtDebug>
#include <QTime>
#include <QThread>

#include "fingermodual.h"

FingerModual::FingerModual(){
    this->dao = new DaoWrap();
}

uchar FingerModual::connect(){
    int type, result;
    result = PSAutoOpen(&pHandle, &type);

    if(result != PS_OK)
        return 1;
    return 0;
}

/**
 * @brief 第一次录入指纹
 * @return -1：超时   0：成功    其他：失败
 */
int FingerModual::input1(){
    QTime begin = QTime::currentTime(),end = QTime::currentTime();
    int result;
    //采集
    while(begin.msecsTo(end) < 20*1000){
        result = PSGetImage(pHandle, 0xFFFFFFFF);
        if(result == PS_OK)
            break;
        end = QTime::currentTime();
        QThread::msleep(5);
    }

    if(begin.msecsTo(end) >= 20 * 1000){
        return -1;
    }

    //生成特征码
    result = PSGenChar(pHandle, 0xFFFFFFFF, 1);
    return result;
}

/**
 * @brief 第二次录入指纹
 * @param power 权限
 * @return -1超时
 */
int FingerModual::input2(int power,QString name){
    //根据power求存储位置fid
    int fid = (power - 1) * 100;
    bool find = false;
    while(!find){
        for(int i = 0; i < fingerList.length(); i++){
            int li = fingerList[i]->property("fid").toInt();
            if(li == fid){
                fid++;
                continue;
            }
        }
        find = true;
    }

    QTime begin = QTime::currentTime(),end = QTime::currentTime();
    int result;
    //采集
    while(begin.msecsTo(end) < 20*1000){
        result = PSGetImage(pHandle, 0xFFFFFFFF);
        if(result == PS_OK)
            break;
        end = QTime::currentTime();
        QThread::msleep(5);
    }

    if(begin.msecsTo(end) >= 20 * 1000){
        return -1;
    }

    //生成特征码到第二缓冲区
    result = PSGenChar(pHandle, 0xFFFFFFFF, 2);
    if(result)
        return -2;

    //合并特征码
    result = PSRegModule(pHandle, 0xFFFFFFFF);
    if(result)
        return -2;

    //将合并后的特征码存储到fid
    result = PSStoreChar(pHandle, 0xFFFFFFFF, 1, fid);
    if(result)
        return -3;

    //更新内存数据
    Finger* finger = new Finger();
    finger->setIntFid(fid);
    finger->setName(name);
    this->fingerList.append(finger);

    //更新数据库数据
    dao->updateName(fid, name);

    //更新returnFid方便前端UI使用
    this->m_returnFid = QString("%1").arg(fid, 3, 10, QChar('0'));

    return fid;
}

/**
 * @brief 构造指纹库
 * @return -1失败，0-1000获取指纹数量
 */
int FingerModual::buildFingerList(){
    if(!pHandle)
        return -1;

    uchar fingerAddressIndex[4][32];        //指纹索引

    PSReadIndexTable(pHandle, 0xFFFFFFFF, 0, fingerAddressIndex[0]);
    PSReadIndexTable(pHandle, 0xFFFFFFFF, 1, fingerAddressIndex[1]);
    PSReadIndexTable(pHandle, 0xFFFFFFFF, 2, fingerAddressIndex[2]);
    PSReadIndexTable(pHandle, 0xFFFFFFFF, 3, fingerAddressIndex[3]);

    for(int i = 0; i < 1000; i++){
        if((fingerAddressIndex[i/256][(i%256)/8]>>(i%8))&(0x80) == 0x80){
            Finger* finger = new Finger();
            finger->setIntFid(i);
            QString name = dao->getNameByFid(i);
            if(name!=NULL)
                finger->setName(name);
            this->fingerList.append(finger);
        }
    }

    return fingerList.length();
}

/**
 * @brief 搜索
 * @return -1：   超时
 *         -2：   没有搜索到
 *         正整数：指纹索引
 */
int FingerModual::search(){
    QTime begin = QTime::currentTime(),end = QTime::currentTime();
    int result;
    //采集
    while(begin.msecsTo(end) < 20*1000){
        result = PSGetImage(pHandle, 0xFFFFFFFF);
        if(result == PS_OK)
            break;
        end = QTime::currentTime();
        QThread::msleep(5);
    }

    if(begin.msecsTo(end) >= 20 * 1000){
        return -1;
    }
    //生成特征码
    PSGenChar(pHandle, 0xFFFFFFFF, 1);

    //搜索指纹库
    int fid, score;
    result = PSSearch(pHandle, 0xFFFFFFFF, 1, 0, 1000, &fid, &score);

    //更新模块内部的searchName，供UI使用
    for(int i = 0; i < fingerList.length(); i++){
        if(fid == fingerList.at(i)->property("fid").toInt()){
            this->m_searchName = fingerList.at(i)->property("name").toString();
            break;
        }
    }

    if(result == PS_NOT_SEARCHED)
        return -2;

    return fid;
}

/**
 * @brief 删除某一位置指纹
 * @param fid
 * @return
 */
int FingerModual::deleteFingerAddress(int fid){
    //删除数据库
    dao->updateName(fid, NULL);
    dao->updateCode(fid, NULL);

    //删除内存模型
    for(int i = 0; i < fingerList.length(); i++){
        if(fingerList.at(i)->property("fid").toInt() == fid){
            fingerList.removeAt(i);
            break;
        }
    }

    //删除指纹模块
    return PSDelChar(pHandle, 0xFFFFFFFF, fid, 1);
}

/**
 * @brief 备份指纹库
 * 以内存中的数据列表为准，对每个位置拉取二进制特征码，保存到数据库
 */
int FingerModual::backupFingerAddress(){
    uchar charTempletBuffer[512];           //指纹特征码模板缓冲区
    int   charTempletLength;                //特征码大小
    for(int i = 0; i < fingerList.length(); i++){
        int fid = fingerList.at(i)->property("fid").toInt();
        PSLoadChar(pHandle, 0xFFFFFFFF, 1, fid);
        PSUpChar(pHandle, 0xFFFFFFFF, 1, charTempletBuffer, &charTempletLength);
        dao->updateCode(fid, charTempletBuffer);
    }

    return 0;
}

/**
 * @brief 还原数据库
 * @return 从本地数据库中获得所有code不为NULL的数据，并将其存储到指纹模块
 */
int FingerModual::restoreFingerAddress(){
    QList<Finger*> list = dao->getFingerList();
    for(int i = 0; i < list.length();i++){
        PSDownChar(pHandle, 0xFFFFFFFF, 1, (uchar*)list.at(i)->m_code.data(), 512);
        PSStoreChar(pHandle, 0xFFFFFFFF, 1, list.at(i)->m_intFid);
        qDebug()<<"restore No."<<list.at(i)->m_intFid<<"sucess";
    }
    return 0;
}


