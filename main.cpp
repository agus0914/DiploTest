//example Arduino
#include "Timer.h"

Timer timer;

void setup()
{
    timer.start();
    pinMode(2,OUTPUT);
}

void loop()
{
    if( timer.elapsed() > 100 )
    {
        led.toogle();
        timer.start();
    }
}
