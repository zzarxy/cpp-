#include<iostream>
#include<cmath>

using namespace std;

//2. Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе.

int main()
{
	setlocale(0, "");

	int rangefinish, rangestart, y = 0, z = 0;
	

	cout << "Введите область вычислений\n";
	cout << "От ";
	cin >> rangestart;
	cout << "До ";
	cin >> rangefinish;

	
	do 
	{
		if (rangestart % 2 != 0)
		{
			z = z + rangestart;
		}
		rangestart++;

	} while (rangestart < rangefinish);

	cout << z;

	return 0;
}