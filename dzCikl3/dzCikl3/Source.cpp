#include<iostream>
#include<cmath>

using namespace std;

//Написать программу, которая выводит на экран прямоугольник символом* .Высота и ширина задаётся пользователем.

int main()
{
	setlocale(0, "");
	int x, y;

	cout << "Введите ширину ";
	cin >> x;

	cout << "Введите высоту ";
	cin >> y;

	for (int i = 3; i <= y; i++)
	{
		if (i == 3)
		{
			for (int i = 1; i <= x; i++)
			{
				cout << "*";
			}
			cout << endl;
		}

		cout << "*";
		for (int z = 3; z <= x; z++)
		{
			cout << " ";
		}
		cout << "*" << endl;

		if (i == y)
		{
			for (int i = 1; i <= x; i++)
			{
				cout << "*";
			}
			cout << endl;
		}
	
	}


	return 0;
}