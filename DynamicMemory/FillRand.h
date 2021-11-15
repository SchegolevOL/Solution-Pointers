#pragma once

#include"stdafx.h"
void FillRand(int* Array, int length, int begin = 1, int end = 9);//«аполнение массива случайными числами
void FillRand(double* Array, int length, int begin, int end, int acc);
void FillRand(char* Array, size_t length, char begin = 0, char end = 255);
void RandMatrix(int** Matrix, size_t rows, size_t columns, int begin = 1, int end = 9);
void RandMatrix(double** Matrix, size_t rowns, size_t columns, int begin = 1, int end = 9, int acc = 2);
void RandMatrix(char** Matrix, size_t rowns, size_t columns, char begin = 0, char end = 255);
