#include <iostream>
#include "1.h"
using namespace std;

int main()
{
	Rect r[5] = { Rect(), Rect(2,3),Rect(3,4),Rect(4,5),Rect(5,6) };	// 다음 배열 r 생성 후, 배열 r의 사각형 면적의 합을 출력하는 코드를 작성핟라.
	
	for (int i = 0; i < 5; i++)
	{
		r[i];
		cout << i + 1 << "번째 사각형의 면적의 합은" << r[i].getArea() << "\n";
	}
}