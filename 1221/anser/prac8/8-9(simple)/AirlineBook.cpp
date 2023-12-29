#include <iostream>
using namespace std;
#include <string>

#include "AirlineBook.h"
#include "Schedule.h"
#include "Console.h"


// ������
AirlineBook::AirlineBook(string name, int nSchedules, string scheduleTime[]){
	this->name = name; // ���� �ý��� �̸�
	this->nSchedules = nSchedules; // ������ ����
	sche = new Schedule[nSchedules]; // 3 ���� ������ ��ü ����

	// �� �����쿡 �ش� �ð� ����
	for(int i=0; i<nSchedules; i++)
		sche[i].setTime(scheduleTime[i]);
}

// �Ҹ���
AirlineBook::~AirlineBook(){
	if(sche) 
		delete [] sche;
}

// ���� �ý����� �����ϴ� �Լ�
void AirlineBook::run(){
	cout << "***** " << name << "�� ���Ű��� ȯ���մϴ�" << " *****" << endl;
	cout << endl;

	while(true){
		int menu = Console::getMainMenu(); // ���� �޴� �Է�
		switch(menu){
			case 1:
				book(); // ����
				break; 
			case 2:
				cancel(); // ����
				break; 
			case 3:
				view(); // ���� ����
				break; 
			case 4:
				cout << "���� �ý����� �����մϴ�.\n"<<endl;
				return;
			default:
				cout << "�߸��Է��Ͽ����ϴ�.\n"<<endl;
		}
		cout << endl;
	}
}

// �������� �����Ѵ�.
void AirlineBook::book(){
	int s;
	string bookName;
	int seatNo;

	s = Console::getScheduleMenu(); // ����ڰ� ������ �������� �Է� �޴´�.
	view(s); // ������ s�� ���� ��Ȳ�� ����Ѵ�.
	seatNo = Console::getSeatNo(); // �¼� ��ȣ�� �Է¹޴´�.
	bookName = Console::getName(); // �������� �̸��� �Է¹޴´�.
	sche[s-1].book(seatNo, bookName); // �ش� ������ ����
}

// �������� ����Ѵ�.
void AirlineBook::cancel(){
	int s;
	string bookName;
	int seatNo;

	s = Console::getScheduleMenu(); // ����ڰ� ������ �������� �Է� �޴´�.
	view(s); // ������ s�� ���� ��Ȳ�� ����Ѵ�.
	seatNo = Console::getSeatNo(); // �¼� ��ȣ�� �Է¹޴´�.
	bookName = Console::getName(); // �������� �̸��� �Է¹޴´�.
	sche[s-1].cancel(seatNo, bookName); // �ش� ������ ���
}

// ���� ��� �������� ���� ��Ȳ�� ����Ѵ�.
void AirlineBook::view(){
	for(int i=0;i<3;i++){
		sche[i].view();
	}
}

// ������ s�� �¼� ���� ��Ȳ�� ����Ѵ�. s�� 1,2,3
void AirlineBook::view(int s){
	sche[s-1].view(); //�迭�� �ε����� 0���� ����
}