#ifndef FUSE_PARSER_H
#define FUSE_PARSER_H
#include<QDebug>
#include <string.h>

class fuse_parser
{
public:
    fuse_parser();
    ~fuse_parser();
    /*
    static void parser(QByteArray in)
    {
        qDebug()<<"start parser:"<<in;
        char * pc = (char *)in.data();
        char *p_productKey;
        char *pend;
        pc=strstr(pc,"{");
        qDebug()<<"get body"<<pc;
        pc=strstr(pc,"productKey");
        if(pc!=NULL)
        {
            pc=strstr(pc,":");
            if(pc!=NULL)
            {
                p_productKey=pc+1;
                pend=strstr(p_productKey,";");
                if(pend!=NULL)
                {
                    pc=pend+1;
                    pend='\0';
                    qDebug()<<"get prodcut id:"<<p_productKey;
                    qDebug()<<"next str:"<<pc;
                }

            }
        }
    }
    */
};

#endif // FUSE_PARSER_H
