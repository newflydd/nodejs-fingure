#include <QChar>

#include "finger.h"

void Finger::setIntFid(int intFid){
    this->m_intFid = intFid;
    this->m_fid = QString("%1").arg(intFid, 3, 10, QChar('0'));
    this->m_power = getPowerById(intFid);
}

void Finger::setName(QString name){
    this->m_name = name;
}

QString Finger::getPowerById(int intFid){
    return QString("%1").arg(intFid / 100 + 1);
}


QString Finger::fid(){
    return this->m_fid;
}

QString Finger::name(){
    return this->m_name;
}

QString Finger::power(){
    return this->m_power;
}
