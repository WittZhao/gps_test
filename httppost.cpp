#include "httppost.h"
#include<QDebug>
#include"json_helper.h"
#include "ui_mainwin.h"
#include "mainwin.h"
#include "globle.h"

httppost::httppost()
{

}

httppost::~httppost()
{

}
int post_flag;
QString ota_post_data;
QString ota_post_result;
void httppost::post(QString deviceName,QString productKey,QString sign)
{
  QNetworkAccessManager* network_manager = new QNetworkAccessManager();
  QNetworkRequest network_request;
  QByteArray post_data;
  qDebug()<<"http post";
  //设置发送的数据
  post_data.append("deviceName="+deviceName);
  post_data.append("&productKey="+productKey);
  post_data.append("&signMethod=MD5");
  post_data.append("&sign="+sign);


  //设置头信息
  network_request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
  network_request.setHeader(QNetworkRequest::ContentLengthHeader, post_data.length());

  //设置url
  network_request.setUrl(QUrl("http://iot.channel.aliyun.com/iot/auth"));

  //connect(network_manager, &QNetworkAccessManager::finished, this, &HttpManager::replyFinished);
  connect(network_manager,SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));

  //发送请求
  network_manager->post(network_request, post_data);
}

void httppost::post_p310_ota(QString token,QString eid,QString imsi, QString newMSISDN)
{
  QNetworkAccessManager* network_manager = new QNetworkAccessManager();
  QNetworkRequest network_request;
  QByteArray post_data;
  qDebug()<<"http post";
  //设置发送的数据
//  post_data.append("access_token="+token);
  post_data.append("eid="+eid);
  post_data.append("&IMSI="+imsi);
  post_data.append("&newMSISDN="+newMSISDN);
    ota_post_data = post_data;
//    ota_post_data_display(post_data);
  //设置头信息
  network_request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded\r\naccess_token:TK1.0LFTYELT12S00000");
  network_request.setHeader(QNetworkRequest::ContentLengthHeader, post_data.length());

  //设置url
  network_request.setUrl(QUrl("http://39.155.163.206:8888/batch/api/onlineInfo"));

  //connect(network_manager, &QNetworkAccessManager::finished, this, &HttpManager::replyFinished);
  connect(network_manager,SIGNAL(finished(QNetworkReply*)), this, SLOT(reply_ota_post(QNetworkReply*)));

  //发送请求
  network_manager->post(network_request, post_data);
}


void httppost::post_p310(QString eid,QString imsi,QString newMSISDN)
{
    QString token = "TK1.0LFTYELT12S00000";
    post_p310_ota(token, eid, imsi,newMSISDN);
}

void httppost::get(QString url)
{
    QNetworkAccessManager* network_manager = new QNetworkAccessManager();
    qDebug()<<"http get";
    QUrl turl(url);
    connect(network_manager,SIGNAL(finished(QNetworkReply*)), this, SLOT(replyGet(QNetworkReply*)));
    network_manager->get(QNetworkRequest(turl));
}

void httppost::replyFinished(QNetworkReply* reply)
{
  //获取响应的信息，状态码为200表示正常
  QVariant status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
  qDebug()<<"http reply:111";
  //无错误返回
  if(reply->error() == QNetworkReply::NoError)
  {
      QByteArray bytes = reply->readAll();  //获取字节
      QString result(bytes);  //转化为字符串
      qDebug()<<"http reply:"<<result;
      json_helper h;
      QString server;
      h.get_server(bytes,server);
      qDebug()<<"get server:"<<server;
      emit host_get(server);
  }
  else
  {
      //处理错误
  }

  //收到响应，因此需要处理
  delete reply;
}

void httppost::replyGet(QNetworkReply *reply)
{
    //获取响应的信息，状态码为200表示正常
    int status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    qDebug()<<"get reply:"<<status_code;
    //无错误返回
    if(reply->error() == QNetworkReply::NoError)
    {
        QByteArray bytes = reply->readAll();  //获取字节
        QString result(bytes);  //转化为字符串
        qDebug()<<"http reply:"<<result;
        json_helper h;
        QString server;
        h.get_server(bytes,server);
        qDebug()<<"get server:"<<server;
        emit host_get(server);
    }
    else
    {
        //处理错误
    }

    //收到响应，因此需要处理
    delete reply;
}

void httppost::reply_ota_post(QNetworkReply *reply)
{
    //获取响应的信息，状态码为200表示正常
    int status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    qDebug()<<"post ota reply:"<<status_code;
    //无错误返回
    if(reply->error() == QNetworkReply::NoError)
    {
        QByteArray bytes = reply->readAll();  //获取字节
        QString result(bytes);  //转化为字符串
        ota_post_result = bytes;
        post_flag = 1;
//        ui->lb_ota_post_result->setText(bytes);
        qDebug()<<"http post reply:"<<result;
        json_helper h;
        QString server;
        h.get_server(bytes,server);
        qDebug()<<"post server:"<<server;
        emit host_get(server);
    }
    else
    {
        //处理错误
    }

    //收到响应，因此需要处理
    delete reply;
}
