#include "dialogreset.h"
#include "ui_dialogreset.h"
#include "QDebug"


DialogReset::DialogReset(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DialogReset)
{
  ui->setupUi(this);
  this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
  showTimer=new QTimer(this);
  showTimer->setInterval(99);
  showTimer->start();
  connect(showTimer,SIGNAL(timeout()),this,SLOT(on_timer_tick()));
  qDebug()<<"dialogreset create!!!!!!!!!";
}

void DialogReset::show_time(int t)
{
  this->setModal(true);
  this->show();
  tick=t;
}

DialogReset::~DialogReset()
{
  delete ui;
  qDebug()<<"dialogreset destroy!!!!!!!!!";
}

void DialogReset::on_timer_tick()
{
  tick--;
  ui->lcdNumber->display(QString::number(tick/10.0, 'f', 3));
  if(tick<=0)
    this->hide();
}
