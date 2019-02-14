#include "gps_setting.h"
#include "ui_gps_setting.h"
#include "param.h"
#include "setting_helper.h"
#include "gps_helper.h"

void gps_setting::show_param()
{
    param_t r=setting_helper::param_read();
    this->show();
    ui->doubleSpinBox_sat_num->setValue(r.gps_test_sat_num.toDouble());
    ui->doubleSpinBox_sni->setValue(r.gps_test_min_nic.toDouble());
    ui->doubleSpinBox_time->setValue(r.gps_test_max_time.toDouble());
    ui->doubleSpinBox_time_agps->setValue(r.gps_test_max_time_agps.toDouble());
}

gps_setting::gps_setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gps_setting)
{
    ui->setupUi(this);
}

gps_setting::~gps_setting()
{
    delete ui;
}

void gps_setting::on_pushButton_confirm_clicked()
{
    double num;
    double sni;
    double time;
    double time_agps;
    param_t w;
    num=ui->doubleSpinBox_sat_num->value();
    sni=ui->doubleSpinBox_sni->value();
    time=ui->doubleSpinBox_time->value();
    time_agps=ui->doubleSpinBox_time_agps->value();
    gps_helper::gps_param.num=(int)num;
    gps_helper::gps_param.sni=(int)sni;
    gps_helper::gps_param.time=(int)time;
    gps_helper::gps_param.time_agps=(int)time_agps;

    w.gps_test_max_time_agps=QString::number(gps_helper::gps_param.time_agps,10);
    w.gps_test_max_time=QString::number(gps_helper::gps_param.time,10);
    w.gps_test_min_nic=QString::number(gps_helper::gps_param.sni,10);
    w.gps_test_sat_num=QString::number(gps_helper::gps_param.num,10);
    setting_helper::param_write(w);
    this->hide();
}

void gps_setting::on_pushButton_cancel_clicked()
{
    this->hide();
}
