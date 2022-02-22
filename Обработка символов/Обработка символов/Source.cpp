#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include <list>


using namespace std;

int* fun16(int* arr);
int* fun17(int* arr);
int fun3(int);
int* fun18(int* arr);
int fun19(int arr);
int fun20(int* arr);
int* fun21(int* arr);
int* fun22(int*, int);
int fun23(int, int);
int* fun24(int*, int);
int* fun25(int*, int);
int* fun26(int*, int);
int* fun27(int*, int);
int* fun28(int*, int);
int* fun29(int*, int, int*);
int* fun30(int*, int);
int* fun31(int*, int);
int* fun32(int*, int);
int* fun33(int*, int);


//int* lastElem(DLIST* pH);

typedef int ELEMT;
typedef struct list
{
	ELEMT element;
	struct list* next;
} DLIST;


int main()
{
	
	int zd;
	setlocale(0, "russian");
	cout << "Введите номер задания ";
	cin >> zd;

	int esize;
	int n;
	switch (zd)
	{
		case 16:
		{
			int* res = fun16(&n);
			break;
		}
		case 17:
		{
			int* res = fun17(&n);
			break;
		}
		case 3:
		{
			int res = fun3( 1 );
			break;
		}
		case 18:
		{
			int* res = fun18(&n);
			break;
		}
		case 19:
		{
			int res = fun19(1);
			break;
		}
		case 20:
		{
			esize = 4;
			int arr = Array(esize);

			int res = fun20(&arr);
			break;
		}
		case 21:
		{
			int* res = fun21(&n);
			break;
		}
		case 22:
		{
			int* res = fun22(&n, 1);
			break;
		}
		case 23:
		{
			int res = fun23(123, 322);
			break;
		}
		case 24:
		{
			int* res = fun24(&n ,1);
			break;
		}
		case 25:
		{
			int* res = fun25(&n, 1);
			break;
		}
		case 26:
		{
			int* res = fun26(&n, 1);
			break;
		}
		case 27:
		{
			int* res = fun27(&n, 1);
			break;
		}
		case 28:
		{
			int* res = fun28(&n, 1);
			break;
		}
		case 29:
		{
			int* res = fun29(&n, 1, &n);
			break;
		}
		case 30:
		{
			int* res = fun30(&n, 1);
			break;
		}
		case 31:
		{
			int* res = fun31(&n, 1);
			break;
		}
		case 32:
		{
			int* res = fun32(&n, 1);
			break;
		}
		case 33:
		{
			int* res = fun33(&n, 1);
			break;
		}
	}
	
}

int Array(int esize)
{
	int min = 10 ^ esize - 1;
	int max = 10 ^ esize;

	int n = 0;

	for (int i = min; i < max; i++)
	{
		n++;
	}

	int* arr = new int[n];

	for (int i = min; i < max; i++)
	{
		arr[i] = i;
	}

	return *arr;
}

int* fun16(int* arr)
{
	int k = 0;
	char d[5], c[8] = { 0 };
	int j = 0;
	for (int i = 1000; i <= 9999 ; i++)
	{
		_itoa_s(i, d, 10);
		for (j = 0; j < 4; j++)
		{
			c[j * 2] = d[j];
		}
		if ((atoi(c) + atoi(c + 6) == atoi(c + 2) + atoi(c + 4)) && (i % 4 == 0) && (i % 22 == 0))
		{
			k++;
		}
	}

	int* res = new int[k];

	k = 0;
	for (int i = 1000; i <= 9999; i++)
	{
		_itoa_s(i, d, 10);
		for (j = 0; j < 4; j++)
		{
			c[j * 2] = d[j];
		}
		if ((atoi(c) + atoi(c + 6) == atoi(c + 2) + atoi(c + 4)) && (i % 4 == 0) && (i % 22 == 0))
		{
			res[k] = i;
			k++;
		}
	}

	for (int i = 0; i < k; i++)
	{
		cout << res[i] << endl;
	}


	*arr = k;

	return res;
}

int* fun17(int*)
{
	int k = 0;
	char d[5], c[8] = { 0 };
	int j = 0;
	for (int i = 1000; i <= 9999; i++)
	{
		_itoa_s(i, d, 10);
		for (j = 0; j < 4; j++)
		{
			c[j * 2] = d[j];
		}
		int y = 0;
		int h = 0;
		int t = 0;
		for (int g = 0; g < 4; g++)
		{
			
			for (int p = 0; p < 4; p++)
			{
				if ((c[g * 2] == c[p * 2]) && (g != p)) // число 1102 когда (1)[1]02 , след цыкл [1](1)02;
				{
					h++;
					
					if (h >= 3)
					{
						k--;
						t = 1;
						break;
					}
					if (y == 0)
						k++;

					y++;
				}
			}
			

			if (t == 1)
				break;
		}
		
	}
	int* res = new int[k];

	k = 0;

	for (int i = 1000; i <= 9999; i++)
	{
		_itoa_s(i, d, 10);
		for (j = 0; j < 4; j++)
		{
			c[j * 2] = d[j];
		}
		int y = 0;
		int h = 0;
		int t = 0;
		for (int g = 0; g < 4; g++)
		{
			
			for (int p = 0; p < 4; p++)
			{
				if ((c[g * 2] == c[p * 2]) && (g != p))
				{
					h++;
					
					if (h >= 3)
					{
						k--;
						t = 1;
						break;
					}
					if (y == 0)
						k++;

					y++;
					
				}
				
			}
			if (h == 2)
				res[k - 1] = i;

			if (t == 1)
				break;
		}
	}

	for (int i = 0; i < k; i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int fun3(int arr)
{
	int numb, size;

	cout << "Введите число ";
	cin >> numb;

	char d[32] = { 0 };

	_itoa_s(numb, d, 10);

	size = strlen(d);


	int y = 0;
	int h = 0;
	int t = 0;
	for (int g = 0; g < size; g++)
	{

		for (int p = 0; p < size; p++)
		{
			if ((d[g] == d[p]) && (g != p))
			{
				cout << "Два одинаковых числа обнаружены";
				t = 1;
				break;
			}

		}

		if (t == 1)
			break;
	}


	if (t != 1)
		cout << "Два одинаковых числа не обнаружены";

	return 0;
}

int* fun18(int* arr)
{
	int k = 0;
	char d[5], c[8] = { 0 };
	int j = 0;
	for (int i = 1000; i <= 9999; i++)
	{
		_itoa_s(i, d, 10);
		for (j = 0; j < 4; j++)
		{
			c[j * 2] = d[j];
		}
		if (atoi(c) + atoi(c + 6) + atoi(c + 2) + atoi(c + 4) < 10)
		{
			k++;
		}
	}

	int* res = new int[k];

	k = 0;
	for (int i = 1000; i <= 9999; i++)
	{
		_itoa_s(i, d, 10);
		for (j = 0; j < 4; j++)
		{
			c[j * 2] = d[j];
		}
		if (atoi(c) + atoi(c + 6) + atoi(c + 2) + atoi(c + 4) < 10)
		{
			res[k] = i;
			k++;
		}
	}

	for (int i = 0; i < k; i++)
	{
		cout << res[i] << endl;
	}


	*arr = k;

	return res;
}

int fun19(int arr)
{
	int numb;

	cout << "Введите 3-х значное число ";
	cin >> numb;

	if ((numb > 999) || (numb < 100))
	{
		cout << "Error";
		return 0;
	}

	char d[4], c[3];
	_itoa_s(numb, d, 10);

	int k = 2;
	for (int i = 0; i < 3; i++)
	{
		c[k] = d[i];
		k--;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << c[i];
	}

	return 0;
}

int fun20(int* arr)
{
	int ar[] = { 123, 321, 431, 129, 769 };
	int buf;
	char r[32] = { 0 };
	int n;
	char h = 0;

	for (int i = 0; i < 5; i++)
	{
		n = 1;
		int buf = ar[i];
		while ((ar[i] /= 10) > 0) n++;
			
		
		_itoa_s(buf, r, 10);

		for (int j = 0; j < n; j++)
		{
			cout << r[j];
		}
		cout << endl;

		

		if (r[0] > h)
			h = r[0];
	}

	cout << h;
	return 0;
}

int* fun21(int* n)
{
	char d[4];
	int k = 0;

	for (int i = 100; i <= 999; i++)
	{
		_itoa_s(i, d, 10);

		if (d[1] != d[2])
		{
			k++;
		}
	}

	int* k2 = &k;
	
	cout << k2 << endl;

	int* res = new int[k];
	k = 0;

	for (int i = 100; i <= 999; i++)
	{
		_itoa_s(i, d, 10);

		if (d[1] != d[2])
		{
			res[k] = i;
			k++;
		}
	}

	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		sum += res[i];
	}
	cout << sum;

	return k2;
}

int* fun22(int*, int)
{
	int k = 0;

	////////////////////////////// создание тест. масива
	for (int i = 0; i <= 1000; i++)
	{
		k++;
	}

	int* arr = new int[k];
	k = 0;

	for (int i = 0; i <= 1000; i++)
	{
		arr[i] = i;
	}
	//////////////////////////////

	for (int i = 0; i <= 1000; i++)
	{
		if (arr[i] % 2 == 0)
		{
			k++;
		}
	}

	int* res = new int[k];

	int g = 0;
	for (int i = 0; i <= 1000; i++)
	{
		if (arr[i] % 2 == 0)
		{
			res[g] = (arr[i] / 2);
			g++;
		}
	}

	for (int i = 0; i < k; i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int fun23(int a, int b)
{
	char d[4], c[6] = { 0 };
	int sum1 = 0, sum2 = 0;

	_itoa_s(a, d, 10);
	for (int i = 0; i < 3; i++)
	{
		c[i * 2] = d[i];
	}
	
	for (int i = 0; i < 3; i++)
	{
		sum1 += atoi(c + i * 2);
	}
	

	_itoa_s(b, d, 10);
	for (int i = 0; i < 3; i++)
	{
		c[i * 2] = d[i];
	}

	for (int i = 0; i < 3; i++)
	{
		sum2 += atoi(c + i * 2);
	}

	int sum3 = sum1 - sum2;

	cout << sum1 << endl << sum2;


	return sum3;
}

int* fun24(int*, int)
{
	int arr[] = { 1023 , 4125, 2222, 123424, 124135680 };
	
	
	int numb;


	int* res = new int[size(arr)];

	int h = 0;
	int g = 0;

	for (int i = 0; i < size(arr); i++)
	{
		h = 1;
		numb = arr[i];
		while (numb != NULL)
		{
			numb /= 10;
			h++;
		}

		numb = arr[i];

		/*char d[32];*/
		char* d = new char[h];

		_itoa_s(numb, d, h, 10);

		while (d[h] != NULL)
		{
			h++;
		}

		for (int i = 0; i < h; i++)
		{
			if (d[i] % 2 != 0)
			{
				if (d[i] == 9)
				{
					d[i] = '0';
					continue;
				}
				d[i] += 1;
			}
		}

		res[g] = atoi(d);
		g++;
	}

	for (int i = 0; i < size(arr); i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int* fun25(int*, int)
{
	int arr[] = { 1023 , 4125, 2222, 123424, 12413568 };
	char d[32];

	int numb;


	int* res = new int[size(arr)];

	int h = 0;
	int g = 0;

	for (int i = 0; i < size(arr); i++)
	{
		numb = arr[i];

		_itoa_s(numb, d, 10);

		while (d[h] != NULL)
		{
			h++;
		}

		for (int i = 0; i < h; i++)
		{
			if (d[i] % 2 == 0)
			{
				if (d[i] == '0')
				{
					d[i] = '9';
					continue;
				}
				d[i] -= 1;
			}
		}

		res[g] = atoi(d);
		g++;
	}

	for (int i = 0; i < size(arr); i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int* fun26(int*, int)
{
	int arr[] = { 3123, 125046, 1235, 63468, 13567 };

	int* res = new int[size(arr)];

	for (int i = 0; i < size(arr); i++)
	{
		int k = 2, g = 0;
		int n = arr[i];
		while ((n /= 10) > 0)
		{
			k++;
		}

		char* d = new char[k];
		char* d2 = new char[k];

		_itoa_s(arr[i], d, k, 10);

		for (int j = 0; j < k; j++)
		{
			if ((j % 2 != 0) && (j != 0))
			{
				d2[g] = d[j];
				g++;
			}
		}

		res[i] = atoi(d2);
	}

	for (int i = 0; i < size(arr); i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int* fun27(int*, int)
{
	int arr[] = { 3123, 125046, 1235, 63468, 13567 };

	int* res = new int[size(arr)];

	for (int i = 0; i < size(arr); i++)
	{
		int k = 2;
		int n = arr[i];
		while ((n /= 10) > 0)
		{
			k++;
		}

		char* d = new char[k];

		_itoa_s(arr[i], d, k, 10);



		
		for (int j = 1; j < k; j++)
		{
			d[j - 1] = d[j];
		}

		res[i] = atoi(d);
	}

	for (int i = 0; i < size(arr); i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int* fun28(int*, int)
{
	int arr[] = { 3783, 125046, 1235, 63468, 13567 };

	int* res = new int[size(arr)];

	for (int i = 0; i < size(arr); i++)
	{
		int k = 2;
		int g = 0;
		int n = arr[i];
		while ((n /= 10) > 0)
		{
			k++;
		}

		char* d = new char[k];
		char* c = new char[20]{ 0 };

		_itoa_s(arr[i], d, k, 10);

		for (int j = 0; j < k; j++)
		{
			c[j * 2] = d[j];
		}

		for (int j = 0; j < k; j++)
		{
			if (d[j] == NULL)
			{
				break;
			}
			if (atoi(c + (j * 2)) >= 7)
			{
				d[j] = d[j] + 3 - 10;
				continue;
			}
			d[j] += 3;
		}
		res[i] = atoi(d);
	}

	for (int i = 0; i < size(arr); i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int* fun29(int*, int, int*)
{
	int cz = 3;
	int numb = 4;
	int arr[] = { 3104, 412, 41234, 1235 };

	
	int buf;
	int k;
	int g = 0;

	for (int i = 0; i < numb; i++)
	{
		k = 2;
		buf = arr[i];
		while ((buf /= 10) > 0)
		{
			k++;
		}

		char* d = new char[k] { 0 };
		char* d2 = new char[k * 2]{ 0 };

		_itoa_s(arr[i], d, k, 10);

		
		
		for (int j = 0, h = k - 2; j < k - 1; j++, h--)
		{
			d2[j * 2] = d[h];
		}

		

		int l = 0;
		int nomer;
		
		for (int j = 0; j < k; j++)
		{
			if (atoi(d2 + j * 2) == cz)
			{
				g++;
				continue;
			}
			

			d[l] = d2[j * 2];
			
			l++;
		}

		arr[i] = atoi(d);
	}

	cz = g;

	for (int i = 0; i < numb; i++)
	{
		cout << arr[i] << endl;
	}
	cout << g;

	return &g;
}

int* fun30(int*, int)
{
	int arr[] = { 1029 , 4125, 2222, 123424, 12413568 };
	char d[32];

	int numb;


	int* res = new int[size(arr)];

	int h = 0;
	int g = 0;

	for (int i = 0; i < size(arr); i++)
	{
		numb = arr[i];

		_itoa_s(numb, d, 10);

		while (d[h] != NULL)
		{
			h++;
		}

		for (int i = 0; i < h; i++)
		{
			if (d[i] % 2 != 0)
			{
				if (d[i] == '9')
				{
					d[i] = '0';
					continue;
				}
				d[i] += 1;
			}
		}

		res[g] = atoi(d);
		g++;
	}

	for (int i = 0; i < size(arr); i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int* fun31(int*, int)
{
	int arr[] = { 1023 , 4125, 2222, 123424, 12413568 };
	char d[32];

	int numb;


	int* res = new int[size(arr)];

	int h = 0;
	int g = 0;

	for (int i = 0; i < size(arr); i++)
	{
		numb = arr[i];

		_itoa_s(numb, d, 10);

		while (d[h] != NULL)
		{
			h++;
		}

		for (int i = 0; i < h; i++)
		{
			if (d[i] % 2 == 0)
			{
				if (d[i] == '0')
				{
					d[i] = '9';
					continue;
				}
				d[i] -= 1;
			}
		}

		res[g] = atoi(d);
		g++;
	}

	for (int i = 0; i < size(arr); i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int* fun32(int*, int)
{
	int arr[] = { 3123, 125046, 1235, 63468, 13567 };

	int* res = new int[size(arr)];

	for (int i = 0; i < size(arr); i++)
	{
		int k = 2, g = 0;
		int n = arr[i];
		while ((n /= 10) > 0)
		{
			k++;
		}

		char* d = new char[k];
		char* d2 = new char[k];

		_itoa_s(arr[i], d, k, 10);

		for (int j = 0; j < k; j++)
		{
			if ((j % 2 != 0) && (j != 0))
			{
				d2[g] = d[j];
				g++;
			}
		}

		res[i] = atoi(d2);
	}

	for (int i = 0; i < size(arr); i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

int* fun33(int*, int)
{
	int arr[] = { 3123, 125046, 1235, 63468, 13567 };

	int* res = new int[size(arr)];

	for (int i = 0; i < size(arr); i++)
	{
		int k = 2;
		int n = arr[i];
		while ((n /= 10) > 0)
		{
			k++;
		}

		char* d = new char[k];

		_itoa_s(arr[i], d, k, 10);




		for (int j = 1; j < k; j++)
		{
			d[j - 1] = d[j];
		}

		res[i] = atoi(d);
	}

	for (int i = 0; i < size(arr); i++)
	{
		cout << res[i] << endl;
	}

	return res;
}

DLIST* lastElem(DLIST* pH);
{

	if (pH == NULL)
		return NULL;

	DELEMT ykaz;


	while ((pH-> next) != NULL)
	{
		ykaz = (pH-> next);
	}

	return ykaz;
}







//float t = 45.78;
//
//
//
//for (int i = 0; i < r[i]; i++)
//{
//	printf("%d", r[i]);
//}
//double d = atof(r);
//
//cout << endl << d;



//int cols = 0;
//cout << "Сколько чисел " << endl;
//cin >> cols;
//
//
//////////////////////////////////////
//int** arr = new int* [cols];// Выделение памати
//
//////////////////////////////////////
//for (int i = 0; i < cols; i++) // Заполнение  
//{
//	arr[i] = rand() % 10;
//}


//setlocale(LC_ALL, "Russian");
	//int num; // Количество чисел в строке
	//int num2;
	//int size;
	//cout << "Введите размер масива ";
	//cin >> size;
	//cout << "Введите размер генерируемых чисел от ";
	//cin >> num2;
	//cout << "Введите размер генерируемых чисел до ";
	//cin >> num;
	//
	/////////////////////////////////////////
	//int *arr = new int[size]; //Генерация масива
	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = rand() % num + num2;
	//}

	/////////////////////////////////////////






//int k = 0;
//int g = 0;
//char r[15];
//int r1, r2, r3, r4;
//// 
//
//
//for (int i = 0; i < j; i++)
//{
//	cout << arr[i] << endl;
//
//}
//
//int ri[4];
//char h[3];
////////////////////////////////////////////
//for (int i = 0; i < j; i++) // Сколько чисел подходит
//{
//
//
//	if ((ri[0] + ri[3] == ri[1] + ri[2]) && (arr[i] % 4 == 0) && (arr[i] % 22 == 0))
//	{
//
//		k++;
//	}
//	else
//		arr[i] = 0;
//}
//
//int* res = new int[k];
//g = 0;
////////////////////////////////////////////	
//for (int i = 0; i < j; i++)  // Заполнение масива
//{
//
//	if (arr[i] != 0)
//	{
//		*(res + g) = arr[i];
//
//		g++;
//	}
//}
////////////////////////////////////////////
//cout << "============" << endl;
//
//for (int i = 0; i < k; i++)
//{
//	cout << res[i] << endl;
//}
//
//
///*char r[15];
//sprintf_s(r, "%g", a);
//cout << r << endl;
//cout << a << endl;
//if (r[0] + r[3] == r[1] + r[2])
//{
//	if (r %/ 4 = 0)
//}*/


