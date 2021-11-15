#include"FillRand.h"
void FillRand(int* Array, int length, int begin, int end)//«аполнение массива случайными числами
{
	for (size_t i = 0; i < length; i++)
		*(Array + i) = rand() % (end - begin + 1) + begin;
}

void FillRand(double* Array, int length, int begin, int end, int acc)
{
	int n = 1;
	for (size_t i = 0; i < acc; i++) n *= 10;
	long long b = begin * n;
	long long e = end * n;
	for (size_t i = 0; i < length; i++)
		*(Array + i) = (double)(rand() % (e - b + 1) + b) / n;
}

void FillRand(char* Array, size_t length, char begin, char end)
{
	for (size_t i = 0; i < length; i++)
		*(Array + i) = rand() % (end - begin + 1) + begin;
}
void RandMatrix(int** Matrix, size_t rows, size_t colums, int begin, int end)
{
	for (size_t i = 0; i < rows; i++)
	{
		FillRand(Matrix[i], colums, begin, end);
	}
}

void RandMatrix(double** Matrix, size_t rows, size_t colums, int begin, int end, int acc)
{
	for (size_t i = 0; i < rows; i++)
	{
		FillRand(Matrix[i], colums, begin, end, acc);
	}
}

void RandMatrix(char** Matrix, size_t rows, size_t colums, char begin, char end)
{
	for (size_t i = 0; i < rows; i++)
	{
		FillRand(Matrix[i], colums, begin, end);
	}
}