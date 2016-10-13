#include "readpinthread.h"
#include <QDebug>
#include "../wiringPi/wiringPi.h"


bool w0,w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14,w15,w16;
bool w21,w22,w23,w24,w25,w26,w27,w28,w29,w30,w31;


ReadPinThread::ReadPinThread()
{
    stopped = false;
}

void ReadPinThread::run()
{
    while(!stopped)
    {
            w0 = false;
            if(digitalRead(0)==LOW)
            {
                delay(10);
                if(digitalRead(0)==LOW)
                {
                    w0 = true;
                    if(digitalRead(0)==HIGH)
                    {
                        w0 = false;
                    }
                }
            }

            w1 = false;
            if(digitalRead(1)==LOW)
            {
                delay(10);
                if(digitalRead(1)==LOW)
                {
                    w1 = true;
                    if(digitalRead(1)==HIGH)
                    {
                        w1 = false;
                    }
                }
            }

            w2 = false;
            if(digitalRead(2)==LOW)
            {
                delay(10);
                if(digitalRead(2)==LOW)
                {
                    w2 = true;
                    if(digitalRead(2)==HIGH)
                    {
                        w2 = false;
                    }
                }
            }

            w3 = false;
            if(digitalRead(3)==LOW)
            {
                delay(10);
                if(digitalRead(3)==LOW)
                {
                    w3 = true;
                    if(digitalRead(3)==HIGH)
                    {
                        w3 = false;
                    }
                }
            }

            w4 = false;
            if(digitalRead(4)==LOW)
            {
                delay(10);
                if(digitalRead(4)==LOW)
                {
                    w4 = true;
                    if(digitalRead(4)==HIGH)
                    {
                        w4 = false;
                    }
                }
            }

            w5 = false;
            if(digitalRead(5)==LOW)
            {
                delay(10);
                if(digitalRead(5)==LOW)
                {
                    w5 = true;
                    if(digitalRead(5)==HIGH)
                    {
                        w5 = false;
                    }
                }
            }

            w6 = false;
            if(digitalRead(6)==LOW)
            {
                delay(10);
                if(digitalRead(6)==LOW)
                {
                    w6 = true;
                    if(digitalRead(6)==HIGH)
                    {
                        w6 = false;
                    }
                }
            }

            w7 = false;
            if(digitalRead(7)==LOW)
            {
                delay(10);
                if(digitalRead(7)==LOW)
                {
                    w7 = true;
                    if(digitalRead(7)==HIGH)
                    {
                        w7 = false;
                    }
                }
            }

            w8 = false;
            if(digitalRead(8)==LOW)
            {
                delay(10);
                if(digitalRead(8)==LOW)
                {
                    w8 = true;
                    if(digitalRead(8)==HIGH)
                    {
                        w8 = false;
                    }
                }
            }

            w9 = false;
            if(digitalRead(9)==LOW)
            {
                delay(10);
                if(digitalRead(9)==LOW)
                {
                    w9 = true;
                    if(digitalRead(9)==HIGH)
                    {
                        w9 = false;
                    }
                }
            }

            w10 = false;
            if(digitalRead(10)==LOW)
            {
                delay(10);
                if(digitalRead(10)==LOW)
                {
                    w10 = true;
                    if(digitalRead(10)==HIGH)
                    {
                        w10 = false;
                    }
                }
            }

            w11 = false;
            if(digitalRead(11)==LOW)
            {
                delay(10);
                if(digitalRead(11)==LOW)
                {
                    w11 = true;
                    if(digitalRead(11)==HIGH)
                    {
                        w11 = false;
                    }
                }
            }

            w12 = false;
            if(digitalRead(12)==LOW)
            {
                delay(10);
                if(digitalRead(12)==LOW)
                {
                    w12 = true;
                    if(digitalRead(12)==HIGH)
                    {
                        w12 = false;
                    }
                }
            }

            w13 = false;
            if(digitalRead(13)==LOW)
            {
                delay(10);
                if(digitalRead(13)==LOW)
                {
                    w13 = true;
                    if(digitalRead(13)==HIGH)
                    {
                        w13 = false;
                    }
                }
            }

            w14 = false;
            if(digitalRead(14)==LOW)
            {
                delay(10);
                if(digitalRead(14)==LOW)
                {
                    w14 = true;
                    if(digitalRead(14)==HIGH)
                    {
                        w14 = false;
                    }
                }
            }

            w15 = false;
            if(digitalRead(15)==LOW)
            {
                delay(10);
                if(digitalRead(15)==LOW)
                {
                    w15 = true;
                    if(digitalRead(15)==HIGH)
                    {
                        w15 = false;
                    }
                }
            }

            w16 = false;
            if(digitalRead(16)==LOW)
            {
                delay(10);
                if(digitalRead(16)==LOW)
                {
                    w16 = true;
                    if(digitalRead(16)==HIGH)
                    {
                        w16 = false;
                    }
                }
            }

            w21 = false;
            if(digitalRead(21)==LOW)
            {
                delay(10);
                if(digitalRead(21)==LOW)
                {
                    w21 = true;
                    if(digitalRead(21)==HIGH)
                    {
                        w21 = false;
                    }
                }
            }

            w22 = false;
            if(digitalRead(22)==LOW)
            {
                delay(10);
                if(digitalRead(22)==LOW)
                {
                    w22 = true;
                    if(digitalRead(22)==HIGH)
                    {
                        w22 = false;
                    }
                }
            }

            w23 = false;
            if(digitalRead(23)==LOW)
            {
                delay(10);
                if(digitalRead(23)==LOW)
                {
                    w23 = true;
                    if(digitalRead(23)==HIGH)
                    {
                        w23 = false;
                    }
                }
            }

            w24 = false;
            if(digitalRead(24)==LOW)
            {
                delay(10);
                if(digitalRead(24)==LOW)
                {
                    w24 = true;
                    if(digitalRead(24)==HIGH)
                    {
                        w24 = false;
                    }
                }
            }

            w25 = false;
            if(digitalRead(25)==LOW)
            {
                delay(10);
                if(digitalRead(25)==LOW)
                {
                    w25 = true;
                    if(digitalRead(25)==HIGH)
                    {
                        w25 = false;
                    }
                }
            }

            w26 = false;
            if(digitalRead(26)==LOW)
            {
                delay(10);
                if(digitalRead(26)==LOW)
                {
                    w26 = true;
                    if(digitalRead(26)==HIGH)
                    {
                        w26 = false;
                    }
                }
            }

            w27 = false;
            if(digitalRead(27)==LOW)
            {
                delay(10);
                if(digitalRead(27)==LOW)
                {
                    w27 = true;
                    if(digitalRead(27)==HIGH)
                    {
                        w27 = false;
                    }
                }
            }

            w28 = false;
            if(digitalRead(28)==LOW)
            {
                delay(10);
                if(digitalRead(28)==LOW)
                {
                    w28 = true;
                    if(digitalRead(28)==HIGH)
                    {
                        w28 = false;
                    }
                }
            }

            w29 = false;
            if(digitalRead(29)==LOW)
            {
                delay(10);
                if(digitalRead(29)==LOW)
                {
                    w29 = true;
                    if(digitalRead(29)==HIGH)
                    {
                        w29 = false;
                    }
                }
            }

            w30 = false;
            if(digitalRead(30)==LOW)
            {
                delay(10);
                if(digitalRead(30)==LOW)
                {
                    w30 = true;
                    if(digitalRead(30)==HIGH)
                    {
                        w30 = false;
                    }
                }
            }

            w31 = false;
            if(digitalRead(31)==LOW)
            {
                delay(10);
                if(digitalRead(31)==LOW)
                {
                    w31 = true;
                    if(digitalRead(31)==HIGH)
                    {
                        w31 = false;
                    }
                }
            }
        emit(this->pinRead());
            stopped = true;
    }



}


void ReadPinThread::stop()
{
    stopped = true;
}

void ReadPinThread::disStop()
{
    stopped = false;
}
