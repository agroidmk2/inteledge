#include <iostream>
using namespace std;

#include "1_5.h"

int main()
{
	Rect r(2, 3);
	Rect* p;
	p = &r;
	cout << "��ü�� ���̴� " << p->getHeight() << "\n";
	cout << "��ü�� ���� " << p->getWidth() << "\n";
}