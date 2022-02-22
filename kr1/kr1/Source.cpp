#include<iostream>


using namespace std;

int* Fun1(int** arr, int rows, int cols);
int* Fun2(int** arr, int rows, int cols);
int* Fun3(int** arr, int rows, int cols);
int* Fun4(int** arr, int rows, int cols);
int* Fun5(int** arr, int rows, int cols);
int* Fun6(int** arr, int rows, int cols);
double* Fun7(int** arr, int rows, int cols);
int* Fun8(int** arr, int rows, int cols);
double* Fun9(int** arr, int rows, int cols);
int* Fun10(int** arr, int rows, int cols);
int* Fun11(int** arr, int rows, int cols);
int* Fun12(int** arr, int rows, int cols);
double* Fun13(int** arr, int rows, int cols);
int* Fun14(int** arr, int rows, int cols);
int* Fun15(int** arr, int rows, int cols, int* Y);
int* Fun17(int** arr, int rows, int cols);
double* Fun34(int** arr, int rows, int cols);
int* Fun35(int** arr, int rows, int cols);
int* Fun36(int** arr, int rows, int cols);

int main()
{

	int rows = 0;
	int cols = 0;
	cout << "Rows ";
	cin >> rows;
	cout << endl << "Cols ";
	cin >> cols;

	////////////////////////////////////
	int **arr = new int* [rows];   // Выделение памати 
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	
	////////////////////////////////////
	for (int i = 0; i < rows; i++) // Заполнение  
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	////////////////////////////////////
	for (int i = 0; i < rows; i++) // Вывод 
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl << "=====================" << endl;
	////////////////////////////////////
	
	int Y = 5;
	int zd;
	setlocale(0, "russian");
	cout << "Введите номер задания ";
	cin >> zd;

	int n;
	switch (zd)
	{
		case 1:
		{
			int* res = Fun1(arr, rows, cols);
			break;
		}
		case 2:
		{
			int* res = Fun2(arr, rows, cols);
			break;
		}
		case 3:
		{
			int* res = Fun3(arr, rows, cols);
			break;
		}
		case 4:
		{
			int* res = Fun4(arr, rows, cols);
			break;
		}
		case 5:
		{
			int* res = Fun5(arr, rows, cols);
			break;
		}
		case 6:
		{
			int* res = Fun6(arr, rows, cols);
			break;
		}
		case 7:
		{
			double* res = Fun7(arr, rows, cols);
			break;
		}
		case 8:
		{
			int* res = Fun8(arr, rows, cols);
			break;
		}
		case 9:
		{
			double* res = Fun9(arr, rows, cols);
			break;
		}
		case 10:
		{
			int* res = Fun10(arr, rows, cols);
			break;
		}
		case 11:
		{
			int* res = Fun11(arr, rows, cols);
			break;
		}
		case 12:
		{
			int* res = Fun12(arr, rows, cols);
			break;
		}
		case 13:
		{
			double* res = Fun13(arr, rows, cols);
			break;
		}
		case 14:
		{
			int* res = Fun14(arr, rows, cols);
			break;
		}
		case 15:
		{
			int* res = Fun15(arr, rows, cols, &Y);
			break;
		}
		case 17:
		{
			int* res = Fun17(arr, rows, cols);
			break;
		}
		case 34:
		{
			double* res = Fun34(arr, rows, cols);
			break;
		}

		case 35:
		{
			int* res = Fun35(arr, rows, cols);
			break;
		}
		case 36:
		{
			int* res = Fun36(arr, rows, cols);
			break;
		}
	}

	////////////////////////////////////
	for (int i = 0; i < rows; i++) // Очистка памяти
	{
		delete arr[i];
	}
	delete[] arr;
	
	return 0;
}

int* Fun1(int** arr, int rows, int cols)
{
	int sum, g = 0;
	int* res = new int[cols];

	for (int i = 0; i < rows; i++)
	{
		sum = 0;
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
		res[g] = sum;
		g++;
	}

	for (int i = 0; i < cols; i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int* Fun2(int** arr, int rows, int cols)
{
	int sum, g = 0;
	int* res = new int[cols];

	for (int i = 0; i < rows; i++)
	{
		sum = 0;
		for (int j = 0; j < cols; j++)
		{
			sum += arr[j][i];
		}
		res[g] = sum;
		g++;
	}

	for (int i = 0; i < cols; i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int* Fun3(int** arr, int rows, int cols)
{
	int sum1 = 0, sum2 = 0;
	int* res = new int[rows];
	int row;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum1 += arr[j][i];
		}
		
		if (sum1 > sum2)
		{
			sum2 = sum1;
			row = i;
		}
		sum1 = 0;
	}

	for (int i = 0; i < rows; i++)
	{
		res[i] = arr[i][row];
		cout << res[i] << endl;
	}
	return res;
}

int* Fun4(int** arr, int rows, int cols)
{

	int* res = new int[cols];
	int sumr = 0;
	int sumr2 = 0;
	int row = 0;
	for (int i = 0; i < rows; i++)
	{
		sumr = 0;
		for (int j = 0; j < cols; j++)
			sumr += arr[i][j];
		if (sumr2 < sumr)
		{
			sumr2 = sumr;
			row = i;
		}
	}

	for (int k = 0; k < cols ; k++)
	{
		res[k] = arr[row][k];
	}
	return res;
}

int* Fun5(int** arr, int rows, int cols)
{
	int* res = new int[cols];
	int sumr;
	int sumr2 = 9 * rows;
	int row = 0;
	for (int i = 0; i < rows; i++)
	{
		sumr = 0;
		for (int j = 0; j < cols; j++)
		{
			sumr += arr[j][i];
		}

		if (sumr2 > sumr)
		{
			sumr2 = sumr;
			row = i;
		}
	}

	for (int k = 0; k < cols; k++)
	{
		res[k] = arr[k][row];
		cout << res[k] << endl;
	}
	return res;
}

int* Fun6(int** arr, int rows, int cols)
{
	int* res = new int[cols];
	int sumr;
	int sumr2 = 9 * rows;
	int row = 0;
	for (int i = 0; i < rows; i++)
	{
		sumr = 0;
		for (int j = 0; j < cols; j++)
		{
			sumr += arr[i][j];
		}

		if (sumr2 > sumr)
		{
			sumr2 = sumr;
			row = i;
		}
	}

	for (int k = 0; k < cols; k++)
	{
		res[k] = arr[row][k];
		cout << res[k] << endl;
	}
	return res;
}

double* Fun7(int** arr, int rows, int cols)
{
	double* res = new double[2];
	int sum = 0;
	double m;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}

	m = sum / (double(rows * cols));
	res[0] = sum;
	res[1] = m;

	for (int i = 0; i < 2; i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int* Fun8(int** arr, int rows, int cols)
{
	if (cols != rows)
	{
		cout << "Для этого задания размер длина и ширина матрицы должна быть одинаковой";
		return 0;
	}

	int* res = new int[2];
	int sum1 = 0, sum2 = 0;


	for (int i = 0; i < cols; i++)
	{
		sum1 += arr[i][i];
	}

	for (int k = cols - 1, i = 0; i < cols; i++, k--)
	{
		sum2 += arr[k][i];
	}

	res[0] = sum1;
	res[1] = sum2;

	cout << sum1 << endl << sum2;

	return res;
}

double* Fun9(int** arr, int rows, int cols)
{
	if (cols != rows)
	{
		cout << "Для этого задания размер длина и ширина матрицы должна быть одинаковой";
		return 0;
	}

	double* res = new double[2];
	int sum1 = 0, sum2 = 0;


	for (int i = 0; i < cols; i++)
	{
		sum1 += arr[i][i];
	}

	for (int k = cols - 1, i = 0; i < cols; i++, k--)
	{
		sum2 += arr[k][i];
	}

	res[0] = (sum1 / cols);
	res[1] = (sum2 / cols);

	cout << res[0] << endl << res[1];

	return res;
}

int* Fun10(int** arr, int rows, int cols)
{
	int min = (9 * rows * cols), max = 0;
	int* res = new int[2];


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}

	res[0] = max;
	res[1] = min;

	cout << res[0] << endl << res[1];

	return res;
}

int* Fun11(int** arr, int rows, int cols)
{
	int min;
	int* res = new int[rows];

	for (int i = 0; i < rows; i++)
	{
		min = 9;
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
		res[i] = min;
	}

	for (int i = 0; i < rows; i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int* Fun12(int** arr, int rows, int cols)
{
	int* res = new int[2];
	int sumr = 0;
	int sumr2 = 0;
	int sumc = 0;
	int sumc2 = 0;
	for (int i = 0; i < rows; i++)
	{
		int sumr = 0;
		for (int j = 0; j < cols; j++)
			sumr += arr[i][j];
		if (sumr2 < sumr)
			sumr2 = sumr;
	}

	for (int i = 0; i < rows; i++)
	{
		int sumc = 0;
		for (int j = 0; j < cols; j++)
			sumc += arr[j][i];
		if (sumc2 < sumc)
			sumc2 = sumc;
	}

	*res = (int)sumr2;
	*(res + 1) = (int)sumc2;

	cout << *res;
	cout << endl << *(res + 1);

	return res;
}

double* Fun13(int** arr, int rows, int cols)
{
	double sum = 0;
	double* res = new double[2];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}

	res[0] = sum;
	res[1] = sum / (rows * cols);

	cout << res[0] << endl << res[1];

	return res;
}

int* Fun14(int** arr, int rows, int cols)
{
	int* res = new int[cols];
	int sumr = 0;
	int sumr2 = 0;
	int row = 0;
	for (int i = 0; i < rows; i++)
	{
		int sumr = 0;
		for (int j = 0; j < cols; j++)
			sumr += arr[i][j];
		if (sumr2 > sumr)
		{
			row = 0;
			sumr2 = sumr;
			row = i;
		}
	}

	for (int j = 0; j < cols; j++)
	{
		cout << arr[row][j] << "  ";
	}

	return 0;
}

int* Fun15(int** arr, int rows, int cols, int* Y)
{
	int h = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < *Y)
			{
				h++;
			}
		}
	}

	int* res = new int[h];
	int g = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < *Y)
			{
				res[g] = arr[i][j];
				g++;
			}
		}
	}

	int dub = 0;
	for (int i = 0; i < h; i++)
	{
		cout << res[i] << endl;
		dub *= res[i];
	}

	cout << dub;


	return res;
}

double* Fun34(int** arr, int rows, int cols)
{
	if (cols != rows)
	{
		cout << "Для этого задания размер длина и ширина матрицы должна быть одинаковой";
		return 0;
	}

	double* res = new double[2];
	int sum1 = 0, sum2 = 0;


	for (int i = 0; i < cols; i++)
	{
		sum1 += arr[i][i];
	}

	for (int k = cols - 1, i = 0; i < cols; i++, k--)
	{
		sum2 += arr[k][i];
	}

	res[0] = (sum1 / cols);
	res[1] = (sum2 / cols);

	cout << res[0] << endl << res[1];

	return res;
}

int* Fun35(int** arr, int rows, int cols)
{
	int min = (9 * rows * cols), max = 0;
	int* res = new int[2];


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}

	res[0] = max;
	res[1] = min;

	cout << res[0] << endl << res[1];

	return res;
}

int* Fun36(int** arr, int rows, int cols)
{
	int min;
	int* res = new int[rows];

	for (int i = 0; i < rows; i++)
	{
		min = 9;
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
		res[i] = min;
	}

	for (int i = 0; i < rows; i++)
	{
		cout << res[i] << endl;
	}

	return res;
}




//int* Fun15(int** arr, int rows, int cols)
//{
//	int* res = new int[cols];
//	int sumr = 0;
//	int sumr2 = 0;
//	int row = 0;
//	for (int i = 0; i < rows; i++)
//	{
//		int sumr = 0;
//		for (int j = 0; j < cols; j++)
//			sumr += arr[i][j];
//		if (sumr2 < sumr)
//		{
//			row = 0;
//			sumr2 = sumr;
//			row = i;
//		}
//	}
//
//	for (int j = 0; j < cols; j++)
//	{
//		cout << arr[row][j] << "  ";
//	}
//
//	return 0;
//}

 

//int* Fun16(int** a, int m, int n, int* Y) // Не сделано
//{
//	int y = 5;
//	int* res = new int[cols];
//	int sumr = 0;
//	int sumr2 = 9;
//	int k = 0;
//	int g = 0;
//
//	int row = 0;
//	for (int i = 0; i < rows; i++)
//	{
//
//
//
//		for (int j = 0; j < cols; j++)
//		{
//			sumr = 0;
//			sumr = arr[i][j];
//
//
//			if (y > sumr)
//			{
//
//				sumr2 = sumr;
//				*(res + k) = (int)sumr2;
//				k++;
//			}
//		}
//
//		g += k;
//		k = 0;
//	}
//
//	for (int j = 0; j < g; j++)
//	{
//		cout << *(res + j) << "  ";
//	}
//}


int* Fun17(int** arr, int rows, int cols)
{
	int* res = new int[rows];
	int sumr;
	int sumr2 = 0;
	int row = 0;
	for (int i = 0; i < rows; i++)
	{
		int sumr2 = 0;
		int sumr = 0;
		for (int j = 0; j < cols; j++)
		{
			sumr = arr[i][j];


			if (sumr2 < sumr)
				sumr2 = sumr;
		}
		*(res + i) = (int)sumr2;

	}

	for (int i = 0; i < cols; i++)
	{
		cout << *(res + i);
	}

	return 0;
}




//int* Fun14(int** arr, int rows, int cols)
//{
//	int* res = new int[cols];
//	int sumr = 0;
//	int sumr2;
//
//	int row = 0;
//	for (int i = 0; i < rows; i++)
//	{
//
//		sumr2 = arr[i][0];
//		sumr = 0;
//		for (int j = 0; j < cols; j++)
//		{
//			sumr = arr[i][j];
//
//
//			if (sumr2 > sumr)
//				sumr2 = sumr;
//		}
//		*(res + i) = sumr2;
//	}
//
//	for (int i = 0; i < rows; i++)
//	{
//		cout << res[i] << endl;
//	}
//
//	return 0;
//}

//void PrintArr(int** arr, int rows, int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << arr[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}