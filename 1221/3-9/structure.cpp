#include <iostream>
using namespace std;

#include "circle.h"

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius;
	cout << "�� ����" << "\n";

}
Circle::Circle(int r)
{
	radius = r;
	cout << "������ " << radius;
	cout << "�� ���� " << "\n";
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}