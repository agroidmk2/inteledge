#include<stdio.h>
#include<stdlib.h>
#include<wiringPi.h>
#include<unistd.h>
#include<time.h>
#define PIR_D 2
#define BUZZER 14

int main(void)
{
    int pir_val, i; //senset setting
    if(wiringPiSetup() == -1)
    return -1;
    pinMode(PIR_D, INPUT);
    
    int buzzer_val; //buzzer setting
    if(wiringPiSetup() == -1)
        return 1;
    pinMode(BUZZER,OUTPUT);
    
    for(i=0;i<20;i++)
    {
        pir_val = digitalRead(PIR_D);
        if(pir_val == 1)
        {
            printf("PIR Detected !! \n");
            //printf(pir_val);
            buzzer_val = 1;
            printf("BUZZER ON!! \n");
            digitalWrite(BUZZER,buzzer_val);
            sleep(1);
            buzzer_val = 0;
            printf("BUZZER OFF !!\n");
            digitalWrite(BUZZER,buzzer_val);
            sleep(1);
        }
        else
            printf("PIR Not detcet !! \n");
            printf("pir_val");
        sleep(1);
    }
    return 0;
}