#include "lineeditgroup.h"
#include <QVBoxLayout>

lineEditGroup::lineEditGroup(QWidget *p)
{
    QVBoxLayout *lineLayout = new QVBoxLayout();

    for(int i = 0;i < 10;i ++)
    {
        line[i] = new QLineEdit();
        lineLayout->addWidget(line[i]);
    }
    this->setLayout(lineLayout);
    this->setGeometry(0,50,p->width(),50);
}
