#include "mainwin.h"
#include "utilman.h"
#include <QApplication>
#include <QTranslator>
#include "access_helper.h"
#include "dialogreset.h"
#include <stdio.h>
#include <stdlib.h>


/*
 *2、在linux下采用的是定时器轮询接收缓存，所以当对方发送的字节过多并且显示接收时间的时候，可能出现一包数据不在同一时间接收
 *1、在linux下采用的是定时器轮询接收缓存，所以当对方发送的频率过快的，并且显示接收时间的时候，可能出现粘包的情况
 */
void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QByteArray localMsg = msg.toLocal8Bit();
    switch (type) {
    case QtDebugMsg:
        fprintf(stderr, "Debug: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        break;
//    case QtInfoMsg:
//        fprintf(stderr, "Info: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
//        break;
    case QtWarningMsg:
        fprintf(stderr, "Warning: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        break;
    case QtCriticalMsg:
        fprintf(stderr, "Critical: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        break;
    case QtFatalMsg:
        fprintf(stderr, "Fatal: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        abort();
    }
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //设置右键菜单为中文显示
    //QTranslator translator;
    //translator.load(":/images/serial/qt_zh_CN.qm");
    //a.installTranslator(&translator);
    qInstallMessageHandler(myMessageOutput);
    mainWin w;
    //addFile file;
    w.show();
    return a.exec();
}
