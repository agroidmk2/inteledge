#include <iostream>
using namespace std;

class Circle					// Ŭ���� �����
{
public:
	int radius;
	double getArea();
};
double Circle::getArea()						//circle ������
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "������ ���� = " << area << "\n";
	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "������ ���� = " << area << "\n";
}