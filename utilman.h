#ifndef UTILMAN_H
#define UTILMAN_H

/*****************************/
#include <QDesktopWidget>
#include <QCoreApplication>
#include <QApplication>
/****************************/
#include <QTextCodec>
/****************************/
#include <QFile>
#include <QTime>
#include <QDateTime>
/****************************/
#include <QMessageBox>
#include <QtDebug>

/*描述：辅助工具类 */
class utilMan:public QObject {
public:

  //窗体居中显示
  static void windowCentered(QWidget *mainW) {
    int screenX=qApp->desktop()->width();
    int screenY=qApp->desktop()->height()-60;
    int wndX=mainW->width();
    int wndY=mainW->height();
    QPoint movePoint((screenX-wndX)/2,(screenY-wndY)/2);
    mainW->move(movePoint);
  }

  //延时ms
  static void sleep(int msec) {
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
      QCoreApplication::processEvents(QEventLoop::AllEvents, 100);//处理未处理的事件
  }

  //延时ms
  /*static void sleep(int msec)//自定义Qt延时函数,单位毫秒
  {
      QDateTime last = QDateTime::currentDateTime();
      QDateTime now;
      while (1)
      {
          now = QDateTime::currentDateTime();
          if (last.msecsTo(now) >= msec)
          {
              break;
          }
      }
  }*/

  //字节数组转16进制字符串，用于16进制显示
  static QString toHexStr(QByteArray data) {
    QString tempStr="";
    QString hexStr=data.toHex();
    //加空格
    for (int i=0; i<hexStr.length(); i=i+2) {
        tempStr+=hexStr.mid(i,2)+" ";
      }
    //trimmed():删除字符串开头和末尾的空格
    //toUpper():将字符串转换成大写
    return tempStr.trimmed().toUpper();
  }

  //16进制字符串转字节数组
  static QByteArray HexStrToByteArray(QString str) {
    QByteArray senddata = str.toLatin1();
    QByteArray  tempData;
    int         count = 0;
    int         len = senddata.size();
    char hstr,lstr;
    bool hFlag = false;
    bool lFlag = false;
    for(int i = 0; i < len;) {
        //高位
        if(!hFlag) {
            if(senddata[i] != ' ') { //高位不是空格
                hstr = convertHexChar(senddata[i]);
                if(i == (len - 1)) { //此位是最后一位了
                    hFlag = true;
                    lFlag = true;
                    lstr = hstr;
                    hstr = 0;
                    i ++;
                  } else {
                    i ++;
                    hFlag = true;
                  }
              } else { //高位是空格
                i ++;//这里一直往后面找，直到找到不是空格或者结束为止，这里也起到消除中间或者头部多余的空格的作用
              }
          } else { //低位
            if(!lFlag) {
                if(senddata[i] == ' ') { //如果低位是空格,则高位为0，原来的高位变成低位
                    lstr = hstr;
                    hstr = 0;
                    i ++;
                  } else { //如果低位不为空格
                    lstr = convertHexChar(senddata[i]);
                    i ++;
                  }
                lFlag = true;
              }
          }
        if((hFlag)&&(lFlag)) {
            tempData[count ++] = (hstr << 4) + lstr;
            hFlag = false;
            lFlag = false;
          }
      }
    return tempData;
  }

  static  char convertHexChar(char ch) {
    if((ch >= '0') && (ch <= '9'))
      return ch-0x30;
    else if((ch >= 'A') && (ch <= 'F'))
      return ch-'A'+10;
    else if((ch >= 'a') && (ch <= 'f'))
      return ch-'a'+10;
    else return (0);
  }
  static int STR_AA(QString &aa)
  {
       aa.replace("\\n","\n");
       aa.replace("\\r","\r");
       aa.replace("\\x1a","\x1a");
       aa.replace("\\0x1a","\x1a");
  }
};



#endif // UTILMAN_H
