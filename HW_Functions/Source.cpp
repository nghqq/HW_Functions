#include <iostream>
using namespace std;

int Factorial(int n);
double Power(int n, int m);


void main()
{
	setlocale(LC_ALL, "");

	int n, m;
	cout << "������� �����: "; cin >> n; cout << "������� �������: "; cin >> m;
	cout << "��������� ����� " << n << " ����� " << Factorial(n) << endl;
	cout << "�����: " << n << " � �������: "<< m << " ����� " << Power(n, m) << endl;


	

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
