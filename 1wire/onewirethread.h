#ifndef ONEWIRETHREAD_H
#define ONEWIRETHREAD_H

#include <QThread>

class OneWireThread : public QThread
{
    Q_OBJECT
public:
    OneWireThread();
    void run();
    void stop(){isStop = true;}
    void setStopFlag(bool status){isStop = status;}

signals:
    void getTempValue();

private:
    bool oneWireReset(int pin);
    void writeBit(int pin,int bit);
    void oneWireSendComm(int pin,int byte);
    int readBit(int pin);
    int oneWireReceive(int pin);
    float tempchange(int lsb,int msb);

    volatile bool isStop;


};

#endif // ONEWIRETHREAD_H
