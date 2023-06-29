#include"stafx.h"
#include"const.h"
#include"FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statics.h"
#include "Shift.h"


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





















	


	

