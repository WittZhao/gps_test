#include "database.h"

DataBase::DataBase()
{

}

DataBase::~DataBase()
{

}



//建立一个数据库连接
bool DataBase::createConnection()
{
    //以后就可以用"sqlite1"与数据库进行连接了
    db_imei = QSqlDatabase::addDatabase("QSQLITE", "sqlite1");
    db_imei.setDatabaseName(".//P310_imei_records.db");
    if( !db_imei.open())
    {
        qDebug() << "imei database connect fail";

        return false;
    }
    db_ccid = QSqlDatabase::addDatabase("QSQLITE", "sqlite2");
    db_ccid.setDatabaseName(".//P310_ccid_records.db");
    if( !db_ccid.open())
    {
        qDebug() << "ccid database connect fail";

        return false;
    }

    return createTable();
}

//创建数据库表
bool DataBase::createTable()
{
    db_imei = QSqlDatabase::database("sqlite1"); //建立数据库连接
    db_ccid = QSqlDatabase::database("sqlite2"); //建立数据库连接
    QSqlQuery imei_query(db_imei);
    QSqlQuery ccid_query(db_ccid);
    bool success = imei_query.exec("create table if not exists imei(id int primary key,time_write varchar,"
                              "imei varchar,sn varchar,rawinput varchar,ccid varchar,status int)");
    if(success)
    {
        qDebug() << QObject::tr("table imei creat ok\n");
        //-----------
        imei_records_all=imei_records_cnt();
        qDebug() <<"imei records cnt:"<<imei_records_all;
    }
    else
    {
        qDebug() << QObject::tr("creat imei table fail！\n");
        //return false;
    }
    //-------------------creat ccid-------
    success = ccid_query.exec("create table if not exists ccid(id int primary key,time_read varchar,"
                              "ccid varchar,imsi varchar,ceid varchar,status int)");
    if(success)
    {
        qDebug() << QObject::tr("table ccid creat ok\n");
        ccid_records_all=ccid_records_cnt();
        qDebug() <<"ccid records cnt:"<<ccid_records_all;
        return true;
    }
    else
    {
        qDebug() << QObject::tr("creat ccid table fail！\n");
        return false;
    }
}

//向数据库中插入记录
bool DataBase::imei_insert(QString imei,QString sn,QString rawinput,QString ccid)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    imei_records_all++;
    QString t= QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss.zzz");
    query.prepare("insert into imei values(?, ?, ?, ?, ?, ?, ?)");
    query.bindValue(0, imei_records_all);
    query.bindValue(1, t);
    query.bindValue(2, imei);
    query.bindValue(3, sn);
    query.bindValue(4, rawinput);
    query.bindValue(5, ccid);
    query.bindValue(6, 0);

    bool success=query.exec();
    if(!success)
    {
        QSqlError lastError = query.lastError();
        qDebug() << lastError.driverText() << QString(QObject::tr("插入失败"));
        return false;
    }
    return true;
}

//查询所有信息
bool DataBase::imei_queryAll()
{
    QSqlQuery query(db_imei);
    query.exec("select * from imei");
    QSqlRecord rec = query.record();
    qDebug() << QObject::tr("imei表字段数：" ) << rec.count();

    while(query.next())
    {
        for(int index = 0; index < 5; index++)
            qDebug() << query.value(index) << " ";
        qDebug() << "\n";
    }
}

bool DataBase::imei_exist(QString imei)
{
    QSqlQuery query(db_imei);
    imei=imei.trimmed();
    query.exec(QString("select * from imei where imei=\"%1\";").arg(imei));
    if(query.next())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool DataBase::imei_xls_output(const QString sfile)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.exec("select * from imei");
    QSqlRecord rec = query.record();
    qDebug() << QObject::tr("imei表字段数：" ) << rec.count();
    QXlsx::Document xlsx("imei_records.xlsx");

    xlsx.write("A1","id");
    xlsx.write("B1","time");
    xlsx.write("C1","imei");
    xlsx.write("D1","sn");
    xlsx.write("E1","rawinput");
    xlsx.write("F1","ccid");
    xlsx.write("G1","status");
    int n=1;
    while(query.next())
    {
        n++;
        qDebug() << QObject::tr("cnt:" ) <<n;
        xlsx.write(QString().sprintf("A%d",n),query.value(0).toString());
        xlsx.write(QString().sprintf("B%d",n),query.value(1).toString());
        xlsx.write(QString().sprintf("C%d",n),query.value(2).toString());
        xlsx.write(QString().sprintf("D%d",n),query.value(3).toString());
        xlsx.write(QString().sprintf("E%d",n),query.value(4).toString());
        xlsx.write(QString().sprintf("F%d",n),query.value(5).toString());
        xlsx.write(QString().sprintf("G%d",n),query.value(6).toString());
    }
    xlsx.save();
    if(sfile!=NULL)
    {
        xlsx.saveAs(sfile);
    }
}

int DataBase::imei_records_cnt()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.exec("select * from imei");
    //QSqlRecord rec = query.record();
    //qDebug() << QObject::tr("imei表字段数：" ) << rec.count();
    //qDebug() <<"numRowAffected:" << query.size();
    int i=0;
    while(query.next())
    {
        i++;
    }
    qDebug() <<"i value:" <<i;
    return i;
}
int DataBase::ccid_records_cnt()
{
    QSqlQuery query(db_ccid);
    query.exec("select * from ccid");
    //QSqlRecord rec = query.record();
    //qDebug() << QObject::tr("imei表字段数：" ) << rec.count();
    int i=0;
    while(query.next())
    {
        i++;
    }
    return i;
}

bool DataBase::ccid_xls_output(QString sfile)
{
    QSqlQuery query(db_ccid);
    query.exec("select * from ccid");

    QXlsx::Document xlsx("ccid_records.xlsx");

    xlsx.write("A1","id");
    xlsx.write("B1","time");
    xlsx.write("C1","ccid");
    xlsx.write("D1","imsi");
    xlsx.write("E1","ceid");
    xlsx.write("F1","status");
    int n=1;
    while(query.next())
    {
        n++;
        qDebug() << QObject::tr("cnt:" ) <<n;
        xlsx.write(QString().sprintf("A%d",n),query.value(0).toString());
        xlsx.write(QString().sprintf("B%d",n),query.value(1).toString());
        xlsx.write(QString().sprintf("C%d",n),query.value(2).toString());
        xlsx.write(QString().sprintf("D%d",n),query.value(3).toString());
        xlsx.write(QString().sprintf("E%d",n),query.value(4).toString());
        xlsx.write(QString().sprintf("F%d",n),query.value(5).toString());
    }

    xlsx.save();
    if(sfile!=NULL)
    {
        xlsx.saveAs(sfile);
    }
}
bool DataBase::ccid_insert(QString ccid,QString imsi,QString ceid)
{
    QSqlQuery query(db_ccid);
    query.exec("select * from ccid");
    QSqlRecord rec = query.record();
    int cnt= rec.count();
    ccid_records_all++;
    QString t= QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss.zzz");
    query.prepare("insert into ccid values(?, ?, ?, ?, ?, ?)");
    query.bindValue(0, ccid_records_all);
    query.bindValue(1, t);
    query.bindValue(2, ccid);
    query.bindValue(3, imsi);
    query.bindValue(4, ceid);
    query.bindValue(5, 0);

    bool success=query.exec();
    if(!success)
    {
        QSqlError lastError = query.lastError();
        qDebug() << lastError.driverText() << QString(QObject::tr("插入失败"));
        return false;
    }
    return true;
}

bool DataBase::ccid_update_or_insert(QString ccid,QString ceid,QString imsi)
{
    QSqlQuery query(db_ccid);
    query.exec(QString("select * from ccid where ccid=\"%1\";").arg(ccid));
    QString t= QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss.zzz");
    if(query.next())
    {
        int status=query.value(5).toInt();
        status++;
        query.prepare(QString("update ccid set time_read=\"%1\" ,status=%2,ceid=\"%3\",imsi=\"%4\" where ccid=\"%5\"").arg(t).arg(status).arg(ceid).arg(imsi).arg(ccid));
        bool success=query.exec();
        if(!success)
        {
            QSqlError lastError = query.lastError();
            qDebug() << lastError.driverText() << QString(QObject::tr("update fail"));
            return false;
        }
        else
        {
            qDebug() << QString("update ok :%1").arg(status);
        }
    }
    else
    {
        qDebug() << QString(QObject::tr("update null"));
        ccid_insert(ccid,imsi,ceid);
    }

}


//根据ID删除记录
bool DataBase::deleteById(int id)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.prepare(QString("delete from automobil where id = %1").arg(id));
    if(!query.exec())
    {
        qDebug() << "删除记录失败！";
        return false;
    }
    return true;
}

//根据ID更新记录
bool DataBase::updateById(int id)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.prepare(QString("update automobil set attribute=?,type=?,"
                             "kind=?, nation=?,"
                             "carnumber=?, elevaltor=?,"
                             "distance=?, oil=?,"
                             "temperature=? where id=%1").arg(id));

     query.bindValue(0,"四轮");
     query.bindValue(1,"轿车");
     query.bindValue(2,"富康");
     query.bindValue(3,rand()%100);
     query.bindValue(4,rand()%10000);
     query.bindValue(5,rand()%300);
     query.bindValue(6,rand()%200000);
     query.bindValue(7,rand()%52);
     query.bindValue(8,rand()%100);

     bool success=query.exec();
     if(!success)
     {
          QSqlError lastError = query.lastError();
          qDebug() << lastError.driverText() << QString(QObject::tr("更新失败"));
     }
    return true;
}

//排序
bool DataBase::sortById()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    bool success=query.exec("select * from automobil order by id desc");
    if(success)
    {
        qDebug() << QObject::tr("排序成功");
        return true;
    }
    else
    {
        qDebug() << QObject::tr("排序失败！");
        return false;
    }
}
