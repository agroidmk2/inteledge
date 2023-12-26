#include <iostream>
using namespace std;

int main()
{
	Date birth(2014, 3, 20); //14년 3월 20일
	Date independenceDay("1945/8/15"); //1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << ',' << birth.getDay() << endl;
}