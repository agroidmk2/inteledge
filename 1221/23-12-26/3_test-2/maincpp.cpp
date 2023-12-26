#include <iostream>
using namespace std;

#include "1.h"

int main()
{
	Rect *q;
	int w, h;
	cin >> w >> h;		// 사용자로부터 사격형의 폭과 높이를 w, h에 각각 입력받는다.
	q = new Rect(w, h);					//포인터 변수 q에 w*h 크기의 사각형을 표현하는 Rect 객체를 동적으로 생성한다.
	cout << "사각형의 면적은 " << q->getArea() << "\n";		//포인터 q를 이용하여 사각형의 면적을 출력한다
	delete q;		//생성한 객체를 반환한다.
}