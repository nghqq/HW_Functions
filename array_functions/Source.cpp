#include <iostream>
using namespace std;
#define endlx2 << endl << endl;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
int Summ(int arr[], const int n);
void ShiftLeft(int arr[], const int n, int number_of_shift);
void ShiftRight(int arr[], const int n, int number_of_shift);
int MaxValueIn(int arr[], const int n);
int MinValueIn(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int const n = 10;
	int arr[n]{};
	


	FillRand(arr, n);
	cout << endl;
	cout << "Случайные числа:";
	cout endlx2;
	Print(arr, n);
	cout endlx2;
	
	

	Sort(arr, n);
	cout << endl;
	cout << "Сортировка:";
	cout endlx2;
	for (int i = 0; i < n; i++)
	{
		cout  << arr[i] << "\t";
		
	}
	
	cout endlx2;
	
	cout << "Сумма элементов массива : " << Summ(arr,n) endlx2;
	cout << "Среднее-арифметическое элементов массива : " << Summ(arr,n)/n endlx2;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) endlx2;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) endlx2;

	int number_of_shift;
	cout << "Введите количество сдвигов: "; cin >> number_of_shift;
	ShiftLeft(arr, n, number_of_shift);
	
	Print(arr, n);
	
	cout endlx2;

	ShiftRight(arr, n, number_of_shift);
	ShiftRight(arr, n, number_of_shift);
	Print(arr, n);
	
	
	
	
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 33;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Sort(int arr[], const int n) 
{
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
}
int Summ(int arr[], const int n) 
{
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}
void ShiftLeft(int arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{

			arr[i] = arr[i + 1];
		}

		arr[n - 1] = buffer;
	}
}
void ShiftRight(int arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{

			arr[i + 1] = arr[i];
		}

		arr[0] = buffer;
	}
}
int MaxValueIn(int arr[], const int n) 
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
int MinValueIn(int arr[], const int n) 
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

