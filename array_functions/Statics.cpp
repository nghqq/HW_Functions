#include"const.h"

int Summ(int arr[], const int n)
{
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}

double Summ(double arr[], const int n)
{
	double summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}

char Summ(char arr[], const int n)
{
	char summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
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

double MaxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
char MaxValueIn(char arr[], const int n)
{
	char max = arr[0];
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

double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

char MinValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;

}





int Summ(int darr[ROWS][COLS], const int ROWS, const int COLS)
{
	int summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summ += darr[i][j];
		}
	}
	return summ;
}
int Summ(double darr[ROWS][COLS], const int ROWS, const int COLS)
{
	int summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summ += darr[i][j];
		}
	}
	return summ;
}
int Summ(char darr[ROWS][COLS], const int ROWS, const int COLS)
{
	int summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summ += darr[i][j];
		}
	}
	return summ;
}

int MaxValueIn(int darr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max;
	max = darr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (darr[i][j] > max)
				max = darr[i][j];
		}
	}
	return max;
}
int MaxValueIn(double ddarr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max;
	max = ddarr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (ddarr[i][j] > max)
				max = ddarr[i][j];
		}
	}
	return max;
}
int MaxValueIn(char cdarr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max;
	max = cdarr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (cdarr[i][j] > max)
				max = cdarr[i][j];
		}
	}
	return max;
}

int MinValueIn(int darr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min;
	min = darr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (darr[i][j] < min)
				min = darr[i][j];
		}
	}
	return min;
}
int MinValueIn(double ddarr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min;
	min = ddarr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (ddarr[i][j] < min)
				min = ddarr[i][j];
		}
	}
	return min;
}
int MinValueIn(char cdarr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min;
	min = cdarr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (cdarr[i][j] < min)
				min = cdarr[i][j];
		}
	}
	return min;
}

