#include<stdio.h>
#include<wiringPi.h>
int main(void)
{
    const int buzzer_pin = 26;
    
    wiringPiSetup();
    
    pinMode(buzzer_pin, PWM_OUTPUT);
    
    const int melody[] = {523,587,659,698,784,880,988,1047};

    int note;
    for(note=0;note<=7;note++)
    {
        pwmSetRange(1000000/melody[note]);
        pwmWrite(buzzer_pin, 1000000/melody[note]/2);
        delay(1000);
    }
    for(note=7;note>=0;note--)
    {
        pwmSetRange(1000000/melody[note]);
        pwmWrite(buzzer_pin, 1000000/melody[note]/2);
        delay(1000);
    }
    pwmWrite(buzzer_pin, 0);
}