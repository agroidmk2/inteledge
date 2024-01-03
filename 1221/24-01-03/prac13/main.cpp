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
		cout << "�������� �մϴ�. �� ���� ���� ������ �Է��ϼ���>>";
		cin >> x >> y;
		if (x < 0 || y < 0)
			throw InvalidInputException(33, "main()", "���� �Է� ���� �߻�");
		if (y == 0)
			throw DivideByZeroException(35, "main()", "0���� ������ ���� �߻�");
		cout << (double)x / (double)y;
	}
	catch (DivideByZeroException& e) { e.print(); }
	catch (InvalidInputException& e) { e.print(); }
}