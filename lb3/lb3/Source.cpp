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

	void set_size(int size) // ������  ��� size
	{
		this->size = size;
	}

	int get_size() //������ ��� size
	{
		return size;
	}

	void create_arr(int size) //�������� ������� 
	{
		arr = new int* [size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = new int[size];
		}
	}

	void filling_arr_auto() //���������� ������ ���������� ������� 
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				arr[j][i] = rand() % 10;
			}
		}
	}

	void filling_arr() //���������� ������ � ����������
	{
		int a;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << "������ ���� :";
				cin >> a;
				arr[j][i] = a;
			}
		}
	}


	void show_arr() //����� ������ �� ����� 
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

	int search_max() //����� ������������� ����� � ������� 
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

	int search_min() //����� ������������ ����� � ������� 
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
			this->arr[i] = new int[other.size];                 // ����������� �����������
		};
		for (int i = 0; i < other.size; i++)
		{
			for (int j = 0; j < other.size; j++)
			{
				this->arr[i][j] = other.arr[i][j];
			}
		}
	}

	Matrix() { size = 1; }      //����������� ��� ����������
	Matrix(int size) { this->size = size; }   //����������� � �����������

	void operator()(int a) // ���������� ��������� 
	{
		size = a;
	}

	void start()         //����� ��� ������� 
	{
		

		int a;
		cout << "������� ����������� �������: ";
		cin >> size;
		cout << "������ �����: 1-����, 2-������: ";
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
				cout << "������\n\n";
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