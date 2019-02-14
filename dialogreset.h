#ifndef DIALOGRESET_H
#define DIALOGRESET_H

#include <QDialog>
#include <QTimer>
namespace Ui {
  class DialogReset;
}

class DialogReset : public QDialog
{
  Q_OBJECT

public:
  explicit DialogReset(QWidget *parent = 0);
  void show_time(int t);
  ~DialogReset();

private:
  Ui::DialogReset *ui;
  QTimer * showTimer;
  int tick;
private slots:
    void on_timer_tick();
};

#endif // DIALOGRESET_H
