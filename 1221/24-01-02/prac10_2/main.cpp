#include <iostream>
using namespace std;

template <class T>
T biggest(T data[], int x) {
	if (x <= 0) return 0;
	T max = data[0];
	for (int i = 0; i < x; i++)
		if (max < data[i]) max = data[i];
	return max;
}

int main()
{
	int x[] = { 1, 10,100,5,4 };
	double y[] = { 1.1,1.7,2.1,5.1 };
	cout << "�迭�� ���� ū ����" << biggest(x, 5) << "�Դϴ�." << endl;
	cout << "�迭�� ���� ū ����" << biggest(y, 4) << "�Դϴ�." << endl;
}