#include<stdio.h>
#include<wiringPi.h>
int main(void)
{
    const int buzzer_pin = 26;
    
    wiringPiSetup();
    
    pinMode(buzzer_pin, PWM_OUTPUT);
    
    pwmSetClock(10);
    pwmSetMode(PWM_MODE_MS);

    pwmSetRange(1000000/262);
    pwmWrite(buzzer_pin, 1000000/262/2);

    delay(3000);

    pwmWrite(buzzer_pin, 0);
}