#include<stdio.h>
#include<wiringPi.h>
#include<unistd.h>
#define LED_RED 7
#define LED_GREEN 21
#define LED_BLUE 22
int main(void)
{
	if(wiringPiSetup () == -1)
		return 1;
	pinMode(LED_RED,OUTPUT);
	pinMode(LED_GREEN,OUTPUT);
	pinMode(LED_BLUE,OUTPUT);
	digitalWrite(LED_RED,0);
	digitalWrite(LED_GREEN,0);
	digitalWrite(LED_BLUE,0);
	printf("3 Color LED Control Start !! \n");
	for(int i=0;i<20;i++)
	{
		printf("Red LED ON !! \n");
		digitalWrite(LED_RED,1);
		usleep(50000);
		printf("Red LED off!! \nGreen LED On !!\n");
		digitalWrite(LED_RED,0);
		digitalWrite(LED_GREEN,1);
		usleep(50000);
		printf("Green LED off !!\nBlue LED On !!\n");
		digitalWrite(LED_GREEN,0);
		digitalWrite(LED_BLUE,1);
		usleep(50000);
		printf("Blue LED Off !!\n");
		digitalWrite(LED_BLUE,0);
	}
	return 0;
}
