#include <iostream>

int main()
{
	int i = 0;
	int sum = 0;
	
	for (i = 1; i < 11; i++)
	{
		sum = sum + i;
	}
	std::cout << "1에서 10까지 더한 결과는" << sum << "입니다.";
	return 0;
}