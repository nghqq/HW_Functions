#pragma once
#include"Constants.h"
#include"stdafx.h"

template<typename T>
void FillRand(T arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);


template<typename T>
void FillRand(T darr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double darr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char darr[ROWS][COLS], const int ROWS, const int COLS);