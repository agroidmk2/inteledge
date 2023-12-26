#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	string text;
	srand((unsigned)time(0));		//시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)" << endl;
	while(true)
	{
		getline(cin, text, '\n'); // getline(입력,문자를 저장할 변수, 구분 문자)
		if (text == "exit") break;
		if (text == "") continue;
		int size = text.length(); //length() - 문자열 길이 반환
		int index = rand() % size;
		int c = rand() % 26; 
		char changeChar = 'a' + c;
		if (text[index] == 'a' + c) changeChar = 'A' + c;
		text[index] = changeChar;
		cout << text << endl;
	}
	
}