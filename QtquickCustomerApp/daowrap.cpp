#include <QDebug>
#include <QByteArray>

#include "daowrap.h"

DaoWrap::DaoWrap(){
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("database.db");

    //打开数据库
    if(!database.open()){
        qDebug()<<database.lastError();
        qFatal("failed to connect.") ;
    } else {
        if(!isExistTable("finger")){
            qDebug()<<"creating table ...";
            createTable();
        }
    }
}

//判断数据库中是否存在该表
bool DaoWrap::isExistTable(const QString& strTableName)  {
    QSqlQuery query;
    QString strSql = QString("SELECT 1 FROM sqlite_master where type = 'table' and  name = '%1'").arg(strTableName);
    query.exec(strSql);
    if(query.next())
    {
        int nResult = query.value(0).toInt();//有表时返回1，无表时返回null
        if(nResult)
        {
            return true;
        }
    }
    return false;
}

void DaoWrap::createTable()
{
    QString strSql = "create table finger(fid int PRIMARY KEY,name VARCHAR(100), code BYTE(512));";
    QSqlQuery query;
    query.exec(strSql);//建表

    QString strIndexSql = "CREATE INDEX finger_index1 on finger(fid);";
    query.exec(strIndexSql); //创建索引

    for(int i = 0; i <= 1000; i++){
        QString strSql = QString("insert into finger(fid) values(%1)").arg(i);
        query.exec(strSql);
    }
}

QString DaoWrap::getNameByFid(int fid){
    QSqlQuery query;
    QString strSql = QString("SELECT name FROM finger where fid = %1").arg(fid);
    query.exec(strSql);
    if(query.next())
    {
        QString name = query.value(0).toString();
        if(name == NULL || name == "")
            return QString("无名");
        return name;
    }
    return QString("无名");
}

void DaoWrap::updateName(int fid, QString name){
    QSqlQuery query;
    if(name != NULL){
        QString strSql = QString("update finger set name ='%1' where fid = %2").arg(name).arg(fid);
        query.exec(strSql);
    }else{
        QString strSql = QString("update finger set name = null where fid = %1").arg(fid);
        query.exec(strSql);
    }
}

//将指纹模块中的特征码保存到数据库code字段
void DaoWrap::updateCode(int fid, uchar* code512){
    if(code512 == NULL){
        QString strSql = QString("update finger set code = null where fid=%1").arg(fid);
        QSqlQuery query{database};
        query.exec(strSql);
        return;
    }

    QByteArray byte;
    byte = QByteArray((char*)code512, 512);

    QSqlQuery query{database};
    query.prepare("update finger set code=:code where fid=:fid");
    query.bindValue(":code", byte, QSql::In | QSql::Binary);
    query.bindValue(":fid", fid, QSql::In);

    query.exec();
}

//从数据库中取得fid对应的特征码
QList<Finger*> DaoWrap::getFingerList(){
    QList<Finger*> list;
    QSqlQuery query{database};
    QString strSql = QString("select fid,code from finger where code is not null");
    query.exec(strSql);
    while(query.next()){
        int fid = query.value(0).toInt();
        QByteArray byte = query.value(1).toByteArray();
        Finger* finger = new Finger();
        finger->setIntFid(fid);
        finger->m_code = byte;
        list.append(finger);
    }
    return list;
}
