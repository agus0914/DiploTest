#include <led.h>


Led led;

void setup()
{
    led.begin(2);
}

void loop()
{
    delay(100);
    led.on();
    delay(100);
    led.of();
}