#include <iostream>
#include <math.h>
using namespace std;

int big(int a, int b, int c = 100)
{
	int m = (a > b) ? a : b;
	return (m > c) ? c : m;
}

//int big(int a, int b) // 정답지
//{
//	int m = (a > b) ? a : b;
//	return (m > 100) ? 100 : m;
//}
//
//int big(int a, int b, int c)
//{
//	int m = (a > b) ? a : b;
//	return (m > c) ? c : m;
//}


//int big(int x, int y)		//직접 작성한 내용 1
//{
//	if (x > y)
//		if (x < 100) return x;
//		else return 100;
//	else if (y < 100) return y;
//}
//
//int big(int x, int y, int size)
//{
//	if (x > y)
//		if (x > size) return size;
//		else return x;
//	else if (y > size) return size;
//}

int main()
{
	int x = big(3, 5);		//3과 5 중 큰 값 5는 최대값 100보다 작으므로, 5 리터
	int y = big(300, 60);	//300과 60중 큰 값 300이 초대값 100보다 크므로, 100 리턴
	int z = big(30, 60, 50);	//30과 60중 큰 값 60이 최ㅐ대값 50보다 크므로, 50 리턴
	cout << x << ' ' << y << ' ' << z << endl;
}