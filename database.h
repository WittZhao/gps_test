#ifndef DATABASE_H
#define DATABASE_H
#include <QTextCodec>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTime>
#include <QSqlError>
#include <QtDebug>
#include <QSqlDriver>
#include <QSqlRecord>
#include <QtXlsx>

class DataBase
{
public:
    DataBase();
    ~DataBase();
    QSqlDatabase db_imei;
    QSqlDatabase db_ccid;
    int imei_records_all;
    int ccid_records_all;
    bool createConnection();  //创建一个连接
    bool createTable();       //创建数据库表
    //imei
    bool imei_insert(QString imei, QString sn, QString rawinput, QString ccid);
    bool imei_queryAll();
    bool imei_exist(QString imei);
    bool imei_xls_output(const QString sfile);
    int  imei_records_cnt();
    //ccid
    bool ccid_insert(QString ccid,QString imsi,QString cid);
    bool ccid_update_or_insert(QString ccid, QString ceid, QString imsi);
    int  ccid_records_cnt();
    bool ccid_xls_output(QString sfile);
    //---un use---
    bool updateById(int id);  //更新
    bool deleteById(int id);  //删除
    bool sortById();          //排序
};

#endif // DATABASE_H
