#include <iostream>
using namespace std;

// �迭 s�� index ���� ������ ���� ������ �����ϴ� �Լ�
char& find(char s[], int index)
{
	return s[index];		//���� ����
}

int main()
{
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 's';		//name[0] = 's'�� ����
	cout << name << endl;

	char& ref = find(name, 2);
	ref = 't';		//name = "Site"
	cout << name << endl;
}