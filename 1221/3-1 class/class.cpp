#include <iostream>
using namespace std;

class Circle					// 클레스 선언부
{
public:
	int radius;
	double getArea();
};
double Circle::getArea()						//circle 구현부
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "도넛의 면적 = " << area << "\n";
	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "피자의 면적 = " << area << "\n";
}