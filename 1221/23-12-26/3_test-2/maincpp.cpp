#include <iostream>
using namespace std;

#include "1.h"

int main()
{
	Rect *q;
	int w, h;
	cin >> w >> h;		// ����ڷκ��� ������� ���� ���̸� w, h�� ���� �Է¹޴´�.
	q = new Rect(w, h);					//������ ���� q�� w*h ũ���� �簢���� ǥ���ϴ� Rect ��ü�� �������� �����Ѵ�.
	cout << "�簢���� ������ " << q->getArea() << "\n";		//������ q�� �̿��Ͽ� �簢���� ������ ����Ѵ�
	delete q;		//������ ��ü�� ��ȯ�Ѵ�.
}