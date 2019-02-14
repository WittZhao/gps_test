#ifndef SETTING_HELPER_H
#define SETTING_HELPER_H
#include"param.h"
#include<QSettings>
#include<QDebug>
#include <QWidget>
#include <QGroupBox>
#include <QTimer>
#include <QTextStream>
//#include <QThread>
#include <qt_windows.h>
#include <QCloseEvent>
#include <QProgressBar>
#include <QImage>
#include <QPushButton>
#include <QTextEdit>

#define APP_CONFIG_FILE_NAME "setting.ini"
#define TEST_CONFIG_FILE_NAME "testconfig.ini"

struct cmd_test_t{
  QPushButton *button;
  QTextEdit *textedit;
  QString caption;
  QString cmd;
};
struct cmd_test_config_t{
  int num_all;
  int row_num;
  int buttonheight;
  cmd_test_t cmds[100];
};
struct config_app_t{
  bool    is_com_recv_hex_print;      //是否十六进制接收数据
  bool    is_com_send_hex_print;
  bool    is_com_print;
  bool    is_com_cr_show;
  bool    is_imei_write_then_ccid_read;
  bool    is_boot_upgrade;
  bool    is_imei_infront;
  bool    is_imei_repeated_check;
  bool    is_gps_autoopen;
  bool    is_gps_check_sim;
  int reset_time;
  QString dbname;
};

class setting_helper
{
public:
    setting_helper();
    ~setting_helper();
    static void param_write(param_t p)
    {
        QSettings settings(APP_CONFIG_FILE_NAME, QSettings::IniFormat); // 当前目录的INI文件
        settings.beginGroup("param");
        settings.setValue("gps_test_sat_num",p.gps_test_sat_num);
        settings.setValue("gps_test_min_nic",p.gps_test_min_nic);
        settings.setValue("gps_test_max_time",p.gps_test_max_time);
        settings.setValue("gps_test_max_time_agps",p.gps_test_max_time_agps);
        settings.endGroup();
    }
    static param_t  param_read()
    {
        QSettings settings(APP_CONFIG_FILE_NAME, QSettings::IniFormat);
        static param_t param_set;
        param_set.gps_test_sat_num= settings.value("param/gps_test_sat_num","8").toString();
        param_set.gps_test_min_nic= settings.value("param/gps_test_min_nic","39").toString();
        param_set.gps_test_max_time= settings.value("param/gps_test_max_time","120").toString();
        param_set.gps_test_max_time_agps= settings.value("param/gps_test_max_time_agps","60").toString();
        return param_set;
    }
    static int  test_config_get(cmd_test_config_t&config)
    {
        int i;
        QSettings settings(TEST_CONFIG_FILE_NAME, QSettings::IniFormat);
        settings.setIniCodec("UTF-8");
        i=settings.value("config/cmdall","-1").toInt();
        if(i<0)
            test_config_init();
        config.num_all= settings.value("config/cmdall","1").toInt();
        config.row_num= settings.value("config/rownum","5").toInt();
        config.buttonheight= settings.value("config/buttonheight","30").toInt();

        for(i=0;i<config.num_all;i++)
          {
            config.cmds[i].caption=settings.value(QString("%1/caption").arg(i),"错误").toString();
            config.cmds[i].cmd=settings.value(QString("%1/cmd").arg(i),"").toString();
          }
        return config.num_all;
    }
    static int  test_config_save(cmd_test_config_t&config)
    {
        int i;
        QSettings settings(TEST_CONFIG_FILE_NAME, QSettings::IniFormat);
        settings.setIniCodec("UTF-8");
        for(i=0;i<config.num_all;i++)
          {
            settings.beginGroup(QString().number(i));
            settings.setValue("caption",QString().number(i+1));
            settings.setValue("cmd",config.cmds[i].textedit->toPlainText());
            settings.endGroup();
          }
        return config.num_all;
    }
    static void test_config_init(void)
    {
        int i;
        int num=20;
        QSettings settings(TEST_CONFIG_FILE_NAME, QSettings::IniFormat); // 当前目录的INI文件
        settings.setValue("config/cmdall",QString().number(num));
        settings.setValue("config/buttonheight","25");
        for(i=0;i<num;i++)
        {
            settings.beginGroup(QString().number(i));
            settings.setValue("caption",QString().number(i+1));
            settings.setValue("cmd","AT\\r\\n");
            settings.endGroup();
        }
    }
    static int  app_config_get(config_app_t &config)
    {
      QSettings settings(APP_CONFIG_FILE_NAME, QSettings::IniFormat);
      config.reset_time=settings.value("config/resettime","10").toInt();
      config.is_com_print= settings.value("config/com_print","true").toBool();
      config.is_com_recv_hex_print= settings.value("config/com_recv_hex_print","false").toBool();
      config.is_com_send_hex_print= settings.value("config/com_send_hex_print","false").toBool();
      config.is_boot_upgrade= settings.value("config/boot_upgrade","false").toBool();
      config.is_imei_infront= settings.value("config/imei_infront","false").toBool();
      config.is_imei_write_then_ccid_read= settings.value("config/ccid_read","false").toBool();
      config.is_imei_repeated_check= settings.value("config/imei_repeated_check","false").toBool();
      config.is_gps_autoopen= settings.value("config/gps_autoopen","true").toBool();
      config.is_gps_check_sim= settings.value("config/gps_checksim","true").toBool();
      config.is_com_cr_show= settings.value("config/cr_show","false").toBool();
      //config.dbname= settings.value("config/dbname","yoobike.accdb").toString();

      config.is_boot_upgrade=FALSE;
      return 1;
    }
    static int app_config_save(config_app_t &config)
    {
      QSettings settings(APP_CONFIG_FILE_NAME, QSettings::IniFormat);
      settings.beginGroup("config");
      settings.setValue("com_print",config.is_com_print);
      settings.setValue("com_recv_hex_print",config.is_com_recv_hex_print);
      settings.setValue("com_send_hex_print",config.is_com_send_hex_print);
      settings.setValue("boot_upgrade",config.is_boot_upgrade);
      settings.setValue("imei_infront",config.is_imei_infront);
      settings.setValue("ccid_read",config.is_imei_write_then_ccid_read);
      settings.setValue("imei_repeated_check",config.is_imei_repeated_check);
      settings.setValue("gps_autoopen",config.is_gps_autoopen);
      settings.setValue("gps_checksim",config.is_gps_check_sim);
      settings.setValue("cr_show",config.is_gps_check_sim);
      settings.endGroup();
      return 1;
    }
};

#endif // SETTING_HELPER_H
