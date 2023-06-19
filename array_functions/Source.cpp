#include <iostream>
using namespace std;
#define endlx2 endl << endl;
#define delimiter "\n---------------------------------------------------\n"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);


void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const char arr[], const int n);



void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

int Summ(int arr[], const int n);
double Summ(double arr[], const int n);
char Summ(char arr[], const int n);



void ShiftLeft(int arr[], const int n, int number_of_shift);
void ShiftLeft(double arr[], const int n, int number_of_shift);
void ShiftLeft(char arr[], const int n, int number_of_shift);

void ShiftRight(int arr[], const int n, int number_of_shift);
void ShiftRight(double arr[], const int n, int number_of_shift);
void ShiftRight(char arr[], const int n, int number_of_shift);

int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);
char MaxValueIn(char arr[], const int n);

int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
char MinValueIn(char arr[], const int n);

void FillRand(int darr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double darr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char darr[ROWS][COLS], const int ROWS, const int COLS);



void Print(int darr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double darr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char darr[ROWS][COLS], const int ROWS, const int COLS);




int Summ(int darr[ROWS][COLS], const int ROWS, const int COLS);
int Summ(double darr[ROWS][COLS], const int ROWS, const int COLS);
int Summ(char darr[ROWS][COLS], const int ROWS, const int COLS);

int MaxValueIn(int darr[ROWS][COLS], const int ROWS, const int COLS);
int MaxValueIn(double darr[ROWS][COLS], const int ROWS, const int COLS);
int MaxValueIn(char darr[ROWS][COLS], const int ROWS, const int COLS);

int MinValueIn(int darr[ROWS][COLS], const int ROWS, const int COLS);
int MinValueIn(double darr[ROWS][COLS], const int ROWS, const int COLS);
int MinValueIn(char darr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int darr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double darr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char darr[ROWS][COLS], const int ROWS, const int COLS);







void main()
{
	setlocale(LC_ALL, "");

	int const n = 10;
	int arr[n]{};



	FillRand(arr, n);
	cout << endl;
	cout << "Случайные числа:";
	cout << endlx2;
	Print(arr, n);
	cout << endlx2;




	Sort(arr, n);
	cout << endl;
	cout << "Сортировка:";
	cout << endlx2;
	Print(arr, n);

	cout << endlx2;

	cout << "Сумма элементов массива : " << Summ(arr, n) << endlx2;
	cout << "Среднее-арифметическое элементов массива : " << (double)Summ(arr, n) / n << endlx2;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endlx2;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endlx2;

	int number_of_shift;
	cout << "Введите количество сдвигов: "; cin >> number_of_shift;
	cout << endl;
	ShiftLeft(arr, n, number_of_shift);

	Print(arr, n);

	cout << endlx2;

	ShiftRight(arr, n, number_of_shift);
	ShiftRight(arr, n, number_of_shift);
	Print(arr, n);
	cout << endl;

	cout << delimiter;


	double brr[n]{};



	FillRand(brr, n);
	cout << endl;
	cout << "Случайные числа:";
	cout << endlx2;
	Print(brr, n);
	cout << endlx2;




	Sort(brr, n);
	cout << endl;
	cout << "Сортировка:";
	cout << endlx2;
	Print(brr, n);

	cout << endlx2;

	cout << "Сумма элементов массива : " << Summ(brr, n) << endlx2;
	cout << "Среднее-арифметическое элементов массива : " << (double)Summ(brr, n) / n << endlx2;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, n) << endlx2;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, n) << endlx2;

	int number_of_shift_1;
	cout << "Введите количество сдвигов: "; cin >> number_of_shift_1;
	cout << endl;
	ShiftLeft(brr, n, number_of_shift_1);

	Print(brr, n);

	cout << endlx2;

	ShiftRight(brr, n, number_of_shift_1);
	ShiftRight(brr, n, number_of_shift_1);
	Print(brr, n);
	cout << endl;

	cout << delimiter;

	char crr[n]{};



	FillRand(crr, n);
	cout << endl;
	cout << "Случайные числа:";
	cout << endlx2;
	Print(crr, n);
	cout << endlx2;




	Sort(crr, n);
	cout << endl;
	cout << "Сортировка:";
	cout << endlx2;
	Print(crr, n);

	cout << endlx2;

	cout << "Сумма элементов массива : " << Summ(crr, n) << endlx2;
	cout << "Среднее-арифметическое элементов массива : " << (double)Summ(crr, n) / n << endlx2;
	cout << "Максимальное значение в массиве: " << MaxValueIn(crr, n) << endlx2;
	cout << "Минимальное значение в массиве: " << MinValueIn(crr, n) << endlx2;

	int number_of_shift_2;
	cout << "Введите количество сдвигов: "; cin >> number_of_shift_2;
	cout << endl;
	ShiftLeft(crr, n, number_of_shift_2);

	Print(crr, n);

	cout << endlx2;

	ShiftRight(crr, n, number_of_shift_2);
	ShiftRight(crr, n, number_of_shift_2);
	Print(crr, n);
	cout << endl;


	cout << delimiter;

	int darr[ROWS][COLS] = {};
	FillRand(darr, ROWS, COLS);
	cout << endl;
	cout << "Случайные числа:";
	cout << endlx2;
	Print(darr, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов двумерного массива : " << Summ(darr,ROWS,COLS) << endlx2;
	cout << "Среднее-арифметическое элементов двумерного массива : " << (double)Summ(darr, ROWS,COLS) / (ROWS*COLS) << endlx2;
	cout << "Максимальное значение в двумерном массиве: " << MaxValueIn(darr,ROWS,COLS) << endlx2;
	cout << "Минимальное значение в двумерном массиве: " << MinValueIn(darr, ROWS, COLS) << endlx2;
	Sort(darr, ROWS,COLS);
	cout << endl;
	cout << "Сортировка:";
	cout << endlx2;
	Print(darr, ROWS,COLS);
	cout << endl;
	cout << delimiter;


	double ddarr[ROWS][COLS] = {};
	FillRand(ddarr, ROWS, COLS);
	cout << endl;
	cout << "Случайные числа:";
	cout << endlx2;
	Print(ddarr, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов двумерного массива : " << Summ(ddarr, ROWS, COLS) << endlx2;
	cout << "Среднее-арифметическое элементов двумерного массива : " << (double)Summ(ddarr, ROWS, COLS) / (ROWS * COLS) << endlx2;
	cout << "Максимальное значение в двумерном массиве: " << MaxValueIn(ddarr, ROWS, COLS) << endlx2;
	cout << "Минимальное значение в двумерном массиве: " << MinValueIn(ddarr, ROWS, COLS) << endlx2;
	Sort(ddarr, ROWS, COLS);
	cout << endl;
	cout << "Сортировка:";
	cout << endlx2;
	Print(ddarr, ROWS, COLS);
	cout << endl;
	cout << delimiter;

	char cdarr[ROWS][COLS] = {};
	FillRand(cdarr, ROWS, COLS);
	cout << endl;
	cout << "Случайные числа:";
	cout << endlx2;
	Print(cdarr, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов двумерного массива : " << Summ(cdarr, ROWS, COLS) << endlx2;
	cout << "Среднее-арифметическое элементов двумерного массива : " << (double)Summ(cdarr, ROWS, COLS) / (ROWS * COLS) << endlx2;
	cout << "Максимальное значение в двумерном массиве: " << MaxValueIn(cdarr, ROWS, COLS) << endlx2;
	cout << "Минимальное значение в двумерном массиве: " << MinValueIn(cdarr, ROWS, COLS) << endlx2;
	Sort(cdarr, ROWS, COLS);
	cout << endl;
	cout << "Сортировка:";
	cout << endlx2;
	Print(cdarr, ROWS, COLS);
	cout << endl;
	cout << delimiter;

	




}




void FillRand(int arr[], const int n)
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


void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Print(const char arr[], const int n)
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

void FillRand(int darr[ROWS][COLS], const int ROWS, const int COLS)
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

void Print(int darr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << darr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Print(double darr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << darr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Print(char darr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << darr[i][j] << "\t";
		}
		cout << endl;
	}
}

int Summ(int darr[ROWS][COLS], const int ROWS,const int COLS)
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

void Sort(int darr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0 ; l < COLS; l++)
				{
					if (darr[k][l] < darr[i][j])
					{
						int buff = darr[i][j];
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



	


	

