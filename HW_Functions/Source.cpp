#include <iostream>
using namespace std;

int Factorial(int n);
double Power(int n, int m);


void main()
{
	setlocale(LC_ALL, "");

	int n, m;
	cout << "Введите число: "; cin >> n; cout << "Введите степень: "; cin >> m;
	cout << "Факториал числа " << n << " равен " << Factorial(n) << endl;
	cout << "Число: " << n << " в степени: "<< m << " равно " << Power(n, m) << endl;


	

}

int Factorial(int n)
{
	int c = 1;
	for (int i = 1; i <= n; i++)
	{
		c = c * i;


	}
	return c;

}

double Power(int n, int m)
{
	double result = 1, buff;
	
	if (m < 0)
	{
		buff = m * -1;

	}
	else
	{
		buff = m;
		result = n;
	}


	for (int i = 1; i <= buff; i++)
	{
		result = result * n;

	}
	if (m > 0)
	{
		return result;
	}
	else
		return 1 / result;
}
