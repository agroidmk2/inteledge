#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	string text;
	srand((unsigned)time(0));		//������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.)" << endl;
	while(true)
	{
		getline(cin, text, '\n'); // getline(�Է�,���ڸ� ������ ����, ���� ����)
		if (text == "exit") break;
		if (text == "") continue;
		int size = text.length(); //length() - ���ڿ� ���� ��ȯ
		int index = rand() % size;
		int c = rand() % 26; 
		char changeChar = 'a' + c;
		if (text[index] == 'a' + c) changeChar = 'A' + c;
		text[index] = changeChar;
		cout << text << endl;
	}
	
}