#include<iostream>
#include<cmath>

using namespace std;

//�������� ���������, ������� ������� �� ����� ������������� ��������* .������ � ������ ������� �������������.

int main()
{
	setlocale(0, "");
	int x, y;

	cout << "������� ������ ";
	cin >> x;

	cout << "������� ������ ";
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