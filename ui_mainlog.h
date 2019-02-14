/********************************************************************************
** Form generated from reading UI file 'mainlog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINLOG_H
#define UI_MAINLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainlog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *telog;

    void setupUi(QWidget *mainlog)
    {
        if (mainlog->objectName().isEmpty())
            mainlog->setObjectName(QStringLiteral("mainlog"));
        mainlog->resize(542, 640);
        gridLayout = new QGridLayout(mainlog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        telog = new QTextEdit(mainlog);
        telog->setObjectName(QStringLiteral("telog"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(telog->sizePolicy().hasHeightForWidth());
        telog->setSizePolicy(sizePolicy);
        telog->setMinimumSize(QSize(0, 400));

        gridLayout->addWidget(telog, 0, 0, 1, 1);


        retranslateUi(mainlog);

        QMetaObject::connectSlotsByName(mainlog);
    } // setupUi

    void retranslateUi(QWidget *mainlog)
    {
        mainlog->setWindowTitle(QApplication::translate("mainlog", "Form", 0));
        telog->setHtml(QApplication::translate("mainlog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class mainlog: public Ui_mainlog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINLOG_H
