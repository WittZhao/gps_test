#-------------------------------------------------
#
# Project created by QtCreator 2015-07-30T09:07:08
#
#-------------------------------------------------

QT       += core gui sql  webkitwidgets
QT       += xlsx
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET =  p310_tool
TEMPLATE = app

RC_FILE = com.rc

SOURCES += main.cpp\
        mainwin.cpp \
    qextserialport.cpp \
    access_helper.cpp \
    fuse_parser.cpp \
    param.cpp \
    setting_helper.cpp \
    dialogreset.cpp \
    com_thread.cpp \
    lineeditgroup.cpp \
    qxtglobalshortcut.cpp \
    qxtglobalshortcut_win.cpp \
    json_helper.cpp \
    mainlog.cpp \
    httppost.cpp \
    md5helper.cpp \
    gps_helper.cpp \
    database.cpp \
    gps_setting.cpp \
    at_parser.cpp \
    qcustomplot.cpp

HEADERS  += mainwin.h \
    utilman.h \
    qextserialport.h \
    qextserialport_global.h \
    access_helper.h \
    fuse_parser.h \
    param.h \
    setting_helper.h \
    dialogreset.h \
    com_thread.h \
    lineeditgroup.h \
    qextserialport_p.h \
    qxtglobal.h \
    qxtglobalshortcut.h \
    qxtglobalshortcut_p.h \
    json_helper.h \
    mainlog.h \
    httppost.h \
    md5helper.h \
    gps_helper.h \
    database.h \
    gps_setting.h \
    at_parser.h \
    qcustomplot.h \
    globle.h

win32 { SOURCES += qextserialport_win.cpp }
unix { SOURCES += qextserialport_unix.cpp }




FORMS    += mainwin.ui \
    dialogreset.ui \
    mainlog.ui \
    gps_setting.ui

RESOURCES += \
    images.qrc


#LIBS += -LE:/SmartLock/flash_app_v2/tool/lib -lqmqtt
INCLUDEPATH += $$PWD/lib
DEPENDPATH += $$PWD/lib
