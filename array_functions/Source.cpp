#include"stdafx.h"
#include "Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Shift.h"
#include"Statics.h"



/*void main()
{
	setlocale(LC_ALL, "");

	int const n = 10;
	int arr[n]{};
	double da_arr[8]{ 2.5,2.7,3.14,5.8,4.3 };
	int darr[ROWS][COLS] = {};
	


	

	
	Print(da_arr, 8);
	std::cout << std:: endl;
	std:: cout << "Сумма элементов массива : " << Summ(da_arr, 8) << endlx2;
	std:: cout << "Среднее-арифметическое элементов массива : " << Summ(da_arr, 8) / 8 << endlx2;
	std:: cout << "Максимальное значение в массиве: " << MaxValueIn(da_arr, 8) << endlx2;
	std:: cout << "Минимальное значение в массиве: " << MinValueIn(da_arr, 8) << endlx2;


	
	

	FillRand(darr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Случайные числа:";
	std::cout << endlx2;
	Print(darr, ROWS, COLS);
	std::cout << std:: endl;
	std::cout << "Сумма элементов двумерного массива : " << Summ(darr, ROWS, COLS) << endlx2;
	std::cout << "Среднее-арифметическое элементов двумерного массива : " << (double)Summ(darr, ROWS, COLS) / (ROWS * COLS) << endlx2;
	std::cout << "Максимальное значение в двумерном массиве: " << MaxValueIn(darr, ROWS, COLS) << endlx2;
	std::cout << "Минимальное значение в двумерном массиве: " << MinValueIn(darr, ROWS, COLS) << endlx2;
	Sort(darr, ROWS, COLS);
	std::cout << std:: endl;
	std::cout << "Сортировка:";
	std::cout << endlx2;
	Print(darr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << delimiter;



	FillRand(arr, n);
	std::cout << std:: endl;
	std::cout << "Случайные числа:";
	std::cout << endlx2;
	Print(arr, n);
	std::cout << endlx2;




	Sort(arr, n);
	std::cout << std::endl;
	std::cout << "Сортировка:";
	std::cout << endlx2;
	Print(arr, n);

	std::cout << endlx2;

	std::cout << "Сумма элементов массива : " << Summ(arr, n) << endlx2;
	std::cout << "Среднее-арифметическое элементов массива : " << (double)Summ(arr, n) / n << endlx2;
	std::cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endlx2;
	std::cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endlx2;

	int number_of_shift;
	std::cout << "Введите количество сдвигов: "; std::cin >> number_of_shift;
	std::cout << std::endl;
	ShiftLeft(arr, n, number_of_shift);

	Print(arr, n);

	std::cout << endlx2;

	ShiftRight(arr, n, number_of_shift);
	ShiftRight(arr, n, number_of_shift);
	Print(arr, n);
	std::cout << std::endl;

	std::cout << delimiter;


	double brr[n]{};



	FillRand(brr, n);
	std::cout << std::endl;
	std::cout << "Случайные числа:";
	std::cout << endlx2;
	Print(brr, n);
	std::cout << endlx2;




	Sort(brr, n);
	std::cout << std::endl;
	std::cout << "Сортировка:";
	std::cout << endlx2;
	Print(brr, n);

	std::cout << endlx2;

	std::cout << "Сумма элементов массива : " << Summ(brr, n) << endlx2;
	std::cout << "Среднее-арифметическое элементов массива : " << (double)Summ(brr, n) / n << endlx2;
	std::cout << "Максимальное значение в массиве: " << MaxValueIn(brr, n) << endlx2;
	std::cout << "Минимальное значение в массиве: " << MinValueIn(brr, n) << endlx2;

	int number_of_shift_1;
	std::cout << "Введите количество сдвигов: "; std::cin >> number_of_shift_1;
	std::cout << std::endl;
	ShiftLeft(brr, n, number_of_shift_1);
	Print(brr, n);

	std::cout << endlx2;

	ShiftRight(brr, n, number_of_shift_1);
	ShiftRight(brr, n, number_of_shift_1);
	Print(brr, n);
	std::cout << std::endl;

	std::cout << delimiter;

	char crr[n]{};



	FillRand(crr, n);
	std::cout << std::endl;
	std::cout << "Случайные числа:";
	std::cout << endlx2;
	Print(crr, n);
	std::cout << endlx2;




	Sort(crr, n);
	std::cout << std::endl;
	std::cout << "Сортировка:";
	std::cout << endlx2;
	Print(crr, n);

	std::cout << endlx2;

	std::cout << "Сумма элементов массива : " << Summ(crr, n) << endlx2;
	std::cout << "Среднее-арифметическое элементов массива : " << (double)Summ(crr, n) / n << endlx2;
	std::cout << "Максимальное значение в массиве: " << MaxValueIn(crr, n) << endlx2;
	std::cout << "Минимальное значение в массиве: " << MinValueIn(crr, n) << endlx2;

	int number_of_shift_2;
	std::cout << "Введите количество сдвигов: "; std::cin >> number_of_shift_2;
	std::cout << std::endl;
	ShiftLeft(crr, n, number_of_shift_2);

	Print(crr, n);

	std::cout << endlx2;

	ShiftRight(crr, n, number_of_shift_2);
	ShiftRight(crr, n, number_of_shift_2);
	Print(crr, n);
	std::cout << std::endl;


	std::cout << delimiter;

	
	FillRand(darr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Случайные числа:";
	std::cout << endlx2;
	Print(darr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Сумма элементов двумерного массива : " << Summ(darr, ROWS, COLS) << endlx2;
	std::cout << "Среднее-арифметическое элементов двумерного массива : " << (double)Summ(darr, ROWS, COLS) / (ROWS * COLS) << endlx2;
	std::cout << "Максимальное значение в двумерном массиве: " << MaxValueIn(darr, ROWS, COLS) << endlx2;
	std::cout << "Минимальное значение в двумерном массиве: " << MinValueIn(darr, ROWS, COLS) << endlx2;
	Sort(darr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Сортировка:";
	std::cout << endlx2;
	Print(darr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << delimiter;


	double ddarr[ROWS][COLS] = {};
	FillRand(ddarr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Случайные числа:";
	std::cout << endlx2;
	Print(ddarr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Сумма элементов двумерного массива : " << Summ(ddarr, ROWS, COLS) << endlx2;
	std::cout << "Среднее-арифметическое элементов двумерного массива : " << (double)Summ(ddarr, ROWS, COLS) / (ROWS * COLS) << endlx2;
	std::cout << "Максимальное значение в двумерном массиве: " << MaxValueIn(ddarr, ROWS, COLS) << endlx2;
	std::cout << "Минимальное значение в двумерном массиве: " << MinValueIn(ddarr, ROWS, COLS) << endlx2;
	Sort(ddarr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Сортировка:";
	std::cout << endlx2;
	Print(ddarr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << delimiter;

	char cdarr[ROWS][COLS] = {};
	FillRand(cdarr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Случайные числа:";
	std::cout << endlx2;
	Print(cdarr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Сумма элементов двумерного массива : " << Summ(cdarr, ROWS, COLS) << endlx2;
	std::cout << "Среднее-арифметическое элементов двумерного массива : " << (double)Summ(cdarr, ROWS, COLS) / (ROWS * COLS) << endlx2;
	std::cout << "Максимальное значение в двумерном массиве: " << MaxValueIn(cdarr, ROWS, COLS) << endlx2;
	std::cout << "Минимальное значение в двумерном массиве: " << MinValueIn(cdarr, ROWS, COLS) << endlx2;
	Sort(cdarr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Сортировка:";
	std::cout << endlx2;
	Print(cdarr, ROWS, COLS);
	std::cout << std::endl;
	std::cout << delimiter;

}*/



	


	

