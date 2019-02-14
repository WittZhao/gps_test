#ifndef MD5HELPER_H
#define MD5HELPER_H
#include<QCryptographicHash>


class md5Helper
{
public:
    md5Helper();
    ~md5Helper();
    QString encryption(QString devicename,QString productkey,QString devicesSecret,QString productSecret);
    QString username(QString productkey,QString productSecret,QString deviceId,QString devicesSecret);

};

#endif // MD5HELPER_H
