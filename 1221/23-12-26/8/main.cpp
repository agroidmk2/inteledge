#include <iostream>
#include "1.h"
using namespace std;

class Color
{
	string c;
public:
	Color() { c = "white"; cout << "기본생성자" << endl; }
	Color(string c) { this->c = c; cout << "매개변수생성자" << endl; }
	~Color() { cout << "소멸자" << endl; }
};

class palette
{
	Color* p;
public:
	palette() { p = new Color[3]; }
	~palette() { delete[] p; }
};


int main()
{
	palette* p = new palette();
	delete p;
}