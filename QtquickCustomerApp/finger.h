#ifndef FINGER_H
#define FINGER_H

#include <QObject>
#include <QString>
#include <QByteArray>

class Finger : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name  READ name  WRITE setName)
    Q_PROPERTY(QString power READ power)
    Q_PROPERTY(QString fid   READ fid)
public:
    void setIntFid(int intFid);

    void setName(QString);

    QString fid();
    QString name();
    QString power();

    QByteArray m_code;  //二进制数据
    int m_intFid;       //指纹ID

private:
    QString m_fid;
    QString m_name;
    QString m_power;

    QString getPowerById(int);
};

Q_DECLARE_METATYPE(Finger*)

#endif // FINGER_H
