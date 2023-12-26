#include <iostream>
using namespace std;

#include "circle.h"

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius;
	cout << "원 생성" << "\n";

}
Circle::Circle(int r)
{
	radius = r;
	cout << "반지름 " << radius;
	cout << "원 생성 " << "\n";
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}