#include"Shift.h"


template<typename T>
void ShiftLeft(T arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{

			arr[i] = arr[i + 1];
		}

		arr[n - 1] = buffer;
	}
}

void ShiftLeft(double arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{

			arr[i] = arr[i + 1];
		}

		arr[n - 1] = buffer;
	}
}
void ShiftLeft(char arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{

			arr[i] = arr[i + 1];
		}

		arr[n - 1] = buffer;
	}
}
template<typename T>
void ShiftRight(T arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{

			arr[i + 1] = arr[i];
		}

		arr[0] = buffer;
	}
}
void ShiftRight(double arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{

			arr[i + 1] = arr[i];
		}

		arr[0] = buffer;
	}
}
void ShiftRight(char arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{

			arr[i + 1] = arr[i];
		}

		arr[0] = buffer;
	}
}