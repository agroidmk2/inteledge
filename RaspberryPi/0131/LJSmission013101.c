#include<stdio.h>
#include<wiringPi.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#define LED_RED 7
#define LED_GREEN 21
#define LED_BLUE 22
int main(void)
{
	printf("빛의 3원색 게임\n");
	printf("랜덤하게 확인되는 색을 합쳤을 때 확인되는 색을 선택하세요\n");

	srand(time(NULL));	//랜덤시드 생성

	if(wiringPiSetup() == -1) return 1;
	pinMode(LED_RED,OUTPUT);	//핀모드 설정 및 초기화
	pinMode(LED_GREEN,OUTPUT);
	pinMode(LED_BLUE,OUTPUT);
	digitalWrite(LED_RED,0);
	digitalWrite(LED_GREEN,0);
	digitalWrite(LED_BLUE,0);

	int ranColor[2] = {0, 0};		//배열 생성
	int number;

	ranColor[0] = rand() % 3+1;
	ranColor[1] = rand() % 3+1;
	while(ranColor[0] == ranColor[1])
	{
		 ranColor[1] = rand() % 3 + 1;
	}


	usleep(1000000);

	if(ranColor[1] != 7)
	{
		switch(ranColor[0])
		{
			case 1:
				digitalWrite(LED_RED,1);
				usleep(500000);
				digitalWrite(LED_RED,0);
				break;
			case 2:
				digitalWrite(LED_GREEN,1);
				usleep(500000);
				digitalWrite(LED_GREEN,0);
				break;
			case 3:
				digitalWrite(LED_BLUE,1);
				usleep(500000);
				digitalWrite(LED_BLUE,0);
				break;
			default:
				printf("출력 오류");
				break;
		}
		printf("%d \n", ranColor[0]);

		switch(ranColor[1])
		{
			case 1:
				digitalWrite(LED_RED,1);
				usleep(500000);
				digitalWrite(LED_RED,0);
				break;
			case 2:
				digitalWrite(LED_GREEN,1);
				usleep(500000);
				digitalWrite(LED_GREEN,0);
				break;
			case 3:
				digitalWrite(LED_BLUE,1);
				usleep(500000);
				digitalWrite(LED_BLUE,0);
				break;
			default:
				printf("출력 오류");
				break;
		}
		printf("%d \n", ranColor[1]);
	}

	printf("확인된 두 색을 합쳤을 떄 나올 색으로 맞는 것을 고르시오\n");
	printf("1. yallow \t 2. magenta \t 3. cyan \t 4. white \n");

	printf("정답인 내용의 숫자를 입력하세요");
	scanf("%d", &number);

	if(number + 2 == ranColor[0] + ranColor[1])	//정답일경우
	{
		printf("정답입니다.\n");
		digitalWrite(LED_RED,1);
		usleep(500000);
		digitalWrite(LED_GREEN,1);
		usleep(500000);
		digitalWrite(LED_BLUE,1);
		usleep(500000);
		digitalWrite(LED_RED,0);
		digitalWrite(LED_GREEN,0);
		digitalWrite(LED_BLUE,0);
	}
	else 		//오답일경우
	{
		printf("오답입니다.\n");
		digitalWrite(LED_RED,1);
		usleep(500000);
		digitalWrite(LED_RED,0);
		usleep(500000);
		digitalWrite(LED_RED,1);
		usleep(500000);
		digitalWrite(LED_RED,0);
		usleep(500000);
		digitalWrite(LED_RED,1);
		usleep(500000);
		digitalWrite(LED_RED,0);
	}
	
	return 0;
}
