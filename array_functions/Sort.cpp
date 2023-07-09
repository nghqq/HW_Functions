#include"Sort.h"

template<typename T>
void Sort(T arr[], const int n)
{
	for (int step = n / 2; step > 0; step /= 2)
	{
		for (int i = step; i < n; i++)
		{
			for (int j = i - step; j >= 0 && arr[j] > arr[j + step]; j -= step)
			{
				T buff = arr[j];
				arr[j] = arr[j + step];
				arr[j + step] = buff;
			}
		}
	}

}
void Sort(double arr[], const int n)
{
	for (int step = n / 2; step > 0; step /= 2)
	{
		for (int i = step; i < n; i++)
		{
			for (int j = i - step; j >= 0 && arr[j] > arr[j + step]; j -= step)
			{
				double buff = arr[j];
				arr[j] = arr[j + step];
				arr[j + step] = buff;
			}
		}
	}

}

void Sort(char arr[], const int n)
{
	for (int step = n / 2; step > 0; step /= 2)
	{
		for (int i = step; i < n; i++)
		{
			for (int j = i - step; j >= 0 && arr[j] > arr[j + step]; j -= step)
			{
				char buff = arr[j];
				arr[j] = arr[j + step];
				arr[j + step] = buff;
			}
		}
	}
}

template<typename T>
void Sort(T darr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (darr[k][l] < darr[i][j])
					{
						T buff = darr[i][j];
						darr[i][j] = darr[k][l];
						darr[k][l] = buff;

					}
				}
			}
		}
	}
}
void Sort(double ddarr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (ddarr[k][l] < ddarr[i][j])
					{
						double buff = ddarr[i][j];
						ddarr[i][j] = ddarr[k][l];
						ddarr[k][l] = buff;

					}
				}
			}
		}
	}
}
void Sort(char cdarr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (cdarr[k][l] < cdarr[i][j])
					{
						char buff = cdarr[i][j];
						cdarr[i][j] = cdarr[k][l];
						cdarr[k][l] = buff;

					}
				}
			}
		}
	}
}