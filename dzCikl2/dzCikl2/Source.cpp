#include<iostream>
#include<cmath>

using namespace std;

//2. �������� ���������, ������� ������� ����� ���� ����� �������� ����� � ���������, ��������� ������������.

int main()
{
	setlocale(0, "");

	int rangefinish, rangestart, y = 0, z = 0;
	

	cout << "������� ������� ����������\n";
	cout << "�� ";
	cin >> rangestart;
	cout << "�� ";
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