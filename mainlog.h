#ifndef MAINLOG_H
#define MAINLOG_H

#include <QWidget>

namespace Ui {
  class mainlog;
}

class mainlog : public QWidget
{
  Q_OBJECT

public:
  explicit mainlog(QWidget *parent = 0);
  ~mainlog();
  void show_log(QString s,bool is_show_time,QColor c,bool show_cr);
  void show_clear();
  void log_find(QString s);
protected:
   void moveEvent(QMoveEvent *e);
   bool event(QEvent *event);

signals:
  void posChanged();
private:
  Ui::mainlog *ui;
};

#endif // MAINLOG_H
