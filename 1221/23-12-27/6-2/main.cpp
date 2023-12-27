#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	//Person() { id = 1; name = "Grace"; weight = 20.5; }
	//Person(int id, string name) { this->id = id; this->name = name; weight = 20.5; }
	//Person(int id, string name, double weight) { this->id = id; this->name = name; this->weight = weight; }
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
	Person(int id = 1, string name = "Grace", double weight = 20.5) { this->id = id; this->name = name; this->weight = weight; }
private:
	int id;
	double weight;
	string name;
};

int main()
{
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();		//20.5 Grace
	ashley.show();		//20.5 Ashley
	helen.show();		//32.5 Helen
}