#include<stdio.h>
#include<stdlib.h>
#include<wiringPi.h>
#include<unistd.h>
#include<time.h>
#define LED_RED 7
#define LED_GREEN 21
#define LED_BLUE 22

int main(void)
{
	int i;
	if(wiringPiSetup () == -1) return 1;
	pinMode(LED_RED,OUTPUT);
	pinMode(LED_GREEN,OUTPUT);
	pinMode(LED_BLUE,OUTPUT);
	digitalWrite(LED_RED,0);
	digitalWrite(LED_GREEN,0);
	digitalWrite(LED_BLUE,0);
	printf("3 Color LED Control Start !! \n");
	for(i=0;i<20;i++)
	{
		printf("Red LED on !! \n");
		digitalWrite(LED_RED,1);
		usleep(50000);
		printf("Red LED Off !!\nGreen LED on !! \n");
		digitalWrite(LED_RED,0);
		digitalWrite(LED_GREEN,1);
		usleep(50000);
		printf("Green LED Off !!\nBlue LED on !! \n");
		digitalWrite(LED_GREEN,0);
		digitalWrite(LED_BLUE,1);
		usleep(50000);
		printf("Blue LED Off !!\n");
		digitalWrite(LED_BLUE,0);
	}
	return 0;
}
