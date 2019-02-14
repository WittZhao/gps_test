/********************************************************************************
** Form generated from reading UI file 'gps_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPS_SETTING_H
#define UI_GPS_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gps_setting
{
public:
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_cancel;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_sat_num;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_sni;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_time;
    QDoubleSpinBox *doubleSpinBox_time_agps;
    QLabel *label_4;

    void setupUi(QWidget *gps_setting)
    {
        if (gps_setting->objectName().isEmpty())
            gps_setting->setObjectName(QStringLiteral("gps_setting"));
        gps_setting->resize(433, 183);
        pushButton_confirm = new QPushButton(gps_setting);
        pushButton_confirm->setObjectName(QStringLiteral("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(220, 150, 75, 23));
        pushButton_cancel = new QPushButton(gps_setting);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(130, 150, 75, 23));
        layoutWidget = new QWidget(gps_setting);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 321, 111));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        doubleSpinBox_sat_num = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_sat_num->setObjectName(QStringLiteral("doubleSpinBox_sat_num"));
        doubleSpinBox_sat_num->setDecimals(0);
        doubleSpinBox_sat_num->setValue(40);

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_sat_num);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        doubleSpinBox_sni = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_sni->setObjectName(QStringLiteral("doubleSpinBox_sni"));
        doubleSpinBox_sni->setDecimals(0);
        doubleSpinBox_sni->setValue(40);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_sni);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        doubleSpinBox_time = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_time->setObjectName(QStringLiteral("doubleSpinBox_time"));
        doubleSpinBox_time->setDecimals(0);
        doubleSpinBox_time->setMinimum(1);
        doubleSpinBox_time->setMaximum(300);
        doubleSpinBox_time->setValue(40);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_time);

        doubleSpinBox_time_agps = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_time_agps->setObjectName(QStringLiteral("doubleSpinBox_time_agps"));
        doubleSpinBox_time_agps->setDecimals(0);
        doubleSpinBox_time_agps->setMinimum(1);
        doubleSpinBox_time_agps->setMaximum(300);
        doubleSpinBox_time_agps->setValue(40);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_time_agps);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);


        retranslateUi(gps_setting);

        QMetaObject::connectSlotsByName(gps_setting);
    } // setupUi

    void retranslateUi(QWidget *gps_setting)
    {
        gps_setting->setWindowTitle(QApplication::translate("gps_setting", "GPS\346\265\213\350\257\225\350\256\276\347\275\256", 0));
        pushButton_confirm->setText(QApplication::translate("gps_setting", "\347\241\256\345\256\232", 0));
        pushButton_cancel->setText(QApplication::translate("gps_setting", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("gps_setting", "\345\215\253\346\230\237\347\274\226\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("gps_setting", "\346\234\200\345\260\217\344\277\241\345\231\252\346\257\224\357\274\232", 0));
        label_3->setText(QApplication::translate("gps_setting", "\346\234\200\345\244\247\347\255\211\345\276\205\346\227\266\351\227\264\357\274\232", 0));
        label_4->setText(QApplication::translate("gps_setting", "APGS\346\234\200\345\244\247\346\227\266\351\227\264\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class gps_setting: public Ui_gps_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPS_SETTING_H
