#pragma once

#include"Constants.h"
#include"stdafx.h"


template<typename T>
void Sort(T arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

template<typename T>
void Sort(T darr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double darr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char darr[ROWS][COLS], const int ROWS, const int COLS);


