#include <iostream>
using namespace std;

template <class T>
bool search(T a, T b[], int s)
{
	for (int i = 0; i < s; i++)
	{
		if (b[i] == a) return true;
	}
	return false;
}

int main()
{
	int x[] = { 1,10,100,5,4 };
	double y[] = { 1.1,10.1,100.1,5.1,4.1 };
	if (search(100, x, 5)) cout << "100�� �迭 x�� ���ԵǾ� �ִ�." << endl;
	else cout << "100�� �迭 x�� ���ԵǾ� ���� �ʴ�." << endl;
	if (search(100.2, y, 5)) cout << "100�� �迭 y�� ���ԵǾ� �ִ�." << endl;
	else cout << "100�� �迭 y�� ���ԵǾ� ���� �ʴ�." << endl;
}