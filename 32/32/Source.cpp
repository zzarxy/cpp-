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

	for (int k = 0; k < cols; k++)
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

	

	return res;
}

int* fun16(int* arr)
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

	

	return res;
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

	


	*arr = k;

	return res;
}

int fun19(int numb)
{
	

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

	

	return 0;
}

int fun20(int* arr)
{
	
	int buf;
	char r[32] = { 0 };
	int n;
	char h = 0;

	for (int i = 0; i < 5; i++)
	{
		n = 1;
		int buf = arr[i];
		while ((arr[i] /= 10) > 0) n++;


		_itoa_s(buf, r, 10);

		for (int j = 0; j < n; j++)
		{
			cout << r[j];
		}
		cout << endl;



		if (r[0] > h)
			h = r[0];
	}

	
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
	

	return k2;
}

int* fun22(int*, int)
{
	
	

	int k;

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

	


	return sum3;
}

int* fun24(int* arr, int)
{
	


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

	

	return res;
}

int* fun25(int* arr, int)
{
	
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

	

	return res;
}

int* fun26(int* arr, int)
{
	

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

	

	return res;
}

int* fun27(int* arr, int)
{
	

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

	

	return res;
}

int* fun28(int* arr, int)
{
	

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

	

	return res;
}

int* fun29(int* arr, int numb, int* cz)
{
	


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


	return &g;
}

int* fun30(int* arr, int)
{
	
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

	

	return res;
}

int* fun32(int*, int)
{
	

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

	

	return res;
}

int* fun33(int*, int)
{
	

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

	

	return res;
}




