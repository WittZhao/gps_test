/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_mainWin
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *set_Layout;
    QGroupBox *paraSet_GroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *portName_Layout;
    QLabel *paraSet_Label1;
    QComboBox *portName_cBox;
    QHBoxLayout *baud_Layout;
    QLabel *paraSet_Label2;
    QComboBox *baud_cBox;
    QHBoxLayout *dataBit_Layout;
    QLabel *paraSet_Label3;
    QComboBox *dataBit_cBox;
    QHBoxLayout *parity_Layout;
    QLabel *paraSet_Label4;
    QComboBox *parity_cBox;
    QHBoxLayout *stopBit_Layout;
    QLabel *paraSet_Label5;
    QComboBox *stopBit_cBox;
    QSpacerItem *spacer4;
    QPushButton *open_Button;
    QTabWidget *tabMain;
    QWidget *tabupdate;
    QGroupBox *groupBox_2;
    QPushButton *ButtonBinOpen;
    QPushButton *ButtonBinWriteStart;
    QPushButton *ButtonBinWriteStop;
    QProgressBar *pb_bin;
    QLabel *lb_binfile;
    QLabel *lb_fuse_resulte;
    QCheckBox *CheckBoxIsBoot;
    QWidget *tabtest;
    QToolBox *toolBox_2;
    QWidget *page_4;
    QPushButton *pb_test_lock_check;
    QPushButton *pb_test_reboot;
    QPushButton *pb_test_lockopen;
    QPushButton *pb_test_inquery;
    QPushButton *pb_test_param_read;
    QPushButton *pb_test_lock_reset;
    QPushButton *pb_test_power_info;
    QPushButton *pb_test_savemode;
    QPushButton *pb_test_runmode;
    QPushButton *pb_test_pcb_check;
    QPushButton *pb_test_debug_on;
    QPushButton *pb_test_debug_off;
    QPushButton *pb_test_savemode_2;
    QPushButton *pb_test_savemode_3;
    QPushButton *pb_test_savemode_4;
    QPushButton *pb_test_savemode_5;
    QPushButton *pb_test_qsclk;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pb_test_qsclk_2;
    QPushButton *pb_test_qsclk_3;
    QWidget *page_11;
    QPushButton *pb_test_log_r;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pb_test_debug_off_AT_2;
    QPushButton *pb_test_debug_on_AT;
    QPushButton *pb_test_debug_off_AT;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *le_cgdcont;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QWidget *page_5;
    QPushButton *pb_test_debug_off_AXIS;
    QPushButton *pb_test_debug_on_AXIS;
    QPushButton *pb_test_motor_f;
    QPushButton *pb_test_motor_b;
    QPushButton *pb_test_heartbeat_send;
    QPushButton *pb_test_param_clear;
    QPushButton *pb_test_debug_on_AXIS_2;
    QPushButton *pb_test_heartbeat_send_2;
    QLineEdit *le_qiopen;
    QLineEdit *le_net_send_content;
    QPushButton *pb_test_motor_b_2;
    QPushButton *pb_test_debug_on_AXIS_3;
    QPushButton *pb_test_debug_on_AXIS_4;
    QLineEdit *le_ping_host;
    QPushButton *pushButton_12;
    QWidget *page_7;
    QToolBox *tb_gps_3;
    QWidget *page_12;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *lb_gps_result;
    QProgressBar *progressBar_gps_test;
    QPushButton *pushButton_gps_start;
    QPushButton *pushButton_gps_stop;
    QPushButton *pushButton_gps_setting;
    QCheckBox *cb_config_gps_autoopen;
    QCheckBox *cb_config_gps_checksim;
    QWidget *page_2;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *lb_agps_result;
    QProgressBar *progressBar_agps_test;
    QPushButton *pushButton_agps_start;
    QPushButton *pushButton_agps_stop;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *lb_gsensor_result;
    QPushButton *pushButton_gsensor_start;
    QWidget *page_14;
    QCheckBox *cb_net_loop;
    QCheckBox *cb_gps_loop;
    QLabel *lb_gps_cnt;
    QWidget *page_15;
    QPushButton *pb_gps_1;
    QPushButton *pb_gps_3;
    QPushButton *pb_gps_6;
    QPushButton *pb_gps_5;
    QPushButton *pb_gps_4;
    QPushButton *pb_gps_2;
    QToolBox *tb_gps;
    QWidget *page_9;
    QTextEdit *te_gps_rmc;
    QWidget *page_10;
    QTextEdit *te_gps_gsv;
    QWidget *page;
    QCustomPlot *plot;
    QWidget *page_6;
    QGroupBox *groupBoxdb;
    QLabel *lb_id_used;
    QPushButton *pb_records_output;
    QPushButton *pb_imei_record_look;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *lb_imei_write_status;
    QTextEdit *te_imei_write;
    QPushButton *pb_imei_write;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cb_config_ccid_read;
    QCheckBox *cb_config_imei_repeated_check;
    QCheckBox *cb_config_imei_is_infront;
    QFrame *line;
    QFrame *line_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_imei_show;
    QPushButton *pb_imei_read;
    QWidget *page_13;
    QGroupBox *groupBox_5;
    QLabel *lb_ccid_read_data;
    QLabel *lb_imsi_read_data;
    QLabel *lb_eid_read_data;
    QGroupBox *groupBox_6;
    QLabel *lb_ota_post_data;
    QLabel *lb_ota_post_result;
    QPushButton *pb_check_ota_start;
    QLabel *lb_check_ota_result;
    QPushButton *pb_ota_post_start;
    QWidget *page_8;
    QWidget *tabUart;
    QGroupBox *gb_test;
    QWidget *tab_linetest;
    QVBoxLayout *verticalLayout_2;
    QWidget *tab;
    QGroupBox *groupBox;
    QTextEdit *te_http_get_url;
    QPushButton *pb_http_get_start;
    QTextEdit *te_http_get_result;
    QPushButton *pb_http_get_stop;
    QSpinBox *sb_http_inter;
    QPushButton *pb_http_get_single;
    QGroupBox *dataSet_GroupBox;
    QPushButton *emptyRecv_Button;
    QLabel *sendCount_Label;
    QLabel *recvCount_Label;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *cbprintcom;
    QCheckBox *recv_16_CheckBox;
    QCheckBox *send_16_CheckBox;
    QCheckBox *cb_com_cr_show;
    QLabel *showTime_Label;
    QLabel *date_Label;
    QPushButton *pushButton_log_find;
    QLineEdit *lineEdit_log_find_str;

    void setupUi(QWidget *mainWin)
    {
        if (mainWin->objectName().isEmpty())
            mainWin->setObjectName(QStringLiteral("mainWin"));
        mainWin->resize(893, 640);
        mainWin->setMinimumSize(QSize(700, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/app.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        mainWin->setWindowIcon(icon);
        layoutWidget = new QWidget(mainWin);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 160, 221));
        set_Layout = new QVBoxLayout(layoutWidget);
        set_Layout->setSpacing(6);
        set_Layout->setContentsMargins(11, 11, 11, 11);
        set_Layout->setObjectName(QStringLiteral("set_Layout"));
        set_Layout->setContentsMargins(0, 0, 0, 0);
        paraSet_GroupBox = new QGroupBox(layoutWidget);
        paraSet_GroupBox->setObjectName(QStringLiteral("paraSet_GroupBox"));
        paraSet_GroupBox->setMinimumSize(QSize(158, 0));
        paraSet_GroupBox->setMaximumSize(QSize(158, 211));
        paraSet_GroupBox->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(paraSet_GroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        portName_Layout = new QHBoxLayout();
        portName_Layout->setSpacing(6);
        portName_Layout->setObjectName(QStringLiteral("portName_Layout"));
        paraSet_Label1 = new QLabel(paraSet_GroupBox);
        paraSet_Label1->setObjectName(QStringLiteral("paraSet_Label1"));

        portName_Layout->addWidget(paraSet_Label1);

        portName_cBox = new QComboBox(paraSet_GroupBox);
        portName_cBox->setObjectName(QStringLiteral("portName_cBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(portName_cBox->sizePolicy().hasHeightForWidth());
        portName_cBox->setSizePolicy(sizePolicy);

        portName_Layout->addWidget(portName_cBox);


        verticalLayout_3->addLayout(portName_Layout);

        baud_Layout = new QHBoxLayout();
        baud_Layout->setSpacing(6);
        baud_Layout->setObjectName(QStringLiteral("baud_Layout"));
        paraSet_Label2 = new QLabel(paraSet_GroupBox);
        paraSet_Label2->setObjectName(QStringLiteral("paraSet_Label2"));

        baud_Layout->addWidget(paraSet_Label2);

        baud_cBox = new QComboBox(paraSet_GroupBox);
        baud_cBox->setObjectName(QStringLiteral("baud_cBox"));
        sizePolicy.setHeightForWidth(baud_cBox->sizePolicy().hasHeightForWidth());
        baud_cBox->setSizePolicy(sizePolicy);
        baud_cBox->setMinimumSize(QSize(30, 0));

        baud_Layout->addWidget(baud_cBox);


        verticalLayout_3->addLayout(baud_Layout);

        dataBit_Layout = new QHBoxLayout();
        dataBit_Layout->setSpacing(6);
        dataBit_Layout->setObjectName(QStringLiteral("dataBit_Layout"));
        paraSet_Label3 = new QLabel(paraSet_GroupBox);
        paraSet_Label3->setObjectName(QStringLiteral("paraSet_Label3"));

        dataBit_Layout->addWidget(paraSet_Label3);

        dataBit_cBox = new QComboBox(paraSet_GroupBox);
        dataBit_cBox->setObjectName(QStringLiteral("dataBit_cBox"));
        sizePolicy.setHeightForWidth(dataBit_cBox->sizePolicy().hasHeightForWidth());
        dataBit_cBox->setSizePolicy(sizePolicy);

        dataBit_Layout->addWidget(dataBit_cBox);


        verticalLayout_3->addLayout(dataBit_Layout);

        parity_Layout = new QHBoxLayout();
        parity_Layout->setSpacing(6);
        parity_Layout->setObjectName(QStringLiteral("parity_Layout"));
        paraSet_Label4 = new QLabel(paraSet_GroupBox);
        paraSet_Label4->setObjectName(QStringLiteral("paraSet_Label4"));

        parity_Layout->addWidget(paraSet_Label4);

        parity_cBox = new QComboBox(paraSet_GroupBox);
        parity_cBox->setObjectName(QStringLiteral("parity_cBox"));
        sizePolicy.setHeightForWidth(parity_cBox->sizePolicy().hasHeightForWidth());
        parity_cBox->setSizePolicy(sizePolicy);

        parity_Layout->addWidget(parity_cBox);


        verticalLayout_3->addLayout(parity_Layout);

        stopBit_Layout = new QHBoxLayout();
        stopBit_Layout->setSpacing(6);
        stopBit_Layout->setObjectName(QStringLiteral("stopBit_Layout"));
        paraSet_Label5 = new QLabel(paraSet_GroupBox);
        paraSet_Label5->setObjectName(QStringLiteral("paraSet_Label5"));

        stopBit_Layout->addWidget(paraSet_Label5);

        stopBit_cBox = new QComboBox(paraSet_GroupBox);
        stopBit_cBox->setObjectName(QStringLiteral("stopBit_cBox"));
        sizePolicy.setHeightForWidth(stopBit_cBox->sizePolicy().hasHeightForWidth());
        stopBit_cBox->setSizePolicy(sizePolicy);

        stopBit_Layout->addWidget(stopBit_cBox);


        verticalLayout_3->addLayout(stopBit_Layout);

        spacer4 = new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(spacer4);

        open_Button = new QPushButton(paraSet_GroupBox);
        open_Button->setObjectName(QStringLiteral("open_Button"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(open_Button->sizePolicy().hasHeightForWidth());
        open_Button->setSizePolicy(sizePolicy1);
        open_Button->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        open_Button->setIcon(icon1);
        open_Button->setIconSize(QSize(22, 22));

        verticalLayout_3->addWidget(open_Button);


        set_Layout->addWidget(paraSet_GroupBox);

        tabMain = new QTabWidget(mainWin);
        tabMain->setObjectName(QStringLiteral("tabMain"));
        tabMain->setEnabled(true);
        tabMain->setGeometry(QRect(160, 0, 851, 631));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabMain->sizePolicy().hasHeightForWidth());
        tabMain->setSizePolicy(sizePolicy2);
        tabMain->setMaximumSize(QSize(1200, 821));
        tabMain->setFocusPolicy(Qt::NoFocus);
        tabMain->setContextMenuPolicy(Qt::NoContextMenu);
        tabMain->setTabPosition(QTabWidget::North);
        tabMain->setTabShape(QTabWidget::Triangular);
        tabMain->setElideMode(Qt::ElideNone);
        tabMain->setUsesScrollButtons(true);
        tabMain->setDocumentMode(false);
        tabMain->setTabsClosable(false);
        tabMain->setMovable(true);
        tabMain->setTabBarAutoHide(false);
        tabupdate = new QWidget();
        tabupdate->setObjectName(QStringLiteral("tabupdate"));
        groupBox_2 = new QGroupBox(tabupdate);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 581, 341));
        ButtonBinOpen = new QPushButton(groupBox_2);
        ButtonBinOpen->setObjectName(QStringLiteral("ButtonBinOpen"));
        ButtonBinOpen->setGeometry(QRect(120, 10, 231, 23));
        ButtonBinWriteStart = new QPushButton(groupBox_2);
        ButtonBinWriteStart->setObjectName(QStringLiteral("ButtonBinWriteStart"));
        ButtonBinWriteStart->setGeometry(QRect(130, 210, 231, 51));
        ButtonBinWriteStop = new QPushButton(groupBox_2);
        ButtonBinWriteStop->setObjectName(QStringLiteral("ButtonBinWriteStop"));
        ButtonBinWriteStop->setGeometry(QRect(130, 270, 231, 51));
        ButtonBinWriteStop->setToolTipDuration(5);
        pb_bin = new QProgressBar(groupBox_2);
        pb_bin->setObjectName(QStringLiteral("pb_bin"));
        pb_bin->setGeometry(QRect(130, 170, 261, 23));
        pb_bin->setValue(0);
        lb_binfile = new QLabel(groupBox_2);
        lb_binfile->setObjectName(QStringLiteral("lb_binfile"));
        lb_binfile->setGeometry(QRect(40, 50, 491, 91));
        lb_binfile->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lb_binfile->setWordWrap(true);
        lb_fuse_resulte = new QLabel(groupBox_2);
        lb_fuse_resulte->setObjectName(QStringLiteral("lb_fuse_resulte"));
        lb_fuse_resulte->setGeometry(QRect(140, 140, 211, 16));
        CheckBoxIsBoot = new QCheckBox(groupBox_2);
        CheckBoxIsBoot->setObjectName(QStringLiteral("CheckBoxIsBoot"));
        CheckBoxIsBoot->setGeometry(QRect(400, 20, 131, 16));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabMain->addTab(tabupdate, icon2, QString());
        tabtest = new QWidget();
        tabtest->setObjectName(QStringLiteral("tabtest"));
        toolBox_2 = new QToolBox(tabtest);
        toolBox_2->setObjectName(QStringLiteral("toolBox_2"));
        toolBox_2->setGeometry(QRect(10, 10, 811, 591));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 100, 30));
        pb_test_lock_check = new QPushButton(page_4);
        pb_test_lock_check->setObjectName(QStringLiteral("pb_test_lock_check"));
        pb_test_lock_check->setGeometry(QRect(10, 40, 151, 31));
        pb_test_reboot = new QPushButton(page_4);
        pb_test_reboot->setObjectName(QStringLiteral("pb_test_reboot"));
        pb_test_reboot->setGeometry(QRect(10, 80, 151, 31));
        pb_test_lockopen = new QPushButton(page_4);
        pb_test_lockopen->setObjectName(QStringLiteral("pb_test_lockopen"));
        pb_test_lockopen->setGeometry(QRect(10, 120, 151, 31));
        pb_test_inquery = new QPushButton(page_4);
        pb_test_inquery->setObjectName(QStringLiteral("pb_test_inquery"));
        pb_test_inquery->setGeometry(QRect(10, 200, 151, 31));
        pb_test_param_read = new QPushButton(page_4);
        pb_test_param_read->setObjectName(QStringLiteral("pb_test_param_read"));
        pb_test_param_read->setGeometry(QRect(10, 240, 151, 31));
        pb_test_lock_reset = new QPushButton(page_4);
        pb_test_lock_reset->setObjectName(QStringLiteral("pb_test_lock_reset"));
        pb_test_lock_reset->setGeometry(QRect(10, 160, 151, 31));
        pb_test_power_info = new QPushButton(page_4);
        pb_test_power_info->setObjectName(QStringLiteral("pb_test_power_info"));
        pb_test_power_info->setGeometry(QRect(10, 280, 151, 31));
        pb_test_savemode = new QPushButton(page_4);
        pb_test_savemode->setObjectName(QStringLiteral("pb_test_savemode"));
        pb_test_savemode->setGeometry(QRect(180, 80, 131, 31));
        pb_test_runmode = new QPushButton(page_4);
        pb_test_runmode->setObjectName(QStringLiteral("pb_test_runmode"));
        pb_test_runmode->setGeometry(QRect(10, 320, 151, 31));
        pb_test_pcb_check = new QPushButton(page_4);
        pb_test_pcb_check->setObjectName(QStringLiteral("pb_test_pcb_check"));
        pb_test_pcb_check->setGeometry(QRect(10, 0, 151, 31));
        pb_test_debug_on = new QPushButton(page_4);
        pb_test_debug_on->setObjectName(QStringLiteral("pb_test_debug_on"));
        pb_test_debug_on->setGeometry(QRect(180, 0, 131, 31));
        pb_test_debug_off = new QPushButton(page_4);
        pb_test_debug_off->setObjectName(QStringLiteral("pb_test_debug_off"));
        pb_test_debug_off->setGeometry(QRect(180, 40, 131, 31));
        pb_test_savemode_2 = new QPushButton(page_4);
        pb_test_savemode_2->setObjectName(QStringLiteral("pb_test_savemode_2"));
        pb_test_savemode_2->setGeometry(QRect(180, 120, 131, 31));
        pb_test_savemode_3 = new QPushButton(page_4);
        pb_test_savemode_3->setObjectName(QStringLiteral("pb_test_savemode_3"));
        pb_test_savemode_3->setGeometry(QRect(180, 160, 131, 31));
        pb_test_savemode_4 = new QPushButton(page_4);
        pb_test_savemode_4->setObjectName(QStringLiteral("pb_test_savemode_4"));
        pb_test_savemode_4->setGeometry(QRect(180, 240, 131, 31));
        pb_test_savemode_5 = new QPushButton(page_4);
        pb_test_savemode_5->setObjectName(QStringLiteral("pb_test_savemode_5"));
        pb_test_savemode_5->setGeometry(QRect(180, 200, 131, 31));
        pb_test_qsclk = new QPushButton(page_4);
        pb_test_qsclk->setObjectName(QStringLiteral("pb_test_qsclk"));
        pb_test_qsclk->setGeometry(QRect(330, 0, 101, 31));
        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 280, 131, 31));
        pushButton_9 = new QPushButton(page_4);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(180, 320, 131, 31));
        pushButton_10 = new QPushButton(page_4);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(320, 320, 131, 31));
        pushButton_10->setStyleSheet(QStringLiteral("border-color: rgb(48, 68, 255);"));
        pushButton_11 = new QPushButton(page_4);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(320, 280, 131, 31));
        pb_test_qsclk_2 = new QPushButton(page_4);
        pb_test_qsclk_2->setObjectName(QStringLiteral("pb_test_qsclk_2"));
        pb_test_qsclk_2->setGeometry(QRect(330, 40, 101, 31));
        pb_test_qsclk_3 = new QPushButton(page_4);
        pb_test_qsclk_3->setObjectName(QStringLiteral("pb_test_qsclk_3"));
        pb_test_qsclk_3->setGeometry(QRect(330, 80, 101, 31));
        toolBox_2->addItem(page_4, QString::fromUtf8("\351\200\232\347\224\250\345\221\275\344\273\244"));
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        page_11->setGeometry(QRect(0, 0, 100, 30));
        pb_test_log_r = new QPushButton(page_11);
        pb_test_log_r->setObjectName(QStringLiteral("pb_test_log_r"));
        pb_test_log_r->setGeometry(QRect(150, 230, 91, 31));
        pushButton_3 = new QPushButton(page_11);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 190, 91, 31));
        pushButton_2 = new QPushButton(page_11);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 190, 91, 31));
        pb_test_debug_off_AT_2 = new QPushButton(page_11);
        pb_test_debug_off_AT_2->setObjectName(QStringLiteral("pb_test_debug_off_AT_2"));
        pb_test_debug_off_AT_2->setGeometry(QRect(250, 90, 91, 31));
        pb_test_debug_on_AT = new QPushButton(page_11);
        pb_test_debug_on_AT->setObjectName(QStringLiteral("pb_test_debug_on_AT"));
        pb_test_debug_on_AT->setGeometry(QRect(40, 90, 101, 31));
        pb_test_debug_off_AT = new QPushButton(page_11);
        pb_test_debug_off_AT->setObjectName(QStringLiteral("pb_test_debug_off_AT"));
        pb_test_debug_off_AT->setGeometry(QRect(150, 90, 91, 31));
        pushButton = new QPushButton(page_11);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 190, 101, 31));
        pushButton_5 = new QPushButton(page_11);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 0, 101, 31));
        pushButton_6 = new QPushButton(page_11);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(150, 0, 91, 31));
        pushButton_7 = new QPushButton(page_11);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(150, 40, 91, 31));
        pushButton_8 = new QPushButton(page_11);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(240, 0, 91, 31));
        le_cgdcont = new QLineEdit(page_11);
        le_cgdcont->setObjectName(QStringLiteral("le_cgdcont"));
        le_cgdcont->setGeometry(QRect(250, 140, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setBold(true);
        font.setWeight(75);
        le_cgdcont->setFont(font);
        le_cgdcont->setReadOnly(false);
        pushButton_13 = new QPushButton(page_11);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(160, 140, 81, 31));
        pushButton_14 = new QPushButton(page_11);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(50, 140, 81, 31));
        toolBox_2->addItem(page_11, QStringLiteral("GPRS"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 100, 30));
        pb_test_debug_off_AXIS = new QPushButton(page_5);
        pb_test_debug_off_AXIS->setObjectName(QStringLiteral("pb_test_debug_off_AXIS"));
        pb_test_debug_off_AXIS->setGeometry(QRect(120, 0, 91, 31));
        pb_test_debug_on_AXIS = new QPushButton(page_5);
        pb_test_debug_on_AXIS->setObjectName(QStringLiteral("pb_test_debug_on_AXIS"));
        pb_test_debug_on_AXIS->setGeometry(QRect(120, 40, 91, 31));
        pb_test_motor_f = new QPushButton(page_5);
        pb_test_motor_f->setObjectName(QStringLiteral("pb_test_motor_f"));
        pb_test_motor_f->setGeometry(QRect(220, 120, 91, 31));
        pb_test_motor_b = new QPushButton(page_5);
        pb_test_motor_b->setObjectName(QStringLiteral("pb_test_motor_b"));
        pb_test_motor_b->setGeometry(QRect(220, 150, 91, 31));
        pb_test_heartbeat_send = new QPushButton(page_5);
        pb_test_heartbeat_send->setObjectName(QStringLiteral("pb_test_heartbeat_send"));
        pb_test_heartbeat_send->setGeometry(QRect(120, 280, 91, 31));
        pb_test_param_clear = new QPushButton(page_5);
        pb_test_param_clear->setObjectName(QStringLiteral("pb_test_param_clear"));
        pb_test_param_clear->setGeometry(QRect(370, 70, 151, 51));
        pb_test_debug_on_AXIS_2 = new QPushButton(page_5);
        pb_test_debug_on_AXIS_2->setObjectName(QStringLiteral("pb_test_debug_on_AXIS_2"));
        pb_test_debug_on_AXIS_2->setGeometry(QRect(220, 40, 91, 31));
        pb_test_heartbeat_send_2 = new QPushButton(page_5);
        pb_test_heartbeat_send_2->setObjectName(QStringLiteral("pb_test_heartbeat_send_2"));
        pb_test_heartbeat_send_2->setGeometry(QRect(220, 0, 91, 31));
        le_qiopen = new QLineEdit(page_5);
        le_qiopen->setObjectName(QStringLiteral("le_qiopen"));
        le_qiopen->setGeometry(QRect(0, 120, 221, 31));
        le_qiopen->setFont(font);
        le_qiopen->setReadOnly(false);
        le_net_send_content = new QLineEdit(page_5);
        le_net_send_content->setObjectName(QStringLiteral("le_net_send_content"));
        le_net_send_content->setGeometry(QRect(0, 190, 211, 21));
        le_net_send_content->setFont(font);
        le_net_send_content->setReadOnly(false);
        pb_test_motor_b_2 = new QPushButton(page_5);
        pb_test_motor_b_2->setObjectName(QStringLiteral("pb_test_motor_b_2"));
        pb_test_motor_b_2->setGeometry(QRect(220, 190, 91, 31));
        pb_test_debug_on_AXIS_3 = new QPushButton(page_5);
        pb_test_debug_on_AXIS_3->setObjectName(QStringLiteral("pb_test_debug_on_AXIS_3"));
        pb_test_debug_on_AXIS_3->setGeometry(QRect(120, 80, 91, 31));
        pb_test_debug_on_AXIS_4 = new QPushButton(page_5);
        pb_test_debug_on_AXIS_4->setObjectName(QStringLiteral("pb_test_debug_on_AXIS_4"));
        pb_test_debug_on_AXIS_4->setGeometry(QRect(220, 80, 91, 31));
        le_ping_host = new QLineEdit(page_5);
        le_ping_host->setObjectName(QStringLiteral("le_ping_host"));
        le_ping_host->setGeometry(QRect(0, 230, 211, 21));
        le_ping_host->setFont(font);
        le_ping_host->setReadOnly(false);
        pushButton_12 = new QPushButton(page_5);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(220, 230, 91, 31));
        toolBox_2->addItem(page_5, QStringLiteral("TCPIP"));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        page_7->setGeometry(QRect(0, 0, 100, 30));
        tb_gps_3 = new QToolBox(page_7);
        tb_gps_3->setObjectName(QStringLiteral("tb_gps_3"));
        tb_gps_3->setGeometry(QRect(10, 10, 221, 391));
        tb_gps_3->setFrameShape(QFrame::Panel);
        tb_gps_3->setFrameShadow(QFrame::Plain);
        tb_gps_3->setLineWidth(1);
        tb_gps_3->setMidLineWidth(0);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        page_12->setGeometry(QRect(0, 0, 219, 285));
        layoutWidget1 = new QWidget(page_12);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 0, 149, 141));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lb_gps_result = new QLabel(layoutWidget1);
        lb_gps_result->setObjectName(QStringLiteral("lb_gps_result"));
        lb_gps_result->setEnabled(true);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        lb_gps_result->setFont(font1);
        lb_gps_result->setAutoFillBackground(false);
        lb_gps_result->setStyleSheet(QStringLiteral("background-color: rgb(112, 131, 255);"));
        lb_gps_result->setFrameShape(QFrame::Box);
        lb_gps_result->setFrameShadow(QFrame::Plain);
        lb_gps_result->setLineWidth(2);
        lb_gps_result->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lb_gps_result);

        progressBar_gps_test = new QProgressBar(layoutWidget1);
        progressBar_gps_test->setObjectName(QStringLiteral("progressBar_gps_test"));
        progressBar_gps_test->setValue(0);
        progressBar_gps_test->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBar_gps_test->setTextVisible(true);
        progressBar_gps_test->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout->addWidget(progressBar_gps_test);

        pushButton_gps_start = new QPushButton(layoutWidget1);
        pushButton_gps_start->setObjectName(QStringLiteral("pushButton_gps_start"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_gps_start->sizePolicy().hasHeightForWidth());
        pushButton_gps_start->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(pushButton_gps_start);

        pushButton_gps_stop = new QPushButton(layoutWidget1);
        pushButton_gps_stop->setObjectName(QStringLiteral("pushButton_gps_stop"));
        sizePolicy3.setHeightForWidth(pushButton_gps_stop->sizePolicy().hasHeightForWidth());
        pushButton_gps_stop->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(pushButton_gps_stop);

        pushButton_gps_setting = new QPushButton(page_12);
        pushButton_gps_setting->setObjectName(QStringLiteral("pushButton_gps_setting"));
        pushButton_gps_setting->setGeometry(QRect(50, 160, 101, 31));
        cb_config_gps_autoopen = new QCheckBox(page_12);
        cb_config_gps_autoopen->setObjectName(QStringLiteral("cb_config_gps_autoopen"));
        cb_config_gps_autoopen->setGeometry(QRect(60, 210, 101, 16));
        cb_config_gps_checksim = new QCheckBox(page_12);
        cb_config_gps_checksim->setObjectName(QStringLiteral("cb_config_gps_checksim"));
        cb_config_gps_checksim->setGeometry(QRect(60, 240, 101, 21));
        tb_gps_3->addItem(page_12, QString::fromUtf8("GPS\344\277\241\345\217\267\346\265\213\350\257\225(\346\243\200\346\265\213SIM\345\215\241)"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 100, 30));
        layoutWidget_3 = new QWidget(page_2);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 10, 149, 151));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lb_agps_result = new QLabel(layoutWidget_3);
        lb_agps_result->setObjectName(QStringLiteral("lb_agps_result"));
        lb_agps_result->setEnabled(true);
        lb_agps_result->setFont(font1);
        lb_agps_result->setAutoFillBackground(false);
        lb_agps_result->setStyleSheet(QStringLiteral("background-color: rgb(112, 131, 255);"));
        lb_agps_result->setFrameShape(QFrame::Box);
        lb_agps_result->setFrameShadow(QFrame::Plain);
        lb_agps_result->setLineWidth(2);
        lb_agps_result->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lb_agps_result);

        progressBar_agps_test = new QProgressBar(layoutWidget_3);
        progressBar_agps_test->setObjectName(QStringLiteral("progressBar_agps_test"));
        progressBar_agps_test->setValue(0);
        progressBar_agps_test->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBar_agps_test->setTextVisible(true);
        progressBar_agps_test->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_4->addWidget(progressBar_agps_test);

        pushButton_agps_start = new QPushButton(layoutWidget_3);
        pushButton_agps_start->setObjectName(QStringLiteral("pushButton_agps_start"));
        sizePolicy3.setHeightForWidth(pushButton_agps_start->sizePolicy().hasHeightForWidth());
        pushButton_agps_start->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(pushButton_agps_start);

        pushButton_agps_stop = new QPushButton(layoutWidget_3);
        pushButton_agps_stop->setObjectName(QStringLiteral("pushButton_agps_stop"));
        sizePolicy3.setHeightForWidth(pushButton_agps_stop->sizePolicy().hasHeightForWidth());
        pushButton_agps_stop->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(pushButton_agps_stop);

        layoutWidget_4 = new QWidget(page_2);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 190, 179, 81));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lb_gsensor_result = new QLabel(layoutWidget_4);
        lb_gsensor_result->setObjectName(QStringLiteral("lb_gsensor_result"));
        lb_gsensor_result->setEnabled(true);
        lb_gsensor_result->setFont(font1);
        lb_gsensor_result->setAutoFillBackground(false);
        lb_gsensor_result->setStyleSheet(QStringLiteral("background-color: rgb(112, 131, 255);"));
        lb_gsensor_result->setFrameShape(QFrame::Box);
        lb_gsensor_result->setFrameShadow(QFrame::Plain);
        lb_gsensor_result->setLineWidth(2);
        lb_gsensor_result->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lb_gsensor_result);

        pushButton_gsensor_start = new QPushButton(layoutWidget_4);
        pushButton_gsensor_start->setObjectName(QStringLiteral("pushButton_gsensor_start"));
        sizePolicy3.setHeightForWidth(pushButton_gsensor_start->sizePolicy().hasHeightForWidth());
        pushButton_gsensor_start->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(pushButton_gsensor_start);

        tb_gps_3->addItem(page_2, QString::fromUtf8("AGPS,GSENSOR\346\265\213\350\257\225"));
        page_14 = new QWidget();
        page_14->setObjectName(QStringLiteral("page_14"));
        page_14->setGeometry(QRect(0, 0, 100, 30));
        cb_net_loop = new QCheckBox(page_14);
        cb_net_loop->setObjectName(QStringLiteral("cb_net_loop"));
        cb_net_loop->setGeometry(QRect(20, 100, 101, 41));
        cb_gps_loop = new QCheckBox(page_14);
        cb_gps_loop->setObjectName(QStringLiteral("cb_gps_loop"));
        cb_gps_loop->setGeometry(QRect(20, 0, 101, 41));
        lb_gps_cnt = new QLabel(page_14);
        lb_gps_cnt->setObjectName(QStringLiteral("lb_gps_cnt"));
        lb_gps_cnt->setGeometry(QRect(20, 30, 131, 61));
        tb_gps_3->addItem(page_14, QString::fromUtf8("\345\276\252\347\216\257\346\265\213\350\257\225"));
        page_15 = new QWidget();
        page_15->setObjectName(QStringLiteral("page_15"));
        page_15->setGeometry(QRect(0, 0, 100, 30));
        pb_gps_1 = new QPushButton(page_15);
        pb_gps_1->setObjectName(QStringLiteral("pb_gps_1"));
        pb_gps_1->setGeometry(QRect(10, 50, 81, 31));
        pb_gps_3 = new QPushButton(page_15);
        pb_gps_3->setObjectName(QStringLiteral("pb_gps_3"));
        pb_gps_3->setGeometry(QRect(10, 90, 81, 31));
        pb_gps_6 = new QPushButton(page_15);
        pb_gps_6->setObjectName(QStringLiteral("pb_gps_6"));
        pb_gps_6->setGeometry(QRect(110, 130, 81, 31));
        pb_gps_5 = new QPushButton(page_15);
        pb_gps_5->setObjectName(QStringLiteral("pb_gps_5"));
        pb_gps_5->setGeometry(QRect(10, 130, 81, 31));
        pb_gps_4 = new QPushButton(page_15);
        pb_gps_4->setObjectName(QStringLiteral("pb_gps_4"));
        pb_gps_4->setGeometry(QRect(110, 90, 81, 31));
        pb_gps_2 = new QPushButton(page_15);
        pb_gps_2->setObjectName(QStringLiteral("pb_gps_2"));
        pb_gps_2->setGeometry(QRect(110, 50, 81, 31));
        tb_gps_3->addItem(page_15, QString::fromUtf8("\345\256\232\344\275\215\346\265\213\350\257\225"));
        tb_gps = new QToolBox(page_7);
        tb_gps->setObjectName(QStringLiteral("tb_gps"));
        tb_gps->setGeometry(QRect(260, 10, 551, 391));
        tb_gps->setFrameShape(QFrame::Panel);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        page_9->setGeometry(QRect(0, 0, 100, 30));
        te_gps_rmc = new QTextEdit(page_9);
        te_gps_rmc->setObjectName(QStringLiteral("te_gps_rmc"));
        te_gps_rmc->setGeometry(QRect(10, 0, 511, 311));
        tb_gps->addItem(page_9, QStringLiteral("RMC"));
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        page_10->setGeometry(QRect(0, 0, 100, 30));
        te_gps_gsv = new QTextEdit(page_10);
        te_gps_gsv->setObjectName(QStringLiteral("te_gps_gsv"));
        te_gps_gsv->setGeometry(QRect(10, 0, 511, 301));
        tb_gps->addItem(page_10, QString::fromUtf8("\345\215\253\346\230\237\344\277\241\346\201\257"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 549, 311));
        plot = new QCustomPlot(page);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setGeometry(QRect(10, 0, 521, 291));
        tb_gps->addItem(page, QString::fromUtf8("\345\233\276\345\275\242"));
        toolBox_2->addItem(page_7, QString::fromUtf8("GPS\344\270\216\346\265\213\350\257\225"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        page_6->setGeometry(QRect(0, 0, 100, 30));
        groupBoxdb = new QGroupBox(page_6);
        groupBoxdb->setObjectName(QStringLiteral("groupBoxdb"));
        groupBoxdb->setGeometry(QRect(30, 230, 751, 51));
        lb_id_used = new QLabel(groupBoxdb);
        lb_id_used->setObjectName(QStringLiteral("lb_id_used"));
        lb_id_used->setGeometry(QRect(10, 20, 122, 27));
        pb_records_output = new QPushButton(groupBoxdb);
        pb_records_output->setObjectName(QStringLiteral("pb_records_output"));
        pb_records_output->setGeometry(QRect(650, 10, 75, 31));
        pb_imei_record_look = new QPushButton(groupBoxdb);
        pb_imei_record_look->setObjectName(QStringLiteral("pb_imei_record_look"));
        pb_imei_record_look->setGeometry(QRect(490, 10, 75, 31));
        layoutWidget_2 = new QWidget(page_6);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 80, 751, 100));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lb_imei_write_status = new QLabel(layoutWidget_2);
        lb_imei_write_status->setObjectName(QStringLiteral("lb_imei_write_status"));
        lb_imei_write_status->setStyleSheet(QString::fromUtf8("background-color: rgb(201, 230, 255);\n"
"font: 14pt \"\346\226\260\345\256\213\344\275\223\";"));
        lb_imei_write_status->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lb_imei_write_status);

        te_imei_write = new QTextEdit(layoutWidget_2);
        te_imei_write->setObjectName(QStringLiteral("te_imei_write"));

        verticalLayout_5->addWidget(te_imei_write);


        horizontalLayout_3->addLayout(verticalLayout_5);

        pb_imei_write = new QPushButton(layoutWidget_2);
        pb_imei_write->setObjectName(QStringLiteral("pb_imei_write"));
        sizePolicy3.setHeightForWidth(pb_imei_write->sizePolicy().hasHeightForWidth());
        pb_imei_write->setSizePolicy(sizePolicy3);
        pb_imei_write->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(pb_imei_write);

        layoutWidget_5 = new QWidget(page_6);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(30, 190, 399, 23));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cb_config_ccid_read = new QCheckBox(layoutWidget_5);
        cb_config_ccid_read->setObjectName(QStringLiteral("cb_config_ccid_read"));

        horizontalLayout_2->addWidget(cb_config_ccid_read);

        cb_config_imei_repeated_check = new QCheckBox(layoutWidget_5);
        cb_config_imei_repeated_check->setObjectName(QStringLiteral("cb_config_imei_repeated_check"));

        horizontalLayout_2->addWidget(cb_config_imei_repeated_check);

        cb_config_imei_is_infront = new QCheckBox(layoutWidget_5);
        cb_config_imei_is_infront->setObjectName(QStringLiteral("cb_config_imei_is_infront"));

        horizontalLayout_2->addWidget(cb_config_imei_is_infront);

        line = new QFrame(page_6);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 60, 751, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(page_6);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(30, 210, 751, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget2 = new QWidget(page_6);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(31, 21, 751, 36));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lb_imei_show = new QLabel(layoutWidget2);
        lb_imei_show->setObjectName(QStringLiteral("lb_imei_show"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(100);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lb_imei_show->sizePolicy().hasHeightForWidth());
        lb_imei_show->setSizePolicy(sizePolicy4);
        QFont font2;
        font2.setFamily(QStringLiteral("Aharoni"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        lb_imei_show->setFont(font2);
        lb_imei_show->setStyleSheet(QStringLiteral("background-color: rgb(219, 255, 217);"));
        lb_imei_show->setFrameShape(QFrame::Panel);
        lb_imei_show->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(lb_imei_show);

        pb_imei_read = new QPushButton(layoutWidget2);
        pb_imei_read->setObjectName(QStringLiteral("pb_imei_read"));
        pb_imei_read->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(2);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pb_imei_read->sizePolicy().hasHeightForWidth());
        pb_imei_read->setSizePolicy(sizePolicy5);
        pb_imei_read->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(pb_imei_read);

        toolBox_2->addItem(page_6, QString::fromUtf8("IMEI\345\217\267\347\203\247\345\206\231"));
        layoutWidget->raise();
        groupBoxdb->raise();
        layoutWidget_2->raise();
        layoutWidget_5->raise();
        line->raise();
        line_2->raise();
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        page_13->setGeometry(QRect(0, 0, 811, 409));
        groupBox_5 = new QGroupBox(page_13);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 20, 171, 131));
        lb_ccid_read_data = new QLabel(groupBox_5);
        lb_ccid_read_data->setObjectName(QStringLiteral("lb_ccid_read_data"));
        lb_ccid_read_data->setGeometry(QRect(20, 20, 131, 21));
        lb_ccid_read_data->setStyleSheet(QStringLiteral("background-color: rgb(229, 252, 255);"));
        lb_imsi_read_data = new QLabel(groupBox_5);
        lb_imsi_read_data->setObjectName(QStringLiteral("lb_imsi_read_data"));
        lb_imsi_read_data->setGeometry(QRect(20, 50, 131, 21));
        lb_imsi_read_data->setStyleSheet(QStringLiteral("background-color: rgb(229, 252, 255);"));
        lb_eid_read_data = new QLabel(groupBox_5);
        lb_eid_read_data->setObjectName(QStringLiteral("lb_eid_read_data"));
        lb_eid_read_data->setGeometry(QRect(20, 80, 131, 21));
        lb_eid_read_data->setStyleSheet(QStringLiteral("background-color: rgb(229, 252, 255);"));
        groupBox_6 = new QGroupBox(page_13);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(190, 20, 481, 131));
        lb_ota_post_data = new QLabel(groupBox_6);
        lb_ota_post_data->setObjectName(QStringLiteral("lb_ota_post_data"));
        lb_ota_post_data->setGeometry(QRect(20, 30, 461, 21));
        lb_ota_post_data->setStyleSheet(QStringLiteral("background-color: rgb(229, 252, 255);"));
        lb_ota_post_data->setWordWrap(true);
        lb_ota_post_result = new QLabel(groupBox_6);
        lb_ota_post_result->setObjectName(QStringLiteral("lb_ota_post_result"));
        lb_ota_post_result->setGeometry(QRect(20, 60, 461, 21));
        lb_ota_post_result->setStyleSheet(QStringLiteral("background-color: rgb(229, 252, 255);"));
        lb_ota_post_data->raise();
        lb_ota_post_result->raise();
        pb_check_ota_start = new QPushButton(page_13);
        pb_check_ota_start->setObjectName(QStringLiteral("pb_check_ota_start"));
        pb_check_ota_start->setEnabled(true);
        pb_check_ota_start->setGeometry(QRect(20, 310, 111, 41));
        lb_check_ota_result = new QLabel(page_13);
        lb_check_ota_result->setObjectName(QStringLiteral("lb_check_ota_result"));
        lb_check_ota_result->setGeometry(QRect(160, 190, 371, 81));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(12);
        lb_check_ota_result->setFont(font3);
        lb_check_ota_result->setStyleSheet(QStringLiteral("background-color: rgb(229, 252, 255);"));
        pb_ota_post_start = new QPushButton(page_13);
        pb_ota_post_start->setObjectName(QStringLiteral("pb_ota_post_start"));
        pb_ota_post_start->setGeometry(QRect(30, 190, 81, 41));
        toolBox_2->addItem(page_13, QString::fromUtf8("CCID\350\257\273\345\217\226"));
        groupBox_5->raise();
        groupBox_6->raise();
        pb_check_ota_start->raise();
        lb_check_ota_result->raise();
        lb_ota_post_data->raise();
        lb_ota_post_result->raise();
        pb_ota_post_start->raise();
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        page_8->setGeometry(QRect(0, 0, 100, 30));
        toolBox_2->addItem(page_8, QString::fromUtf8("\350\207\252\345\256\232\344\271\211\345\221\275\344\273\244"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/test.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabMain->addTab(tabtest, icon3, QString());
        tabUart = new QWidget();
        tabUart->setObjectName(QStringLiteral("tabUart"));
        tabUart->setMinimumSize(QSize(605, 0));
        tabUart->setMaximumSize(QSize(605, 800));
        gb_test = new QGroupBox(tabUart);
        gb_test->setObjectName(QStringLiteral("gb_test"));
        gb_test->setGeometry(QRect(0, 0, 561, 551));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/com.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabMain->addTab(tabUart, icon4, QString());
        tab_linetest = new QWidget();
        tab_linetest->setObjectName(QStringLiteral("tab_linetest"));
        verticalLayout_2 = new QVBoxLayout(tab_linetest);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabMain->addTab(tab_linetest, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 531, 371));
        te_http_get_url = new QTextEdit(groupBox);
        te_http_get_url->setObjectName(QStringLiteral("te_http_get_url"));
        te_http_get_url->setGeometry(QRect(10, 30, 501, 31));
        pb_http_get_start = new QPushButton(groupBox);
        pb_http_get_start->setObjectName(QStringLiteral("pb_http_get_start"));
        pb_http_get_start->setGeometry(QRect(130, 70, 75, 23));
        te_http_get_result = new QTextEdit(groupBox);
        te_http_get_result->setObjectName(QStringLiteral("te_http_get_result"));
        te_http_get_result->setGeometry(QRect(10, 110, 501, 231));
        pb_http_get_stop = new QPushButton(groupBox);
        pb_http_get_stop->setObjectName(QStringLiteral("pb_http_get_stop"));
        pb_http_get_stop->setGeometry(QRect(220, 70, 75, 23));
        sb_http_inter = new QSpinBox(groupBox);
        sb_http_inter->setObjectName(QStringLiteral("sb_http_inter"));
        sb_http_inter->setGeometry(QRect(50, 70, 51, 21));
        sb_http_inter->setValue(4);
        pb_http_get_single = new QPushButton(groupBox);
        pb_http_get_single->setObjectName(QStringLiteral("pb_http_get_single"));
        pb_http_get_single->setGeometry(QRect(310, 70, 75, 23));
        tabMain->addTab(tab, QString());
        dataSet_GroupBox = new QGroupBox(mainWin);
        dataSet_GroupBox->setObjectName(QStringLiteral("dataSet_GroupBox"));
        dataSet_GroupBox->setGeometry(QRect(0, 230, 158, 241));
        dataSet_GroupBox->setMinimumSize(QSize(140, 0));
        dataSet_GroupBox->setMaximumSize(QSize(158, 16777215));
        dataSet_GroupBox->setStyleSheet(QStringLiteral(""));
        emptyRecv_Button = new QPushButton(dataSet_GroupBox);
        emptyRecv_Button->setObjectName(QStringLiteral("emptyRecv_Button"));
        emptyRecv_Button->setGeometry(QRect(10, 179, 131, 41));
        emptyRecv_Button->setMinimumSize(QSize(0, 30));
        emptyRecv_Button->setMaximumSize(QSize(200, 100));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        emptyRecv_Button->setIcon(icon5);
        sendCount_Label = new QLabel(dataSet_GroupBox);
        sendCount_Label->setObjectName(QStringLiteral("sendCount_Label"));
        sendCount_Label->setGeometry(QRect(20, 160, 121, 16));
        recvCount_Label = new QLabel(dataSet_GroupBox);
        recvCount_Label->setObjectName(QStringLiteral("recvCount_Label"));
        recvCount_Label->setGeometry(QRect(20, 140, 131, 16));
        layoutWidget3 = new QWidget(dataSet_GroupBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(17, 29, 111, 91));
        verticalLayout_7 = new QVBoxLayout(layoutWidget3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        cbprintcom = new QCheckBox(layoutWidget3);
        cbprintcom->setObjectName(QStringLiteral("cbprintcom"));

        verticalLayout_7->addWidget(cbprintcom);

        recv_16_CheckBox = new QCheckBox(layoutWidget3);
        recv_16_CheckBox->setObjectName(QStringLiteral("recv_16_CheckBox"));

        verticalLayout_7->addWidget(recv_16_CheckBox);

        send_16_CheckBox = new QCheckBox(layoutWidget3);
        send_16_CheckBox->setObjectName(QStringLiteral("send_16_CheckBox"));

        verticalLayout_7->addWidget(send_16_CheckBox);

        cb_com_cr_show = new QCheckBox(layoutWidget3);
        cb_com_cr_show->setObjectName(QStringLiteral("cb_com_cr_show"));

        verticalLayout_7->addWidget(cb_com_cr_show);

        showTime_Label = new QLabel(mainWin);
        showTime_Label->setObjectName(QStringLiteral("showTime_Label"));
        showTime_Label->setGeometry(QRect(10, 490, 131, 16));
        date_Label = new QLabel(mainWin);
        date_Label->setObjectName(QStringLiteral("date_Label"));
        date_Label->setGeometry(QRect(10, 520, 131, 20));
        pushButton_log_find = new QPushButton(mainWin);
        pushButton_log_find->setObjectName(QStringLiteral("pushButton_log_find"));
        pushButton_log_find->setGeometry(QRect(10, 580, 131, 31));
        lineEdit_log_find_str = new QLineEdit(mainWin);
        lineEdit_log_find_str->setObjectName(QStringLiteral("lineEdit_log_find_str"));
        lineEdit_log_find_str->setGeometry(QRect(10, 550, 131, 20));
        tabMain->raise();
        layoutWidget->raise();
        dataSet_GroupBox->raise();
        showTime_Label->raise();
        date_Label->raise();
        pushButton_log_find->raise();
        lineEdit_log_find_str->raise();

        retranslateUi(mainWin);

        tabMain->setCurrentIndex(1);
        toolBox_2->setCurrentIndex(5);
        tb_gps_3->setCurrentIndex(0);
        tb_gps->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(mainWin);
    } // setupUi

    void retranslateUi(QWidget *mainWin)
    {
        mainWin->setWindowTitle(QApplication::translate("mainWin", "Q20 \346\265\213\350\257\225\350\275\257\344\273\266", 0));
        paraSet_GroupBox->setTitle(QApplication::translate("mainWin", "\344\270\262\345\217\243\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        paraSet_Label1->setText(QApplication::translate("mainWin", "\344\270\262\345\217\243\345\217\267\357\274\232", 0));
        paraSet_Label2->setText(QApplication::translate("mainWin", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        paraSet_Label3->setText(QApplication::translate("mainWin", "\346\225\260\346\215\256\344\275\215\357\274\232", 0));
        paraSet_Label4->setText(QApplication::translate("mainWin", "\346\240\241\351\252\214\344\275\215\357\274\232", 0));
        paraSet_Label5->setText(QApplication::translate("mainWin", "\345\201\234\346\255\242\344\275\215\357\274\232", 0));
        open_Button->setText(QApplication::translate("mainWin", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        groupBox_2->setTitle(QString());
        ButtonBinOpen->setText(QApplication::translate("mainWin", "\346\211\223\345\274\200\347\203\247\345\206\231\346\226\207\344\273\266", 0));
        ButtonBinWriteStart->setText(QApplication::translate("mainWin", "\345\274\200\345\247\213\347\203\247\345\206\231&F", 0));
        ButtonBinWriteStop->setText(QApplication::translate("mainWin", "\345\201\234\346\255\242", 0));
        lb_binfile->setText(QApplication::translate("mainWin", "\345\233\272\344\273\266\346\234\252\346\211\223\345\274\200", 0));
        lb_fuse_resulte->setText(QApplication::translate("mainWin", "..............", 0));
        CheckBoxIsBoot->setText(QApplication::translate("mainWin", "\346\230\257\345\220\246boot\345\215\207\347\272\247", 0));
        tabMain->setTabText(tabMain->indexOf(tabupdate), QApplication::translate("mainWin", "\345\244\207\347\224\250", 0));
        pb_test_lock_check->setText(QApplication::translate("mainWin", "\345\205\263\346\234\272", 0));
        pb_test_reboot->setText(QApplication::translate("mainWin", "\346\237\245\350\257\242\345\216\202\345\225\206\344\277\241\346\201\257", 0));
        pb_test_lockopen->setText(QApplication::translate("mainWin", "\351\243\236\350\241\214\346\250\241\345\274\217", 0));
        pb_test_inquery->setText(QApplication::translate("mainWin", "\350\257\273\345\217\226\345\272\217\345\210\227\345\217\267", 0));
        pb_test_param_read->setText(QApplication::translate("mainWin", "\350\257\273\345\217\226\345\256\236\346\227\266\346\227\266\351\222\237", 0));
        pb_test_lock_reset->setText(QApplication::translate("mainWin", "\345\217\226\346\266\210\351\243\236\350\241\214\346\250\241\345\274\217", 0));
        pb_test_power_info->setText(QApplication::translate("mainWin", "\347\224\265\351\207\217\346\237\245\350\257\242", 0));
        pb_test_savemode->setText(QApplication::translate("mainWin", "ATV1", 0));
        pb_test_runmode->setText(QApplication::translate("mainWin", "\345\256\236\346\227\266\346\227\266\351\222\237", 0));
        pb_test_pcb_check->setText(QApplication::translate("mainWin", "AT", 0));
        pb_test_debug_on->setText(QApplication::translate("mainWin", "\346\211\223\345\274\200\345\233\236\346\230\276", 0));
        pb_test_debug_off->setText(QApplication::translate("mainWin", "\345\205\263\351\227\255\345\233\236\346\230\276", 0));
        pb_test_savemode_2->setText(QApplication::translate("mainWin", "ATV0", 0));
        pb_test_savemode_3->setText(QApplication::translate("mainWin", "AT+CMEE=0", 0));
        pb_test_savemode_4->setText(QApplication::translate("mainWin", "AT+CMEE=2", 0));
        pb_test_savemode_5->setText(QApplication::translate("mainWin", "AT+CMEE=1", 0));
        pb_test_qsclk->setText(QApplication::translate("mainWin", "AT+QSCLK=0", 0));
        pushButton_4->setText(QApplication::translate("mainWin", "AT+CPIN?", 0));
        pushButton_9->setText(QApplication::translate("mainWin", "AT+CCID", 0));
        pushButton_10->setText(QApplication::translate("mainWin", "AT+CIMI", 0));
        pushButton_11->setText(QApplication::translate("mainWin", "AT+EGMR=2,7", 0));
        pb_test_qsclk_2->setText(QApplication::translate("mainWin", "AT+QSCLK=1", 0));
        pb_test_qsclk_3->setText(QApplication::translate("mainWin", "AT+QSCLK=2", 0));
        toolBox_2->setItemText(toolBox_2->indexOf(page_4), QApplication::translate("mainWin", "\351\200\232\347\224\250\345\221\275\344\273\244", 0));
        pb_test_log_r->setText(QApplication::translate("mainWin", "AT+CGPADDR", 0));
        pushButton_3->setText(QApplication::translate("mainWin", "AT+CGACT=0", 0));
        pushButton_2->setText(QApplication::translate("mainWin", "AT+CGACT=1", 0));
        pb_test_debug_off_AT_2->setText(QApplication::translate("mainWin", "AT+CGATT=0", 0));
        pb_test_debug_on_AT->setText(QApplication::translate("mainWin", "AT+CGATT?", 0));
        pb_test_debug_off_AT->setText(QApplication::translate("mainWin", "AT+CGATT=1", 0));
        pushButton->setText(QApplication::translate("mainWin", "AT+CGACT?", 0));
        pushButton_5->setText(QApplication::translate("mainWin", "AT+CPIN?", 0));
        pushButton_6->setText(QApplication::translate("mainWin", "AT+CREG?", 0));
        pushButton_7->setText(QApplication::translate("mainWin", "AT+CGREG?", 0));
        pushButton_8->setText(QApplication::translate("mainWin", "AT+CSQ", 0));
        le_cgdcont->setText(QApplication::translate("mainWin", "1,\"IP\",\"cmnet\"", 0));
        pushButton_13->setText(QApplication::translate("mainWin", "AT+CGDCONT=", 0));
        pushButton_14->setText(QApplication::translate("mainWin", "AT+CGDCONT?", 0));
        toolBox_2->setItemText(toolBox_2->indexOf(page_11), QApplication::translate("mainWin", "GPRS", 0));
        pb_test_debug_off_AXIS->setText(QApplication::translate("mainWin", "AT+QILOCIP", 0));
        pb_test_debug_on_AXIS->setText(QApplication::translate("mainWin", "AT+QIACT", 0));
        pb_test_motor_f->setText(QApplication::translate("mainWin", "QIOPEN", 0));
        pb_test_motor_b->setText(QApplication::translate("mainWin", "QISEND", 0));
        pb_test_heartbeat_send->setText(QApplication::translate("mainWin", "QICLOSE", 0));
        pb_test_param_clear->setText(QApplication::translate("mainWin", "\346\270\205\351\231\244\345\217\202\346\225\260", 0));
        pb_test_debug_on_AXIS_2->setText(QApplication::translate("mainWin", "AT+QIDEACT", 0));
        pb_test_heartbeat_send_2->setText(QApplication::translate("mainWin", "QISTAT", 0));
        le_qiopen->setText(QApplication::translate("mainWin", "\"TCP\",\"120.27.196.107\",10008", 0));
        le_net_send_content->setText(QApplication::translate("mainWin", "hello123", 0));
        pb_test_motor_b_2->setText(QApplication::translate("mainWin", "0X1A", 0));
        pb_test_debug_on_AXIS_3->setText(QApplication::translate("mainWin", "AT+QIHEAD=1", 0));
        pb_test_debug_on_AXIS_4->setText(QApplication::translate("mainWin", "AT+QIHEAD=0", 0));
        le_ping_host->setText(QApplication::translate("mainWin", "120.27.196.107", 0));
        pushButton_12->setText(QApplication::translate("mainWin", "QIPING", 0));
        toolBox_2->setItemText(toolBox_2->indexOf(page_5), QApplication::translate("mainWin", "TCPIP", 0));
        lb_gps_result->setText(QApplication::translate("mainWin", "(* *)", 0));
        pushButton_gps_start->setText(QApplication::translate("mainWin", "\345\274\200\345\247\213\346\265\213\350\257\225", 0));
        pushButton_gps_stop->setText(QApplication::translate("mainWin", "\345\201\234\346\255\242\346\265\213\350\257\225", 0));
        pushButton_gps_setting->setText(QApplication::translate("mainWin", "\350\256\276\347\275\256...", 0));
        cb_config_gps_autoopen->setText(QApplication::translate("mainWin", "\350\207\252\345\212\250\346\211\223\345\274\200GPS", 0));
        cb_config_gps_checksim->setText(QApplication::translate("mainWin", "\346\243\200\346\237\245sim\345\215\241", 0));
        tb_gps_3->setItemText(tb_gps_3->indexOf(page_12), QApplication::translate("mainWin", "GPS\344\277\241\345\217\267\346\265\213\350\257\225(\346\243\200\346\265\213SIM\345\215\241)", 0));
        lb_agps_result->setText(QApplication::translate("mainWin", "(* *)", 0));
        pushButton_agps_start->setText(QApplication::translate("mainWin", "AGPS\345\274\200\345\247\213\346\265\213\350\257\225", 0));
        pushButton_agps_stop->setText(QApplication::translate("mainWin", "AGPS\345\201\234\346\255\242\346\265\213\350\257\225", 0));
        lb_gsensor_result->setText(QApplication::translate("mainWin", "(* *)", 0));
        pushButton_gsensor_start->setText(QApplication::translate("mainWin", "GSENSOR\346\265\213\350\257\225", 0));
        tb_gps_3->setItemText(tb_gps_3->indexOf(page_2), QApplication::translate("mainWin", "AGPS,GSENSOR\346\265\213\350\257\225", 0));
        cb_net_loop->setText(QApplication::translate("mainWin", "NET\345\276\252\347\216\257\346\265\213\350\257\225", 0));
        cb_gps_loop->setText(QApplication::translate("mainWin", "GPS\345\276\252\347\216\257\346\265\213\350\257\225", 0));
        lb_gps_cnt->setText(QApplication::translate("mainWin", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 0));
        tb_gps_3->setItemText(tb_gps_3->indexOf(page_14), QApplication::translate("mainWin", "\345\276\252\347\216\257\346\265\213\350\257\225", 0));
        pb_gps_1->setText(QApplication::translate("mainWin", "\346\211\223\345\274\200GPS", 0));
        pb_gps_3->setText(QApplication::translate("mainWin", "\350\257\273\345\217\226", 0));
        pb_gps_6->setText(QApplication::translate("mainWin", "\345\237\272\347\253\231\345\256\232\344\275\215", 0));
        pb_gps_5->setText(QApplication::translate("mainWin", "AGPS", 0));
        pb_gps_4->setText(QApplication::translate("mainWin", "\350\257\273\345\217\226RMC", 0));
        pb_gps_2->setText(QApplication::translate("mainWin", "\345\205\263\351\227\255GPS", 0));
        tb_gps_3->setItemText(tb_gps_3->indexOf(page_15), QApplication::translate("mainWin", "\345\256\232\344\275\215\346\265\213\350\257\225", 0));
        tb_gps->setItemText(tb_gps->indexOf(page_9), QApplication::translate("mainWin", "RMC", 0));
        tb_gps->setItemText(tb_gps->indexOf(page_10), QApplication::translate("mainWin", "\345\215\253\346\230\237\344\277\241\346\201\257", 0));
        tb_gps->setItemText(tb_gps->indexOf(page), QApplication::translate("mainWin", "\345\233\276\345\275\242", 0));
        toolBox_2->setItemText(toolBox_2->indexOf(page_7), QApplication::translate("mainWin", "GPS\344\270\216\346\265\213\350\257\225", 0));
        groupBoxdb->setTitle(QApplication::translate("mainWin", "IMEI\350\256\260\345\275\225", 0));
        lb_id_used->setText(QApplication::translate("mainWin", "\345\267\262\347\224\250:5\346\235\241", 0));
        pb_records_output->setText(QApplication::translate("mainWin", "\345\257\274\345\207\272\350\256\260\345\275\225", 0));
        pb_imei_record_look->setText(QApplication::translate("mainWin", "\346\237\245\347\234\213", 0));
        lb_imei_write_status->setText(QApplication::translate("mainWin", "(- -)", 0));
        pb_imei_write->setText(QApplication::translate("mainWin", "\345\206\231\345\205\245IMEI", 0));
        cb_config_ccid_read->setText(QApplication::translate("mainWin", "\350\257\273\345\217\226CCID", 0));
        cb_config_imei_repeated_check->setText(QApplication::translate("mainWin", "IMEI\351\207\215\345\244\215\346\243\200\346\237\245", 0));
        cb_config_imei_is_infront->setText(QApplication::translate("mainWin", "IMEI\345\234\250\345\211\215\351\235\242", 0));
        lb_imei_show->setText(QApplication::translate("mainWin", "xxxxxxxxxxxxxxx", 0));
        pb_imei_read->setText(QApplication::translate("mainWin", "\350\257\273\345\217\226IMEI", 0));
        toolBox_2->setItemText(toolBox_2->indexOf(page_6), QApplication::translate("mainWin", "IMEI\345\217\267\347\203\247\345\206\231", 0));
        groupBox_5->setTitle(QApplication::translate("mainWin", "\346\230\276\347\244\272", 0));
        lb_ccid_read_data->setText(QApplication::translate("mainWin", "CCID", 0));
        lb_imsi_read_data->setText(QApplication::translate("mainWin", "IMSI", 0));
        lb_eid_read_data->setText(QApplication::translate("mainWin", "EID", 0));
        groupBox_6->setTitle(QApplication::translate("mainWin", "\347\251\272\344\270\255\345\206\231\345\217\267", 0));
        lb_ota_post_data->setText(QApplication::translate("mainWin", "post data", 0));
        lb_ota_post_result->setText(QApplication::translate("mainWin", "result", 0));
        pb_check_ota_start->setText(QApplication::translate("mainWin", "\346\243\200\346\265\213\345\206\231\345\215\241\347\273\223\346\236\234", 0));
        lb_check_ota_result->setText(QApplication::translate("mainWin", "EID", 0));
        pb_ota_post_start->setText(QApplication::translate("mainWin", "\345\206\231\345\215\241", 0));
        toolBox_2->setItemText(toolBox_2->indexOf(page_13), QApplication::translate("mainWin", "CCID\350\257\273\345\217\226", 0));
        toolBox_2->setItemText(toolBox_2->indexOf(page_8), QApplication::translate("mainWin", "\350\207\252\345\256\232\344\271\211\345\221\275\344\273\244", 0));
        tabMain->setTabText(tabMain->indexOf(tabtest), QApplication::translate("mainWin", "P310QH_\344\272\247\347\272\277\346\265\213\350\257\225", 0));
        gb_test->setTitle(QString());
        tabMain->setTabText(tabMain->indexOf(tabUart), QApplication::translate("mainWin", "\344\270\262\345\217\243\350\260\203\350\257\225", 0));
        tabMain->setTabText(tabMain->indexOf(tab_linetest), QApplication::translate("mainWin", "\345\216\213\345\212\233\346\265\213\350\257\225", 0));
        groupBox->setTitle(QApplication::translate("mainWin", "\347\275\221\347\273\234\345\274\200\351\224\201\346\265\213\350\257\225", 0));
        te_http_get_url->setHtml(QApplication::translate("mainWin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">http://demo.nbiot.com.cn/Opration/sendOpen?imei=358511020000232</p></body></html>", 0));
        pb_http_get_start->setText(QApplication::translate("mainWin", "\345\274\200\345\247\213\345\276\252\347\216\257", 0));
        te_http_get_result->setHtml(QApplication::translate("mainWin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pb_http_get_stop->setText(QApplication::translate("mainWin", "\345\201\234\346\255\242\345\276\252\347\216\257", 0));
        pb_http_get_single->setText(QApplication::translate("mainWin", "\345\215\225\346\254\241\345\274\200\351\224\201", 0));
        tabMain->setTabText(tabMain->indexOf(tab), QApplication::translate("mainWin", "\351\241\265", 0));
        dataSet_GroupBox->setTitle(QApplication::translate("mainWin", "\346\225\260\346\215\256\350\256\276\347\275\256", 0));
        emptyRecv_Button->setText(QApplication::translate("mainWin", "\346\270\205\347\251\272\346\216\245\346\224\266&C", 0));
        sendCount_Label->setText(QApplication::translate("mainWin", "\345\217\221\351\200\201\357\274\2320 \345\255\227\350\212\202", 0));
        recvCount_Label->setText(QApplication::translate("mainWin", "\346\216\245\346\224\266\357\274\2320 \345\255\227\350\212\202", 0));
        cbprintcom->setText(QApplication::translate("mainWin", "\346\230\276\347\244\272\344\270\262\345\217\243\346\225\260\346\215\256", 0));
        recv_16_CheckBox->setText(QApplication::translate("mainWin", "\345\215\201\345\205\255\350\277\233\345\210\266\346\216\245\346\224\266", 0));
        send_16_CheckBox->setText(QApplication::translate("mainWin", "\345\215\201\345\205\255\350\277\233\345\210\266\345\217\221\351\200\201", 0));
        cb_com_cr_show->setText(QApplication::translate("mainWin", "\346\215\242\350\241\214\345\217\257\350\247\206", 0));
        showTime_Label->setText(QApplication::translate("mainWin", "\346\227\266\351\227\264\357\274\232", 0));
        date_Label->setText(QApplication::translate("mainWin", "\346\227\245\346\234\237\357\274\232", 0));
        pushButton_log_find->setText(QApplication::translate("mainWin", "\346\237\245\346\211\276", 0));
        pushButton_log_find->setShortcut(QApplication::translate("mainWin", "F3", 0));
    } // retranslateUi

};

namespace Ui {
    class mainWin: public Ui_mainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
