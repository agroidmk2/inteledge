#pragma once
#include <cmath>
class Exp
{
private:
	int a, b;

public:
	Exp();
	Exp(int a, int b);
	Exp(int n);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};

Exp::Exp() : a(1), b(1)
{

}

Exp::Exp(int a, int b) : a(a), b(b)
{

}
Exp::Exp(int n) : a(n), b(1)
{

}
int Exp::getValue()
{
	return pow(a, b);
}
int Exp::getBase()
{
	return a;
}
int Exp::getExp()
{
	return b;
}
bool Exp::equals(Exp b)
{
	return getValue() == b.getValue();
}