#include "com_thread.h"
#include <QDebug>

com_thread::com_thread()
{

}

com_thread::com_thread(QString name)
{
  this->name=name;
  qDebug()<<"thread create:"<<this->name;
}


void com_thread::run()
{
  int i;
  for(i=0;i<10;i++)
    {
      emit processProgress(10*i);
      msleep(1000);
    }

  emit processFinished(name+":finish");
}

com_thread::~com_thread()
{

}

