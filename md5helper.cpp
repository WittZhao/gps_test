#include "md5helper.h"
#include "utilman.h"
#include <QString>

md5Helper::md5Helper()
{

}

md5Helper::~md5Helper()
{

}

QString md5Helper::encryption(QString devicename,QString productkey,QString devicesSecret,QString productSecret)
{
 QString content=productSecret+"deviceName"+devicename+"productKey"+productkey+"signMethodMD5"+devicesSecret;
 qDebug()<<"md5 11:"<<content;
 QByteArray r=QCryptographicHash::hash (content.toLatin1(), QCryptographicHash::Md5 );
 QString qs=r.toHex().toUpper();
  qDebug()<<"md5 22:"<<qs;
 return qs;
}

QString md5Helper::username(QString productkey,QString productSecret,QString deviceId,QString devicesSecret)
{
 QString content=productkey+productSecret+deviceId+devicesSecret;
 QByteArray r=QCryptographicHash::hash (content.toLatin1(), QCryptographicHash::Md5 );
 QString qs=r.toHex().toUpper();
 qDebug()<<"username:"<<qs;
 return qs;
}
