#include<stdio.h>
#include<wiringPi.h>
int main(void)
{
    const int led_pin = 26;

    wiringPiSetup();

    pinMode(led_pin, PWM_OUTPUT);
    
    pwmSetClock(10);
    pwmSetMode(PWM_MODE_MS);

    pwmSetRange(1000000);
    pwmWrite(led_pin, 1000000/2);    
}