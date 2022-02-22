#include<iostream>

using namespace std;

	//double* Fun_1(int** ar, int n, int m)
	//{
	//	double* res = new double[2];
	//	int sum = 0;
	//	for (int i = 0; i < n; i++)
	//		for (int j = 0; j < m; j++)
	//			sum += ar[i][j];
	//	*res = (double)sum;
	//	*(res + 1) = (double)sum / (n * m);
	//	return res;
	//}



int* ar(int n, int m, int r)
{
	if (r < 1) return 0;
	srand((unsigned)time(NULL));
	int** p = new int* [sizeof(int*) * n];
	for (int i = 0; i < n; i++)
	{
		*(p + i) = new int[sizeof(int) * m];
		for (int k = 0; k < m; k++)
			*(*(p + i) + k) = rand() % r;
	}




	return *p;
}

	int* Fun1(int** ar, int n, int m)
	{
		int* res = new int[m];
		int sum = 0;
		int j = 0;
		for (int i = 0; i < n; i++)
			sum += ar[i][j];
			for (j = 0; j < m; j++)
				
		*res = (int)sum;
	
		return res;
	}