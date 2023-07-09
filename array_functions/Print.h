#pragma once
#include"Constants.h"
#include"stdafx.h"
template<typename T>
void Print(const T arr[], const int n);
void Print(const double arr[], const int n);
void Print(const char arr[], const int n);


template<typename T>
void Print(T darr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double darr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char darr[ROWS][COLS], const int ROWS, const int COLS);


