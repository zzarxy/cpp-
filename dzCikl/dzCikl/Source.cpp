#include<iostream>
#include<cmath>

using namespace std;

//1. ����������� ���������, ������� ������� �� ����� ����� �� ��������.����� ��������, ����� ������������ ������, � ����� ����� ����� - ������������, ��� �������������� - ��������� ������������.

int main()
{
	setlocale(0, "");
	int chislo, plos;
	int a = 0;
	char simvol;

	cout << "������� ������ ";
	cin >> simvol;
	cout << "����� ";
	cin >> chislo;
	cout << "������� ��������� 1 ��� 2 ";
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