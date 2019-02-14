#ifndef GPS_SETTING_H
#define GPS_SETTING_H

#include <QWidget>

namespace Ui {
class gps_setting;
}

class gps_setting : public QWidget
{
    Q_OBJECT

public:
    void show_param(void);
    explicit gps_setting(QWidget *parent = 0);
    ~gps_setting();

private slots:
    void on_pushButton_confirm_clicked();

    void on_pushButton_cancel_clicked();

private:
    Ui::gps_setting *ui;
};

#endif // GPS_SETTING_H
