#ifndef COM_THREAD_H
#define COM_THREAD_H
#include <QObject>
#include <QThread>

class com_thread : public QThread
{
  Q_OBJECT
public:
    com_thread();
    com_thread(QString name);
    virtual void run();
    ~com_thread();
signals:
    void processFinished(QString result);
    void processProgress(int progress);
private:
    QString name;
};

#endif // COM_THREAD_H
