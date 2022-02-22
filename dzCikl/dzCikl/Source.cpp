#include<iostream>
#include<cmath>

using namespace std;

//1. Разработать программу, которая выводит на экран линию из символов.Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь.

int main()
{
	setlocale(0, "");
	int chislo, plos;
	int a = 0;
	char simvol;

	cout << "Введите символ ";
	cin >> simvol;
	cout << "Число ";
	cin >> chislo;
	cout << "Введите плоскость 1 или 2 ";
	cin >> plos;
	system("CLS");

	if (plos == 1)
	{
		cout << "\n\n\n\n\n\n\n\n\n\n";
		while (a < chislo)
		{
			cout << simvol;
			++a;
		}
	}
		

	else if (plos == 2)
	{
		while (a < chislo)
		{
			cout << "\t\t\t\t\t" << simvol << endl;
			++a;
		}
	}

	else
		cout << "Error";
		
	cout << "\n\n\n\n\n\n\n\n\n\n";
	



	return 0;
}