#include <iostream>
using namespace std;
#define endlx2 << endl << endl;

void main()
{
	setlocale(LC_ALL, "");
	int const n = 10;
	int arr[n]{};



	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 33;
	}
	cout << "��������� �����:";
	cout endlx2;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout  endlx2;

	for (int step = n / 2; step > 0; step /= 2)
	{
		for (int i = step; i < n; i++)
		{
			for (int j = i - step; j >= 0 && arr[j] > arr[j + step]; j -= step)
			{
				int buff = arr[j];
				arr[j] = arr[j + step];
				arr[j + step] = buff;
			}
		}
	}
	cout << "����������:";
	cout endlx2;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout endlx2;
	int max = arr[0];
	for ( int i = 0; i <n; i++)
	{
		if (arr[i] > max) 
		{
			max = arr[i];
		}
	}
		cout << "������������ ����� � �������: ";
		cout << max;

	cout endlx2;
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			max = arr[i];
		}
	}
	cout << "����������� ����� � �������: ";
	cout << min;
	cout endlx2;

	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	cout << "����� ��������� ������� : " << summ endlx2;
	cout << "�������-�������������� ��������� ������� : " << summ / n endlx2;

	int number_of_shift;
	cout << "������� ���������� �������: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{

			arr[i] = arr[i + 1];
		}

		arr[n - 1] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout endlx2;


	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{

			arr[i + 1] = arr[i];
		}

		arr[0] = buffer;
	}
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{

			arr[i + 1] = arr[i];
		}

		arr[0] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}


}