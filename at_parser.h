#ifndef AT_PARSER_H
#define AT_PARSER_H
#include <QString>

class at_parser
{
public:
    at_parser();
    ~at_parser();
    static QString imei_get(QString buf);
    static QString ccid_get(QString buf);
    static QString ceid_get(QString buf);
    static QString imsi_get(QString buf);

};

#endif // AT_PARSER_H
