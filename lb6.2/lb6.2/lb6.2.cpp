#include <iostream>

using namespace std;

int Array(int size, int x, int y)
{
	int* arr = new int[size];

	int randnum = rand() % size;
	for (int i = 0; i < size; i++)
	{
		if (i != randnum)
		{
			arr[i] = rand() % (y - x + 1) + x;
		}
		else
		{
			arr[i] = rand() % (y - x + 1) + x;
			while (arr[i] >= x && arr[i] <= y)
			{
				arr[i] = rand();
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

	int res = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < x || arr[i] > y)
		{
			res = arr[i];
		}
	}
	cout << "Число за пределаами от x до y: " << res;
	
	return *arr;
}



void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int size, x, y;
	cout << "Введите размер массива: ";
	cin >> size;
	cout << "Генерировать числа от x до y" << endl << "x = ";
	cin >> x;
	cout << endl << "y = ";
	cin >> y;
	Array(size, x, y);
	
}