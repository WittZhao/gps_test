#include "mainlog.h"
#include "ui_mainlog.h"
#include <QTime>

mainlog::mainlog(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::mainlog)
{
  ui->setupUi(this);
  //this->setWindowFlags(Qt::WindowTitleHint | Qt::CustomizeWindowHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);
   this->setWindowFlags(Qt::WindowTitleHint | Qt::CustomizeWindowHint| Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);//去掉标题栏
   this->setWindowTitle("日志");
}

mainlog::~mainlog()
{
  delete ui;
}

void mainlog::show_log(QString s, bool is_show_time, QColor c, bool show_cr)
{
  if(show_cr)
  {
      s=s.replace("\r","\\r");
      s=s.replace("\n","\\n");
  }
  if(is_show_time)
    {
     // ui->telog->setTextColor(QColor::fromRgb(0,0,255));
     // ui->telog->insertPlainText(QString("[%1]").arg(QTime::currentTime().toString("HH:mm:ss.zzz")));
     // ui->telog->setTextColor(c);
     // ui->telog->insertPlainText(QString(":%2\n").arg(s));
      ui->telog->setTextColor(c);
      ui->telog->append(QString("[%1] %2").arg(QTime::currentTime().toString("HH:mm:ss.zzz")).arg(s));
    }

  else
   {
       ui->telog->setTextColor(c);
       ui->telog->append(QString("%1").arg(s));
   }
  ui->telog->moveCursor(QTextCursor::End);
}

void mainlog::show_clear()
{
    ui->telog->clear();
}

void mainlog::log_find(QString s)
{
    //ui->telog->find(s,QTextDocument::FindBackward
    QRegExp exp(s,Qt::CaseInsensitive);
    bool isfind;
    isfind=ui->telog->find(exp,0);
    if(!isfind)
    {
        ui->telog->moveCursor(QTextCursor::Start);
        isfind=ui->telog->find(exp,0);
    }
    if(isfind)//查找后一个
    {
        QPalette palette = ui->telog->palette();
        palette.setColor(QPalette::Highlight,palette.color(QPalette::Active,QPalette::Highlight));
        ui->telog->setPalette(palette);
    }
}

void mainlog::moveEvent(QMoveEvent *e)
{
 // emit posChanged();
}

bool mainlog::event(QEvent *event)
{
  if (event->type() == QEvent::NonClientAreaMouseButtonDblClick)
          emit posChanged();
  else
      return QWidget::event(event);
}
