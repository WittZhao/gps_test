#ifndef ACCESS_HELPER_H
#define ACCESS_HELPER_H
#include<QDebug>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QCoreApplication>
#include "param.h"
extern int id_all;
extern int id_used;
extern int id_free;
class access_helper
{
public:

    static bool connect(QString &dbname)
    {
        //QString sDbNm = "C:/yoobike.accdb";
        QString runPath = QCoreApplication::applicationDirPath();
        QString sDbNm = QString("%1/%2").arg(runPath).arg(dbname);
        qDebug()<<"db path:"<<sDbNm;
        /************* 此处数据库路径得修改成自己的！ *********/

        QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//设置数据库驱动
        QString dsn = QString("DRIVER={Microsoft Access Driver (*.mdb, *.accdb)}; FIL={MS Access};DBQ=%1;").arg(sDbNm);//连接字符串
        db.setDatabaseName(dsn);//设置连接字符串
        db.setUserName("");//设置登陆数据库的用户名
        db.setPassword("");//设置密码
        bool ok = db.open();
        if (!ok) {
            db.close();
            qDebug()<<"Database open error!";
        }
        else
        {
            qDebug()<<"connect to access!";
            // db.close();
        }
        return ok;
    }

    /*
  static int id_re_count()
  {
    QSqlQuery query;
    query.prepare("select * from bike");
    query.exec();
    id_all=0;
    id_used=0;
    id_free=0;
    while (query.next())
      {
        id_all++;
        //qDebug()<<query.value(0).toString()<<":"<<query.value(1).toString();
        // qDebug()<<query.value("dev_id").toString()<<":"<<query.value("dev_secret").toString();
        QString mcuid=query.value("mcu_id").toString();
        if(mcuid!=NULL)
          {
            id_used++;
          }
        else
          {
            id_free++;
          }
      }
    qDebug()<<"id_num_all:"<<id_all;
    query.clear();//Text Edit控件中显示你得到的数据
    return id_all;
  }
*/
    static int id_re_count()
    {
        QSqlQuery query;
        query.prepare("select * from bike");
        query.exec();
        id_all=0;
        id_used=0;
        id_free=0;
        while (query.next())
        {
            id_all++;
            //qDebug()<<query.value(0).toString()<<":"<<query.value(1).toString();
            // qDebug()<<query.value("dev_id").toString()<<":"<<query.value("dev_secret").toString();
            //QString mcuid=query.value("mcu_id").toString();
            // QString tel=query.value("telnumber").toString();
            // if((tel!=NULL)&&(tel.size()>=2))
            QString used=query.value("used").toString();
            if((used!=NULL)&&(used.contains("yes")))
            {
                id_used++;
            }
            else
            {
                id_free++;
            }
        }
        qDebug()<<"id_num_all:"<<id_all;
        query.clear();//Text Edit控件中显示你得到的数据
        return id_all;
    }
    /*
    static int id_all()
    {
        int num_all;
        QSqlQuery query;
        //查询所有
        query.prepare("select * from bike");
        query.exec();
        num_all=0;
        while (query.next())
        {
            num_all++;
            //qDebug()<<query.value(0).toString()<<":"<<query.value(1).toString();
            // qDebug()<<query.value("dev_id").toString()<<":"<<query.value("dev_secret").toString();
        }
        qDebug()<<"id_num_all:"<<num_all;
        query.clear();//Text Edit控件中显示你得到的数据
        return num_all;
    }
    static int id_free()
    {
        int num_free;
        QSqlQuery query;

        //查询未使用
        query.prepare("select * from bike WHERE used<>'yes'");
        query.exec();
        num_free=0;
        while (query.next())
        {
            num_free++;
        }
        qDebug()<<"id_num_free:"<<num_free;
        query.clear();
        return num_free;
    }
    static int id_used()
    {
        int num_used;
        QSqlQuery query;
        //查询已使用
        query.prepare("select * from bike WHERE used='yes'");
        query.exec();
        num_used=0;
        while (query.next())
        {
            num_used++;
        }
        qDebug()<<"id_num_used:"<<num_used;
        query.clear();
        return num_used;
    }
    */
    static bool param_get_free(param_t &param)
    {
        QSqlQuery query;
        query.prepare("select * from bike");
        query.exec();
        while (query.next())
        {
            QString mcuid=query.value("mcu_id").toString();
            if((mcuid==NULL)||(mcuid.contains("yes")))
            {
//                param.deviceId=query.value("dev_id").toString();
//                param.deviceSecret=query.value("dev_secret").toString();
//                param.deviceName=query.value("dev_name").toString();
                return true;
            }
        }
        return false;
    }
    static bool param_get_use_mcuid(QString mcuid,param_t &param)
    {
        QSqlQuery query;
        query.prepare("select * from bike WHERE mcu_id=?");
        query.bindValue(0,mcuid);
        query.exec();
        if(query.next())
        {
//            param.deviceId=query.value("dev_id").toString();
//            param.deviceSecret=query.value("dev_secret").toString();
//            param.deviceName=query.value("dev_name").toString();
            return true;
        }
        else
        {
            /*
        query.prepare("select * from bike");
        query.exec();
        while(query.next())
          {
            QString mcuid=query.value("mcu_id").toString();
            if((mcuid==NULL)||(mcuid==""))
              {
                param.deviceId=query.value("dev_id").toString();
                param.deviceSecret=query.value("dev_secret").toString();
                param.deviceName=query.value("code").toString();
                param.qr_code=query.value("qr_code").toString();
                return true;
              }
          }
          */
            return false;
        }
    }
    static bool param_get_use_qrcode(QString qrcode,param_t &param)
    {
        QSqlQuery query;
        query.prepare("select * from bike WHERE qr_code=?");
        query.bindValue(0,qrcode);
        query.exec();
        if(query.next())
        {
//            param.deviceId=query.value("dev_id").toString();
//            param.deviceSecret=query.value("dev_secret").toString();
//            param.deviceName=query.value("code").toString();
            // param.qr_code=query.value("qr_code").toString();
            // param.tel=query.value("telnumber").toString();
            return true;
        }
        else
        {
            return false;
        }
    }
    static bool get_tel(QString imsi,QString &tel)
    {
        QSqlQuery query;
        query.prepare("select * from tel WHERE IMSI=?");
        query.bindValue(0,imsi);
        query.exec();
        if(query.next())
        {
            tel=query.value("tel").toString();
            return true;
        }
        else
        {
            return false;
        }
    }
    static bool dev_set_used(param_t& p)
    {
        QSqlQuery query;
        bool r;
        query.prepare("UPDATE bike SET used=? ,mcu_id=? where dev_name=?");//修改数据
        query.bindValue(0,"yes");
//        query.bindValue(1,p.mcuId);
//        query.bindValue(2,p.deviceName);
        r=query.exec();
        return r;
    }
    static int set_free_use_mcuid(param_t& p)
    {
        QSqlQuery query;
        bool r;
//        //-----先查询是否存在--------
//        query.prepare("select * from bike WHERE mcu_id=?");
//        //query.bindValue(0,p.mcuId);
//        query.exec();
//        if(query.next())
//        {
//            //-----修改为未使用--------------
//            query.prepare("UPDATE bike SET used=? ,mcu_id=? where mcu_id=?");
//            query.bindValue(0,"no");
//            query.bindValue(1,"");
//            query.bindValue(2,p.mcuId);
//            r=query.exec();
//            if(r)
//            {
//                return 0;
//            }
//            else
//            {
//                return -2;
//            }
//        }
//        else
//        {
//            return -1;
//        }
    }

};

#endif // ACCESS_HELPER_H
