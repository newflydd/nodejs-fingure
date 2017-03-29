#ifndef DAOWRAP_H
#define DAOWRAP_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QList>

#include "finger.h"

#ifndef __UCHAR__
#define uchar unsigned char
#endif

class DaoWrap
{
public:
    DaoWrap();
    QString getNameByFid(int);
    void    updateName(int fid, QString name);
    void    updateCode(int fid, uchar* code512);
    QList<Finger*>  getFingerList();

private:
    QSqlDatabase database;
    bool isExistTable(const QString& strTableName);
    void createTable();

};

#endif // DAOWRAP_H
