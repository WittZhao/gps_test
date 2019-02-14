#ifndef PARAM_H
#define PARAM_H
#include<QString>
#include<QDebug>

class param_t
{
public:
    param_t();
    ~param_t();
    QString  gps_test_sat_num;
    QString  gps_test_min_nic;
    QString  gps_test_max_time;
    QString  gps_test_max_time_agps;



    static QString param_get(QString buf,QString name)
    {
        //qDebug()<<"from "<< buf<<" get "<<name<<":";
        int n_name;
        int n_seperator;
        int nend;
        QString value;
        buf.trimmed();
        n_name=buf.indexOf(name);
        if(n_name<0)
            return NULL;
        n_seperator=buf.indexOf(":",n_name);
        if(n_seperator<0)
            return NULL;
        nend=buf.indexOf(";",n_seperator);
        if(nend<0)
            return NULL;
        value=buf.mid(n_seperator+1,nend-n_seperator-1);
        qDebug()<<name<<":"<<value;
        return value;
    }
    static QString to_string(param_t p)
    {
        return QString("sat num:%1\nsni:%2\nmax tiem:%3\n")
                .arg(p.gps_test_sat_num)
                .arg(p.gps_test_min_nic)
                .arg(p.gps_test_max_time);

    }
    static bool is_valid(param_t p)
    {

        return true;
    }
    static bool mcu_id_check(param_t p)
    {
        return true;
    }
    static bool check(param_t pw,param_t pr,QString &err)
    {

#if 0
        if(pw.model!=pr.model)
        {
            err="model error";
            return false;
        }
        if(pw.swVersion!=pr.swVersion)
        {
            err="swVersion error";
            return false;
        }
        if(pw.fwVersion!=pr.fwVersion)
        {
            err="fwVersion error";
            return false;
        }
#endif
        return true;
    }
};

#endif // PARAM_H
