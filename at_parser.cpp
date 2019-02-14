#include "at_parser.h"

at_parser::at_parser()
{

}

at_parser::~at_parser()
{

}

QString at_parser::imei_get(QString buf)
{
    if(buf.contains("+EGMR:"))
    {
        int start=buf.indexOf(':');
        int end=buf.indexOf('\r',start);

        if((start>0)&&(end>0))
        {
            return buf.mid(start+1,end-start);
        }
        else
        {
            return NULL;
        }
    }
    else
        return NULL;

}

//AT+CCID

//+CCID: 898607B8101730212093

//OK
QString at_parser::ccid_get(QString buf)
{
    QString ccid;
    if(buf.contains("CCID:"))
    {
        int start=buf.indexOf(':');
        int end=buf.indexOf('\r',start);

        if((start>0)&&(end>0))
        {
            ccid=buf.mid(start+1,end-start);
            ccid.trimmed();
            return ccid;
        }
        else
        {
            return NULL;
        }
    }
    else
        return NULL;
}

QString at_parser::imsi_get(QString buf)
{
    QString imsi;
    if((buf.contains("AT+CIMI")) && buf.count() > 15)
    {
        int start = buf.indexOf("\r\n") + 2;
//        int start = buf.indexOf("\r\n\r\n") + 4;
        int end=buf.indexOf('\r',start);

        if((start>0)&&(end>0))
        {
            imsi=buf.mid(start,end-start);
            imsi.trimmed();
            return imsi;
        }
        else
        {
            return NULL;
        }
    }
    else
    {
        int start = buf.indexOf('\r\n\r\n') + 2;
        int end=buf.indexOf('\r',start);

        if((end>0))
        {
            imsi=buf.mid(start,end -start);
            imsi.trimmed();
            return imsi;
        }
        else
        {
            return NULL;
        }
    }
}

QString at_parser::ceid_get(QString buf)
{
    QString ceid;
    if(buf.contains(":"))
    {
        int start=buf.indexOf(':');
        int end=buf.indexOf('\r',start);

        if((start>0)&&(end>0))
        {
            ceid=buf.mid(start+1,end-start);
            ceid.trimmed();
            return ceid;
        }
        else
        {
            return NULL;
        }
    }
    else
        return NULL;
}
