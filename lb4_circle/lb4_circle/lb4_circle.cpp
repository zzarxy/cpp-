#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class TCircle
{
	int radius;
	int mid[2];
public:

	TCircle() //конструктор без параметров;
	{
		mid[0] = 0;
		mid[1] = 0;
	}

	void set_R(int r) // конструктор с параметром;
	{
		radius = r;
	}

	void set_mid(int x, int y) // конструктор с параметром;
	{
		mid[0] = x;
		mid[1] = y;
	}

	TCircle(const TCircle& tCircle) : // конструктор копирования;
		radius(tCircle.radius)
	{
		cout << "Copy constructor worked here!\n";
	}

	bool check_point(int x, int y) // проверка прендлежнасти точки кругу
	{
		x = x - mid[0];
		y = y - mid[1];
		int point_r;
		point_r = pow(x, 2) + pow(y, 2);
		if (point_r < radius)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int S_circle() // вычисления площади круга
	{
		int S1;
		double S2;
		S1 = pow(radius, 2);
		S2 = 3.1415 * pow(radius, 2);
		return S1;
	}
};

void main()
{
	setlocale(LC_ALL, "ru");

	TCircle a;
	cout << "Введите координаты центра круга: (x ; y)" << endl;
	int x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	a.set_mid(x, y);
	cout << "Введите радиус круга: ";
	int r;
	cin >> r;
	a.set_R(r);
	cout << "S круга = " << a.S_circle() << "Pi = " << a.S_circle() * 3.1415 << "см^2" << endl;
	cout << "Введите координаты точки: (x ; y)" << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	if (a.check_point(x, y) == true)
	{
		cout << "Точка " << x << ", " << y << endl << "пренадлежит кругу.";
	}
	else
	{
		cout << "Точка " << x << ", " << y << endl << "не пренадлежит кругу.";
	}
	
}