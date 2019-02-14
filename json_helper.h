#ifndef JSON_HELPER_H
#define JSON_HELPER_H
#include<QJsonDocument>
#include<QJsonObject>
#include<QByteArray>
#include<QString>
#include<QVariant>



class json_helper
{
public:
    json_helper();
    ~json_helper();
    QString json_make();
    void json_parse(QString &str);
    void get_server(QByteArray &buf, QString &host);
   static QString json_beep_make(int v);
   static QString json_lockopen_make();
   static QString json_reset_make();
   static QString json_reboot_make();
   static QString json_param_ask_make();
};

#endif // JSON_HELPER_H
