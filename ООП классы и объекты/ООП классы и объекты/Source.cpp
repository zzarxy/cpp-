#include <iostream>
#include <string>
using namespace std;



class Human 
{
public:

	
	int age = 0;
	string name = "nothing";

	void Print()
	{
		cout << "Имя " << name << "\nВозраст " << age << endl;
	}
};

class Point
{
public:

	int x;
	int y;
	int z;
};

int main()
{
	setlocale(0, "ru");

	Human firstHuman;
	firstHuman.age = 30;
	firstHuman.name = "ilya";

	firstHuman.Print();

	Human secondHuman;
	secondHuman.Print();



	return 0;
}