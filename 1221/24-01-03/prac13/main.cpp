#include <iostream>
#include <string>
using namespace std;

class MyException
{
public:
	MyException(int n, string f, string m) { lineNO = n; func = f; msg = m; }
	void print() { cout << func << ":" << lineNO << "," << msg << endl; }

private:
	int lineNO;
	string func, msg;
};
class DivideByZeroException : public MyException
{
public:
	DivideByZeroException(int lineNO, string func, string msg) :MyException(lineNO, func, msg) {}
};
class InvalidInputException:public MyException
{
public:
	InvalidInputException(int lineNo, string func, string msg) :MyException(lineNo, func, msg) {}
};

int main()
{
	int x, y;
	try
	{
		cout << "나눗셈을 합니다. 두 개의 양의 정수를 입력하세요>>";
		cin >> x >> y;
		if (x < 0 || y < 0)
			throw InvalidInputException(33, "main()", "음수 입력 예외 발생");
		if (y == 0)
			throw DivideByZeroException(35, "main()", "0으로 나누는 예외 발생");
		cout << (double)x / (double)y;
	}
	catch (DivideByZeroException& e) { e.print(); }
	catch (InvalidInputException& e) { e.print(); }
}