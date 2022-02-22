#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include "windows.h"

using namespace std;


class CArray
{
	int* array;
	int size;

public:

	void creatArray(int n);
	void inputArray();
	void showArray();
	void clearArray();
	void zd1();
	void zd2();
	void zd3();


};

int par(int n);

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int zd;
	int size;
	
	cout << "Задание : ";
	cin >> zd;
	CArray obj1;

	switch (zd)
	{
		case 1:
		{
			cout << "Введите размер массива : ";
			cin >> size;
			obj1.creatArray(size);
			obj1.inputArray();
			obj1.showArray();
			cout << "\n----Transfotmation----\n\n";
			obj1.zd1();
			obj1.showArray();
			system("pause");
			system("cls");
			main();
		}
		
		case 2:
		{
			obj1.zd2();
			system("pause");
			system("cls");
			main();
		}

		case 3:
		{
			cout << "Введите размер массива : ";
			cin >> size;
			obj1.creatArray(size);
			obj1.inputArray();
			obj1.showArray();
			cout << "----Парные числа----";
			obj1.zd3();
			system("pause");
			system("cls");
			main();
		}
		
		default:
		{
			cout << "Заданте не найдено" << endl;
			system("pause");
			system("cls");
			main();
		}
	
	}
	
	
	
	
	obj1.clearArray();
}

int par(int n)
{
	if (n % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void CArray::creatArray(int n)
{
	size = n;
	array = (int*)malloc(size * sizeof(int));
}

void CArray::inputArray()
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10000 - 1;
	}
}

void CArray::showArray()
{
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " " << endl;
	}
	cout << "\n\n";
}

void CArray::zd1()
{
	int low = array[0];
	int	max = array[0];

	for (int i = 1; i < size; i++)
	{

		if (array[i] > max)
		{
			max = array[i];
		}
		if (array[i] < low)
		{
			low = array[i];
		}
	}

	int* res = new int[size];

	int n = 0;
	for (int i = 0; i < size - 1; i++)
	{
		while (array[i + n] == low || array[i + n] == max) n++;
		res[i + 1] = array[i + n];

	}

	res[size - 1] = max;
	res[0] = low;

	for (int i = 0; i < size; i++)
	{
		array[i] = res[i];

	}


}

void CArray::zd2()
{
	int size;
	cout << "Введите размер матрицы: ";
	cin >> size;
	int res[2] = { 0 };

	////////////////////////////// выделение памяти
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++)
	{
		matrix[i] = new int[size];
	}

	////////////////////////////// инициализация
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = rand() % 20 - 10;
		}
	}

	////////////////////////////// вывод в констоль 
	cout << "\n\n";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "\t" << matrix[i][j];
		}
		cout << endl;
	}
	cout << "\n\n";

	///////////////////////////// верхний
	int *top = new int[((size * size) - 4) / 2];
	int n = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 1 + i; j < size; j++)
		{
			top[n] = matrix[i][j]; n++;
		}

	}


	for (int i = 0; i < n; i++)
	{
		if (top[i] < 0)
		{
			res[1] += top[i];
		}
	}
	//cout << sum1 << endl;
	///////////////////////////// нижний 
	int* low = new int[((size * size) - 4) / 2];
	n = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			low[n] = matrix[i][j]; n++;
		}

	}

	
	for (int i = 0; i < n; i++)
	{
		if (low[i] < 0)
		{
			res[0] += low[i];
		}
	}

	cout << "top " << res[1] << endl;
	cout << "low " << res[0] << endl;
	cout << "\n\n";
	
}

void CArray::zd3()
{
	int sum = 0;
	double sr = 0;
	int n = 0;

	for (int i = 0; i < size; i++)
	{
		if (par(array[i]) == true)
		{
			n++;
		}
		else
		{
			continue;
		}
	}

	int* res = new int[n];
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (par(array[i]) == true)
		{
			res[j] = array[i];
			j++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << res[i] << endl;
	}

	cout << "\n\n";

	for (int i = 0; i < n; i++)
	{
		sum += res[i];
	}

	sr = sum / n;

	cout << "Сума парных чисел : " << sum << endl;
	cout << "Парных чисел : " << n << endl;
	cout << "Среднее арифметическое : " << sr << "\n\n\n";

}

void CArray::clearArray()
{
	delete [] array;
}


