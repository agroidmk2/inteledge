#include <iostream>
using namespace std;

class Color
{
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r, green = g, blue = b; }
	void setColor(int r, int g, int b) { red = r, green = g, blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

int main()
{
	Color screenColor(255, 0, 0); //�������� screenColor ��ü ����
	Color* p;		//Color Ÿ���� ������ ���� p ����
	p = &screenColor;		//p�� screenColor�� �ּҸ� �������� �ڵ� �ۼ�
	p->show();		//p�� show()�� �̿��Ͽ� screenColor �� ���
	Color color[3];		//Color�� ������ �迭 colors ����. ���Ҵ� 3��
	p = color;		//p�� colors �迭�� ����Ű���� �ڵ� �ۼ�

	p[0].setColor(255, 0, 0);		//p�� setColor()�� �̿��Ͽ� colors[0], colors[1], colors[2]���� ����, �ʷ�, �Ķ����� �������� �ڵ� �ۼ�
	p[1].setColor(0, 255, 0);
	p[2].setColor(0, 0, 255);
	
	int i;
	for (i = 0; i < 3; i++)//p�� show()�� �̿��Ͽ� colors �迭�� ��� ��ü�� �� ���. for�� �̿�
	{
		p[i].show();
	}
}