#ifndef FINGERMODUAL_H
#define FINGERMODUAL_H

#include <QObject>
#include <QList>
#include <ShlObj.h>

#include "ARITH_LIB.h"
#include "Protocol.h"
#include "finger.h"
#include "daowrap.h"

#ifndef __UCHAR__
#define uchar unsigned char
#endif

#pragma comment(lib,"user32.lib")
#pragma comment(lib,"D:\\workspace-npm\\fingure\\cpp-backup\\ARITH_LIB.lib")
#pragma comment(lib,"D:\\workspace-npm\\fingure\\cpp-backup\\SynoAPIEx.lib")

//@TODO: 记录日志，QML中使用C++对象和方法
class FingerModual : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<QObject*> objFingerList READ objFingerList)
    Q_PROPERTY(QString searchName READ searchName)
    Q_PROPERTY(QString returnFid READ returnFid)
public:
    FingerModual();
    Q_INVOKABLE uchar connect();
    Q_INVOKABLE int   input1();
    Q_INVOKABLE int   input2(int power, QString name);
    Q_INVOKABLE int   buildFingerList();
    Q_INVOKABLE int   search();
    Q_INVOKABLE int   deleteFingerAddress(int);
    Q_INVOKABLE int   backupFingerAddress();
    Q_INVOKABLE int   restoreFingerAddress();

    QString searchName(){return m_searchName;}
    QString returnFid(){return m_returnFid;}

    QList<QObject*> objFingerList(){return this->fingerList;}
signals:

public slots:

private:
    HANDLE pHandle = NULL;
    //@TODO:记录日志，QML中使用QList的方法，将原型降级为QObject即可
    QList<QObject*> fingerList;
    QString m_searchName;
    QString m_returnFid;
    DaoWrap* dao;
};

#endif // FINGERMODUAL_H
