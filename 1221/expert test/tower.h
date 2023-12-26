#pragma once
class Tower
{
public:
	Tower();
	Tower(int a);
	int getHeight();
private:
	int a;

};

Tower::Tower() : a(1)
{
}

Tower::Tower(int a) : a(a)
{
}
int Tower::getHeight()
{
	return a;
}