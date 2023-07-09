#pragma once
#include"stdafx.h"
#include"Constants.h"

template<typename T>
void ShiftLeft(T arr[], const int n, int number_of_shift);
void ShiftLeft(double arr[], const int n, int number_of_shift);
void ShiftLeft(char arr[], const int n, int number_of_shift);

template<typename T>
void ShiftRight(T arr[], const int n, int number_of_shift);
void ShiftRight(double arr[], const int n, int number_of_shift);
void ShiftRight(char arr[], const int n, int number_of_shift);