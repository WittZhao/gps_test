#ifndef MAINWIN_H
#define MAINWIN_H

#include <QWidget>
#include <QGroupBox>
#include <QTimer>
#include <QTextStream>
//#include <QThread>
#include <qt_windows.h>
#include <QCloseEvent>
#include <QProgressBar>
#include <QImage>
#include "qextserialport.h"
#include "utilman.h"
#include "param.h"
#include "dialogreset.h"
#include "com_thread.h"
#include "setting_helper.h"
#include "mainlog.h"
#include "httppost.h"
#include "gps_setting.h"
#include "database.h"
#include "qcustomplot.h"
#include <QTime>

enum param_state_t{
  param_state_read,
  param_state_write,
  param_state_none
};

enum write_step_t{
  write_step_idle,
  write_step_read_mcu_id,
  write_step_write_param,
  write_step_check_param,
  write_step_succeed,
  write_step_fail,
};
enum read_step_t{
  read_step_idle,
  read_step_read,
  read_step_succeed,
  read_step_fail,
};

enum at_cmd_state_t{
    //-----gps-------------
    at_gps_state_open_send=0,
    at_gps_state_open_wait,
    at_gps_state_open_ack,
    at_gps_state_open_delay,
    at_gps_state_read_send,
    at_gps_state_read_wait,
    at_gps_state_read_ack,
    at_gps_state_read_delay,
    at_gps_state_end,
    at_gps_state_error_poweroff,
    at_gps_state_error_other,
    //agps
    at_gps_state_agps_send,
    at_gps_state_agps_wait,
    at_gps_state_agps_ack,
    //----net-------
    at_net_state_cpin_send=100,
    at_net_state_cpin_wait,
    at_net_state_cpin_ack,
    at_net_state_cgatt_send,
    at_net_state_cgatt_wait,
    at_net_state_cgatt_ack,
    at_net_state_qihead_send,
    at_net_state_qihead_wait,
    at_net_state_qihead_ack,
    at_net_state_qiopen_send,
    at_net_state_qiopen_wait,
    at_net_state_qiopen_ack,
    at_net_state_qisend_send,
    at_net_state_prompt_wait,
    at_net_state_prompt_ack,
    at_net_state_qidata_send,
    at_net_state_qidata_wait,
    at_net_state_qidata_ack,
    at_net_state_qidata_delay,
    at_net_state_error,
    at_net_state_error_ack,
    at_net_state_qideact_send,
    at_net_state_qideact_wait,
    at_net_state_qideact_ack,
    at_net_state_qiact_send,
    at_net_state_qiact_wait,
    at_net_state_qiact_ack,
    at_net_state_wait_gps,
    //-------------------
    at_state_gsensor_test_send,
    at_state_gsensor_test_wait,
    at_state_gsensor_test_ack,
    //----imei read------
    at_state_imei_read_send=300,
    at_state_imei_read_wait,
    at_state_imei_read_ack,
    at_state_imei_read_fail,
    //----imei write----
    at_state_imei_write_send,
    at_state_imei_write_wait,
    at_state_imei_write_ack,
    at_state_imei_write_fail,
    at_state_imeiw_ccid_read_send,
    at_state_imeiw_ccid_read_wait,
    at_state_imeiw_ccid_read_ack,
    at_state_imeiw_ccid_read_fail,

    //----ccid read---
    at_state_ccid_read_send=400,
    at_state_ccid_read_wait,
    at_state_ccid_read_ack,
    at_state_ccid_read_fail,
    at_state_ceid_read_send,
    at_state_ceid_read_wait,
    at_state_ceid_read_ack,
    at_state_ceid_read_fail,
    at_state_imsi_read_send,
    at_state_imsi_read_wait,
    at_state_imsi_read_ack,
    at_state_imsi_read_fail,
    at_state_idle,
    at_state_post_result,
    at_state_ota_sleep,
};
enum work_mode_t{
  work_mode_param,
  work_mode_bin_update,
  work_mode_test,
  work_mode_uart,
  work_mode_line_test,
};

//class mainapp: public QObject
//{
//  Q_OBJECT
//public:
//  void ota_post_data_display(QString data);
//  void ota_post_result_display(QString data);
//signals:
//private slots:
//};
struct excel_rd
{
    QString t_excel;
    QString ccid_excel;
    QString imsi_excel;
    QString ceid_excel;
    QString status_excel;
    QString cardid_excel;
    QString newnum_status;
    QString new_ccid;
    int read_status;
};

struct at_test_cmd_t{
  int test_enable;
  int ota_enable;  //移动SIM卡空中写号
  int check_enable;
  at_cmd_state_t state;
  int send_cnt;
  int wait_time_cnt;
  QString imeiw_input_text;
  QString imeiw_imei_text;
  QString imeiw_sn_text;
  QString imeiw_ccid_text;
  QString ccid_text;
  QString ceid_text;
  QString imsi_text;
  QString post_data_text;
  QString post_result_text;
};

struct at_net_cmd_t{
  int net_loop_enable;
  QTimer *timer;
  at_cmd_state_t state;
  QByteArray  bindate;
  QByteArray  sendbuf;
  int binsize;
  int packet_cnt;
  int sendingPos;
  int waitcnt;
  int net_send_cnt;
  int net_send_ok_cnt;
  int net_error_cnt;
};
struct at_gps_cmd_t{
  int cpin_is_tested;
  int cpin_test_cnt;
  int gps_test_life;
  int agps_test_life;
  int is_factory_gps_snr_test;
  int is_factory_agps_test;
  int gps_loop_enable;
  int gps_is_opened;
  QTimer *timer;
  at_cmd_state_t state;
  QByteArray  bindate;
  QByteArray  sendbuf;
  int binsize;
  int packet_cnt;
  int sendingPos;
  int gps_request_cnt;
  int gps_ack_cnt;
  int waitcnt;
};
#define  GPS_OPEN_WAIT_TIME 500
#define  GPS_OPEN_DELAY_TIME 10
#define  GPS_READ_WAIT_TIME 250
#define  GPS_READ_DELAY_TIME 80

namespace Ui {
    class mainWin;
}

class mainWin : public QWidget {
    Q_OBJECT
public:
    //QextSerialPort *myCom;  //串口
    mainWin(QWidget *parent = 0);
    ~mainWin();
    void ota_post_data_display(QString data);
    void ota_post_result_display(QString data);
    void post_p310_ota_win(QString token,QString eid,QString imsi, QString newMSISDN);
    void post_p310_win(QString eid,QString imsi);
    void reply_ota_post_win(QNetworkReply *reply);
    void com_write(QString sendStr);                  //发送数据
    void com_write(QByteArray  bindate);                  //发送数据
protected:
    void changeEvent(QEvent *e);
    void closeEvent(QCloseEvent *event);
    void keyPressEvent(QKeyEvent *e);
    void moveEvent(QMoveEvent *e);
    bool eventFilter(QObject *obj, QEvent *e);
private:
    Ui::mainWin *ui;
    DialogReset *reset_show;
    mainlog *pmainlog;
    gps_setting *p_gps_setting;


    int mqtt_msg_id;
    QString mqtt_pub_test_topic;
    int     recvCount;      //接收计数器
    int     sendCount;      //发送计数器
    config_app_t config;

    bool    saveDataFlag;   //保存数据
    int     oldSize;
    int     timeInterval;
    param_state_t param_state;
    bool    is_bin_writing;
    work_mode_t mode;
    param_t param_w;
    param_t param_r;
    param_t param_config;
    write_step_t write_step;
    read_step_t  read_step;

    QextSerialPort *myCom;  //串口
    int com_is_open=0;

    QString     dir_save;       //保存文件的路径
    QFile       *file_save;
    QTextStream *text_save;

    QString     dir_send;       //发送文件的路径


    //QByteArray  sendingData;
    at_net_cmd_t at_net_cmd_block={0,};
    at_gps_cmd_t at_gps_cmd_block={0,0,};
    at_test_cmd_t test_cmd_block;
    cmd_test_config_t cmd_test_config;
    QProgressBar *progressBar;  //发送文件进度条

    QTextCodec *codec;      //用于解决接收和发送中文乱码问题
    QTimer  *clock;         //时间

    QTimer *readTimer;    //定时读取串口数据
    QTimer *autoSendTimer;//定时发送数据定时器
    com_thread *comthread;
    httppost client;
    QCPBars* g_bars;
//    mainapp app;


    HKEY hKey;
    wchar_t keyName[256];   //键名数组
    char    keyValue[256];  //键值数组
    wchar_t subkey[80];
    int indexnum;
    DWORD keysize,type,valuesize;

    //test
//    excel_rd rd;
    DataBase g_db;
    QString g_imei;
    QString g_sn;
    QNetworkAccessManager* g_network_manager;
    int g_http_test_on;
    int g_http_test_cnt;

    void initWindow();      //初始化界面
    void getPortName(QStringList &comList);     //unix下获取portName的的方法
    QString getPortName_win(int index,QString keyorvalue); //windows下获取portName的方法
    //void sendFile(QString sendStr);
    void param_write();
    void id_cnt_update();
    void show_log(QString s);
    void show_log(QString s,QColor c,bool showtime);
    void show_gps_result(QString s, QString color);
    void show_agps_result(QString s, QString color);
    void show_gsensor_result(QString s, QString color);
    void com_param_process(QByteArray buf_rec);
    void com_at_process(QByteArray buf_rec);
    void BinBufPacket(QByteArray &buf);
    void show_com_rx(QByteArray combuf);
    void show_gps_info(void);
    void plot_init(void);
    void bar_init(void);
    void plot_update(void);
    void bar_update(void);
    void testconfiginit();
    void com_init(void);
    bool imei_get(QString src, QString &imei, QString &sn);

private slots:
   // void on_sendAuto_CheckBox_clicked(bool checked);
    void on_clearSendCount_Button_clicked();
    //void on_clearRecvCount_Button_clicked();
    void on_recv_16_CheckBox_clicked(bool checked);
    void on_emptyRecv_Button_clicked();
    void on_isShow_CheckBox_stateChanged(int arg);
    void on_open_Button_clicked();
    void on_time_update();                     //动态显示时间
    void changeEnable(bool flag);       //改变状态
    void com_read();                   //读取串口数据
    void on_print_com_clicked(bool checked);
    void on_ButtonBinOpen_clicked();
    void on_ButtonBinWriteStart_clicked();
    void on_at_timer();
    void on_ButtonBinWriteStop_clicked();
    void on_recv_16_CheckBox_clicked();
    void processFinished(QString result);
    void processProgress(int progress);
    void process_key_fuse_start();
    void process_key_fuse_stop();
    void process_key_test();
    void param_edit_enable(bool enable);

    void process_show_slot();

    void on_send_16_CheckBox_clicked(bool checked);
    void on_cbprintcom_clicked(bool checked);
    void on_tabMain_currentChanged(int index);
    void on_CheckBoxIsBoot_clicked(bool checked);
    void on_le_qr_code_editingFinished();
    void on_toolBox_currentChanged(int index);
    void on_Button_Config_Read_clicked();
    void on_Button_Config_Save_clicked();
    //mqtt


     void on_pb_test_lock_check_clicked();

     void on_pb_test_reboot_clicked();

     void on_pb_test_lockopen_clicked();

     void on_pb_test_inquery_clicked();

     void on_pb_test_debug_on_clicked();

     void on_pb_test_debug_off_clicked();

     void on_pb_test_param_read_clicked();

     void on_pb_test_lock_reset_clicked();

     void on_pb_test_debug_on_AT_clicked();

     void on_pb_test_debug_off_AT_clicked();

     void on_pb_test_debug_on_GPS_clicked();

     void on_pb_test_debug_off_GPS_clicked();

     void on_pb_test_debug_on_AXIS_clicked();

     void on_pb_test_debug_off_AXIS_clicked();

     void on_pb_test_motor_f_clicked();

     void on_pb_test_motor_b_clicked();

     void on_pb_test_heartbeat_send_clicked();

     void on_pb_test_power_info_clicked();


     void on_pb_test_log_r_clicked();

     void on_pb_test_param_clear_clicked();

     void on_pb_test_gps_info_clicked();

     void on_pb_test_savemode_clicked();

     void on_pb_test_runmode_clicked();

     void on_pb_test_pcb_check_clicked();

     void on_pb_test_savemode_2_clicked();
     void on_pb_test_savemode_3_clicked();
     void on_pb_test_savemode_5_clicked();
     void on_pb_test_savemode_4_clicked();
     void on_pushButton_clicked();
     void on_pushButton_2_clicked();
     void on_pushButton_3_clicked();
     void on_pb_test_debug_off_AT_2_clicked();
     void on_pb_test_debug_on_AXIS_2_clicked();
     void on_pb_test_motor_b_2_clicked();
     void on_pb_test_heartbeat_send_2_clicked();
     void on_pb_test_debug_on_AXIS_3_clicked();
     void on_pb_test_debug_on_AXIS_4_clicked();
     void on_pb_gps_1_clicked();
     void on_pb_gps_2_clicked();
     void on_pb_gps_3_clicked();
     void on_pb_gps_4_clicked();
     void on_pb_gps_5_clicked();
     void on_pb_gps_6_clicked();
     void on_pushButton_4_clicked();
     void on_pushButton_6_clicked();
     void on_pushButton_7_clicked();
     void on_pushButton_8_clicked();
     void on_pushButton_9_clicked();
     void on_pushButton_10_clicked();
     void on_pushButton_11_clicked();
     void on_pb_test_qsclk_clicked();
     void on_pushButton_12_clicked();
     void on_cb_gps_loop_clicked(bool checked);
     void on_cb_net_loop_clicked(bool checked);
     void on_cb_net_loop_clicked();
     void on_pushButton_14_clicked();
     void on_pushButton_13_clicked();
     void on_pushButton_gps_start_clicked();
     void on_pushButton_gps_stop_clicked();
     void on_pb_test_qsclk_2_clicked();
     void on_pb_test_qsclk_3_clicked();

     void on_pushButton_gps_setting_clicked();
     void on_pb_imei_read_clicked();
     void on_pb_imei_write_clicked();
     void on_pb_records_output_clicked();
     void on_pushButton_5_clicked();
     void on_te_imei_write_textChanged();
     void on_pb_http_get_start_clicked();
     void reply_http_get(QNetworkReply *reply);
     void on_pb_http_get_stop_clicked();
     void on_pb_http_get_single_clicked();
     void on_pb_ccid_read_start_clicked();
     void on_pb_ccid_records_output_clicked();
     void on_cb_config_ccid_read_clicked(bool checked);
     void on_cb_config_imei_repeated_check_clicked(bool checked);
     void on_cb_config_imei_is_infront_clicked(bool checked);
     void on_cb_config_gps_autoopen_clicked(bool checked);
     void on_pushButton_agps_start_clicked();
     void on_pushButton_agps_stop_clicked();
     void on_pushButton_gsensor_start_clicked();
     void on_cb_config_gps_checksim_clicked(bool checked);
     void on_pb_imei_record_look_clicked();
     void on_pushButton_log_find_clicked();
     void on_cb_com_cr_show_clicked(bool checked);
     void on_lb_ccid_read_status_linkActivated(const QString &link);
     void on_pb_ota_post_start_clicked();

    excel_rd Excel_Read(QString ck_ceid,QString ck_imsi);    //excel读取与ceid、imsi相对应的信息
    int Excel_check_ota(QString ck_ceid,QString ck_imsi,QString ck_ccid);
    void on_pb_check_ota_start_clicked();
};

/*class readComThread:public QThread
{
    Q_OBJECT
protected:
    void run();
};*/

#endif // MAINWIN_H
