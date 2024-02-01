#include<stdio.h>

int main(void)
{
    while(1)
    {
        char userInput = gerchar();
        printf("%c", userInput+1);
    }
}