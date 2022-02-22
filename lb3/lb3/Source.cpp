#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Matrix
{

private:

	int size;
	int** arr;

public:

	void set_size(int size) // Сеттер  для size
	{
		this->size = size;
	}

	int get_size() //Геттер для size
	{
		return size;
	}

	void create_arr(int size) //Создание массива 
	{
		arr = new int* [size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = new int[size];
		}
	}

	void filling_arr_auto() //Заполнение масива рандомными числами 
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				arr[j][i] = rand() % 10;
			}
		}
	}

	void filling_arr() //Заполнение масива с клавиатуры
	{
		int a;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << "Ручной ввод :";
				cin >> a;
				arr[j][i] = a;
			}
		}
	}


	void show_arr() //Вывод масива на экран 
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << "\t" << arr[j][i];
			}
			cout << "\n\n";
		}
	}

	int search_max() //Поиск максимального числа в матрице 
	{
		int max = arr[0][0];
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (arr[j][i] > max)
				{
					max = arr[j][i];
				}
			}
		}
		return max;
	}

	int search_min() //Поиск минимального числа в матрице 
	{
		int min = search_max();
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (arr[j][i] < min)
				{
					min = arr[j][i];
				}
			}
		}
		return min;
	}

	int search_sum()
	{
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				sum += arr[j][i];
			}
		}
		return sum;
	}

	Matrix(const Matrix& other)
	{

		this->size = other.size;
		this->arr = new int* [other.size];
		for (int i = 0; i < other.size; i++)
		{
			this->arr[i] = new int[other.size];                 // конструктор копирования
		};
		for (int i = 0; i < other.size; i++)
		{
			for (int j = 0; j < other.size; j++)
			{
				this->arr[i][j] = other.arr[i][j];
			}
		}
	}

	Matrix() { size = 1; }      //конструктор без параметров
	Matrix(int size) { this->size = size; }   //конструктор с параметрами

	void operator()(int a) // Перегрузка оператора 
	{
		size = a;
	}

	void start()         //метод для запуска 
	{
		

		int a;
		cout << "Введите размерность матрицы: ";
		cin >> size;
		cout << "Способ ввода: 1-авто, 2-ручной: ";
		cin >> a;

		
		create_arr(size);
		switch (a)
		{
			case 1:
			{
				filling_arr_auto();
				break;
			}
			case 2:
			{
				filling_arr();
				break;
			}
			default:
			{
				cout << "Ошыбка\n\n";
			}
		}

		show_arr();

		cout << "min: " << search_min() << endl;
		cout << "max: " << search_max() << endl;
		cout << "sum: " << search_sum() << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	Matrix a;
	a.start();

	system("pause");
	return 0;
}