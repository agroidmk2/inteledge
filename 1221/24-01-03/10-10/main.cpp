#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class Nation
{
public:
	Nation(string nation, string capital)
	{
		this->nation = nation;
		this->capital = capital;
	}
	string getCapital() { return capital; }
	string getNation() { return nation; }
	void show()
	{
		cout << '(' << nation << ',' << capital << ')';
	}
private:
	string nation; //나라 이름
	string capital;	//수도
};

class NationGame
{
public:
	NationGame();
	void run();

private:
	vector<Nation> v;
	void input();
	void list();
	void quiz();
	bool exist(string nation);
};

NationGame::NationGame()
{
	Nation n[] = { Nation("미국","와싱턴"), Nation("영국","런던"), Nation("프랑스","파리"),
		Nation("중국","베이징"), Nation("일본","도쿄"), Nation("러시아","모스크바"),
		Nation("브라질","브라질리아"),Nation("독일","베를린"),Nation("멕시코","멕시코시티") };

	for (int i = 0; i < 9; i++)
		v.push_back(n[i]);
	srand((unsigned)time(0));
}

void NationGame::run()
{
	cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;
	while (true)
	{
		int cmd;
		cout << "정보 입력: 1, 퀴즈: 2, 종료: 3 >>";
		cin >> cmd;
		switch(cmd)
		{
			case 1: input(); break;
			case 2: quiz(); break;
			case 3: return;
		}
	}
}
void NationGame::quiz()
{
	while (true)
	{
		int index = rand() % v.size();
		cout << v[index].getNation() << "의 수도는?";
		string capital;
		cin >> capital;
		if (capital == "exit") return; 
		if (v[index].getCapital() == capital)
			cout << "Correct !!" << endl;
		else
			cout << "NO !!" << endl;
	}
}

void NationGame::input()
{
	string nation, capital;
	cout << "현재" << v.size() << "개의 나라가 입력되어 있습니다." << endl;
	cout << "나라와 수도를 입력하세요(no no 이면 입력끝" << endl;
	while (true)
	{
		cout << v.size() + 1 << ">>";
		cin >> nation >> capital;
		if (nation == "no" && capital == "no")
			break;
		if (exist(nation))
		{
			cout << "already exists !!" << endl;
			continue;
		}
		Nation n(nation, capital);
		v.push_back(n);
	}
	return;
}

bool NationGame::exist(string nation)
{
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].getNation() == nation)
			return true;
	}
	return false;
}

void NationGame::list()
{
	for (int i = 0; i < v.size(); i++)
	{
		v[i].show();
		cout << endl;
	}
}
int main()
{
	NationGame game;
	game.run();
}