#include<iostream>
#include<cmath>
using namespace std;

int zavd28()
{
	setlocale(0, "");
	double a, b, x, i;
	double sum = 0, step, stop;
	cout << "\n\n\t\t\t\t\t\t¬ведите X: ";
	cin >> x;

	if (x < 2)
	{
		cout << "\t\t\t\t\t\t¬ведите A: ";
		cin >> a;
		cout << "\t\t\t\t\t\t¬ведите B: ";
		cin >> b;
		cout << "\t\t\t\t\t\t¬ведите X: ";
		cin >> x;

		double y = (pow(pow(a, 2) + pow(b, 2), 1.0/2.0) / (a + b)) * x;
		cout << "\t\t\t\t\t\tY = " << y;
	}

	else if (x >= 0)
	{
		cout << "\t\t\t\t\t\t¬ведите i: ";
		cin >> i;
		cout << "\t\t\t\t\t\t¬ведите step: ";
		cin >> step;
		cout << "\t\t\t\t\t\t¬ведите stop: ";
		cin >> stop;
		while (i != stop)
		{
			sum = sum + (2 + pow(i, 2) * x);
			i = i + step;
		}
		cout << "\t\t\t\t\t\tY = " << sum;
	}
	
	return 0; 
}

int main()
{
	zavd28();
	return 0;
}