#include "json_helper.h"
#include<QDebug>

json_helper::json_helper()
{

}

json_helper::~json_helper()
{

}

QString json_helper::json_make()
{
  QJsonObject json;
  json.insert("name", QString("Qt"));
  json.insert("version", 5);
  json.insert("windows", true);


  QJsonDocument document;
  document.setObject(json);
  QByteArray byte_array = document.toJson(QJsonDocument::Compact);
  QString json_str(byte_array);
  qDebug()<<"json string:"<<json_str;
  return json_str;
}
QString json_helper::json_beep_make(int v)
{
  QJsonObject json;
  json.insert("event", "beep");
  json.insert("value", v);

  QJsonDocument document;
  document.setObject(json);
  QByteArray byte_array = document.toJson(QJsonDocument::Compact);
  QString json_str(byte_array);
  return json_str;
}
QString json_helper::json_lockopen_make()
{
  QJsonObject json;
  json.insert("event", "unlock");
  json.insert("value", 0);

  QJsonDocument document;
  document.setObject(json);
  QByteArray byte_array = document.toJson(QJsonDocument::Compact);
  QString json_str(byte_array);
  return json_str;
}
QString json_helper::json_reset_make()
{
  QJsonObject json;
  json.insert("event", "reset");
  json.insert("value", 0);

  QJsonDocument document;
  document.setObject(json);
  QByteArray byte_array = document.toJson(QJsonDocument::Compact);
  QString json_str(byte_array);
  return json_str;
}
QString json_helper::json_reboot_make()
{
  QJsonObject json;
  json.insert("event", "reboot");
  json.insert("value", 0);

  QJsonDocument document;
  document.setObject(json);
  QByteArray byte_array = document.toJson(QJsonDocument::Compact);
  QString json_str(byte_array);
  return json_str;
}
QString json_helper::json_param_ask_make()
{
  QJsonObject json;
  json.insert("event", "param");

  QJsonDocument document;
  document.setObject(json);
  QByteArray byte_array = document.toJson(QJsonDocument::Compact);
  QString json_str(byte_array);
  return json_str;
}

void json_helper::json_parse(QString &str)
{
  QJsonParseError json_error;
  QByteArray byte_array=str.toLatin1();
  QJsonDocument parse_doucment = QJsonDocument::fromJson(byte_array, &json_error);
  if(json_error.error == QJsonParseError::NoError)
    {
      if(parse_doucment.isObject())
        {
          QJsonObject obj = parse_doucment.object();
          if(obj.contains("name"))
            {
              QJsonValue name_value = obj.take("name");
              if(name_value.isString())
                {
                  QString name = name_value.toString();
                  qDebug()<<"name:"<<name;
                }
            }
          if(obj.contains("version"))
            {
              QJsonValue version_value = obj.take("version");
              if(version_value.isDouble())
                {
                  int version = version_value.toVariant().toInt();
                  qDebug()<<"version:"<<version;
                }
            }
          if(obj.contains("windows"))
            {
              QJsonValue version_value = obj.take("windows");
              if(version_value.isBool())
                {
                  bool flag = version_value.toBool();
                  qDebug()<<"flag:"<<flag;
                }
            }
        }
  }
}

void json_helper::get_server(QByteArray &buf, QString &host)
{
  QJsonParseError json_error;
  QJsonDocument parse_doucment = QJsonDocument::fromJson(buf, &json_error);
  if(json_error.error == QJsonParseError::NoError)
    {
      if(parse_doucment.isObject())
        {
          QJsonObject obj = parse_doucment.object();
          if(obj.contains("servers"))
            {
              QJsonValue name_value = obj.take("servers");
              if(name_value.isString())
                {
                  host= name_value.toString();
                }
            }
        }
  }
}

