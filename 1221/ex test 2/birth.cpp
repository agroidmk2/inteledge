#include <iostream>
using namespace std;

#include "birth.h"

Date::Date(int y, int m, int d) : y(y), m(m), d(d)
{
}
Date::Date(string i) : y(0), m(0), d(0)
{
	string Y, M, D;
	int count = 0;
	for (int j = 0; i[j] ; j++ )
	{
		if (i[j] == '/') 
		{
			count++; 
			continue;
		}
		if (count == 0) Y += i[j];
		else if (count == 1) M += i[j];
		else d += i[j]
	}
}
int Date::getYear()
{
	return y;
}
int Date::getMonth()
{
	return m;
}
int Date::getDay()
{
	return d;
}