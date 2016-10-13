#ifndef READPINTHREAD_H
#define READPINTHREAD_H

#include <QThread>

class ReadPinThread : public QThread
{
    Q_OBJECT
public:
    ReadPinThread();
    void run();
    void stop();
    void disStop();
signals:
    void pinRead();


private:

    volatile bool stopped;
};

#endif // READPINTHREAD_H
