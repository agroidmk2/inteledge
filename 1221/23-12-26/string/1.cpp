#include <iostream>
#include "1.h"
using namespace std;

int main()
{
	Rect r[5] = { Rect(), Rect(2,3),Rect(3,4),Rect(4,5),Rect(5,6) };	// ���� �迭 r ���� ��, �迭 r�� �簢�� ������ ���� ����ϴ� �ڵ带 �ۼ�����.
	
	for (int i = 0; i < 5; i++)
	{
		r[i];
		cout << i + 1 << "��° �簢���� ������ ����" << r[i].getArea() << "\n";
	}
}