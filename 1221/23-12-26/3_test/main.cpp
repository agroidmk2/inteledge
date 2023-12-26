#include <iostream>
using namespace std;

#include "1_5.h"

int main()
{
	Rect r(2, 3);
	Rect* p;
	p = &r;
	cout << "°´Ã¼ÀÇ ³ôÀÌ´Â " << p->getHeight() << "\n";
	cout << "°´Ã¼ÀÇ ÆøÀº " << p->getWidth() << "\n";
}