#include "onewirethread.h"
#include "../wiringPi/wiringPi.h"
#include <QDebug>

extern float temp;

OneWireThread::OneWireThread()
{
    temp = 0;
    isStop = false;

}

void OneWireThread::run()
{
    while(!isStop)
    {
        //don't insert anything...
        if(oneWireReset(7))
        {
            oneWireSendComm(7,0xcc);
            oneWireSendComm(7,0x44);
        }

        if(oneWireReset(7))
        {
            oneWireSendComm(7,0xcc);
            oneWireSendComm(7,0xbe);

            int LSB = oneWireReceive(7);
            int MSB = oneWireReceive(7);

            temp = tempchange(LSB,MSB);
        }
        //don't insert anything...
        emit(this->getTempValue());
        isStop = true;

    }
}

float OneWireThread::tempchange(int lsb, int msb)
{
    float temp;
    int tem;

    if (msb >= 0xF0)
    {
        msb = 255 - msb;
        lsb = 256 - lsb;
        tem = -(msb * 16 * 16 + lsb);
    }
    else
    {
        tem = (msb * 16 * 16 + lsb);
    }

    temp = tem * 0.0625;
    return temp;
}

bool OneWireThread::oneWireReset(int pin)
{

    pinMode(pin,OUTPUT);
    digitalWrite(pin,HIGH);
    digitalWrite(pin,LOW);
    delayMicroseconds(480);
    digitalWrite(pin,HIGH);
    delayMicroseconds(30);
    pinMode(pin,INPUT);
    if(digitalRead(pin) == LOW)
    {
        delayMicroseconds(450);
        return true;
    }
    else
    {
        return false;
    }

}
void OneWireThread::writeBit(int pin,int bit)
{
    pinMode(pin,OUTPUT);
    digitalWrite(pin,LOW);
    delayMicroseconds(2);
    digitalWrite(pin,bit);
    delayMicroseconds(30);
    digitalWrite(pin,HIGH);
    delayMicroseconds(1);
}

void OneWireThread::oneWireSendComm(int pin,int byte)
{
     for(int i=0;i<8;i++)
     {
         int sta = byte & 0x01;
         writeBit(pin,sta);
         byte >>= 1;

      }
}

int OneWireThread::readBit(int pin)
{
    int tmp;
    pinMode(pin,OUTPUT);
    digitalWrite(pin,HIGH);
    digitalWrite(pin,LOW);
    delayMicroseconds(2);
    digitalWrite(pin,HIGH);
    pinMode(pin,INPUT);
    delayMicroseconds(2);
    tmp = digitalRead(pin);
    delayMicroseconds(40);
    return tmp;
}

int OneWireThread::oneWireReceive(int pin)
{
    int i,j,k;
    for(i=0;i<8;i++)
    {
        j = readBit(pin);
        k = (j << 7) | (k >> 1);
    }
    k = k & 0x00FF;
    return k;
}

