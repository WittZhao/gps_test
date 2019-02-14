#ifndef HTTPPOST_H
#define HTTPPOST_H
#include<QObject>
#include<QNetworkReply>
#include <QNetworkAccessManager>
#include <QNetworkRequest>

class httppost: public QObject
{
  Q_OBJECT
public:
    httppost();
    ~httppost();
    void post(QString deviceName, QString productKey, QString sign);
    void post_p310_ota(QString token,QString eid,QString imsi, QString newMSISDN);
    void post_p310(QString eid,QString imsi,QString newMSISDN);
    void get(QString url);
signals:
    void host_get(QString host);
private slots:
    void replyFinished(QNetworkReply *reply);
    void replyGet(QNetworkReply *reply);
    void reply_ota_post(QNetworkReply *reply);

};
#endif // HTTPPOST_H
