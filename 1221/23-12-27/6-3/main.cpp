#include <iostream>
#include <math.h>
using namespace std;

int big(int a, int b, int c = 100)
{
	int m = (a > b) ? a : b;
	return (m > c) ? c : m;
}

//int big(int a, int b) // ������
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


//int big(int x, int y)		//���� �ۼ��� ���� 1
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
	int x = big(3, 5);		//3�� 5 �� ū �� 5�� �ִ밪 100���� �����Ƿ�, 5 ����
	int y = big(300, 60);	//300�� 60�� ū �� 300�� �ʴ밪 100���� ũ�Ƿ�, 100 ����
	int z = big(30, 60, 50);	//30�� 60�� ū �� 60�� �֤��밪 50���� ũ�Ƿ�, 50 ����
	cout << x << ' ' << y << ' ' << z << endl;
}