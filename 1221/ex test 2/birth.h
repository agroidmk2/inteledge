#pragma once

#include <string>
using namespace std;

class Date
{
public:
	Date(int y, int m, int d);
	Date(string i);
	int getYear();
	int getMonth();
	int getDay();
	int show();

private:
	int y, m, d;
};