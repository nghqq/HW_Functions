#pragma once
#include"stdafx.h"
#include"Constants.h"






template<typename T>
T Summ(T arr[], const int n);
double Summ(double arr[], const int n);
char Summ(char arr[], const int n);




template<typename T>
T MaxValueIn(T arr[], const int n);
double MaxValueIn(double arr[], const int n);
char MaxValueIn(char arr[], const int n);

template<typename T>
T MinValueIn(T arr[], const int n);
double MinValueIn(double arr[], const int n);
char MinValueIn(char arr[], const int n);









template<typename T>
T Summ(T darr[ROWS][COLS], const int ROWS, const int COLS);
int Summ(double darr[ROWS][COLS], const int ROWS, const int COLS);
int Summ(char darr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MaxValueIn(T darr[ROWS][COLS], const int ROWS, const int COLS);
int MaxValueIn(double darr[ROWS][COLS], const int ROWS, const int COLS);
int MaxValueIn(char darr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MinValueIn(T darr[ROWS][COLS], const int ROWS, const int COLS);
int MinValueIn(double darr[ROWS][COLS], const int ROWS, const int COLS);
int MinValueIn(char darr[ROWS][COLS], const int ROWS, const int COLS);

