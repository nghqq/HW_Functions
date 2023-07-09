#include"FillRand.h"



template<typename T>
void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 33;


	}

}

void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 33;
		arr[i] /= 100;
	}

}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 33;

	}
}

template<typename T>
void FillRand(T darr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			darr[i][j] = rand() % 33;
		}
	}
}
void FillRand(double darr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			darr[i][j] = rand() % 33;
			darr[i][j] /= 100;
		}
	}
}

void FillRand(char darr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			darr[i][j] = rand() % 33;
		}
	}
}