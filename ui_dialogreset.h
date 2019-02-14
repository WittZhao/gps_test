/********************************************************************************
** Form generated from reading UI file 'dialogreset.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRESET_H
#define UI_DIALOGRESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogReset
{
public:
    QLCDNumber *lcdNumber;
    QLabel *label;

    void setupUi(QDialog *DialogReset)
    {
        if (DialogReset->objectName().isEmpty())
            DialogReset->setObjectName(QStringLiteral("DialogReset"));
        DialogReset->resize(378, 218);
        DialogReset->setStyleSheet(QLatin1String("background-color: rgb(233, 255, 219);\n"
"background-color: rgb(58, 147, 255);"));
        lcdNumber = new QLCDNumber(DialogReset);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(140, 120, 81, 41));
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(3);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("intValue", QVariant(50));
        label = new QLabel(DialogReset);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 231, 51));
        QFont font;
        font.setFamily(QStringLiteral("Corbel"));
        font.setPointSize(20);
        label->setFont(font);

        retranslateUi(DialogReset);

        QMetaObject::connectSlotsByName(DialogReset);
    } // setupUi

    void retranslateUi(QDialog *DialogReset)
    {
        DialogReset->setWindowTitle(QApplication::translate("DialogReset", "Dialog", 0));
        label->setText(QApplication::translate("DialogReset", "\347\203\247\345\206\231\346\210\220\345\212\237\357\274\214\351\207\215\345\220\257\344\270\255", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogReset: public Ui_DialogReset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRESET_H
