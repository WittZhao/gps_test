#ifndef LINEEDITGROUP
#define LINEEDITGROUP

#include <QWidget>
#include <QLineEdit>

class lineEditGroup : public QWidget
{
    Q_OBJECT
public:
    lineEditGroup(QWidget *p = 0);
    QLineEdit * line[10];
//private:

//signals:

};

#endif // LINEEDITGROUP

