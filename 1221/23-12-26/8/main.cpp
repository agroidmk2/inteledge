#include <iostream>
#include "1.h"
using namespace std;

class Color
{
	string c;
public:
	Color() { c = "white"; cout << "�⺻������" << endl; }
	Color(string c) { this->c = c; cout << "�Ű�����������" << endl; }
	~Color() { cout << "�Ҹ���" << endl; }
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