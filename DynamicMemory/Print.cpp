#include"Print.h"

template<typename T> void Print(const T* arr, size_t length)//Вывод массива на экран
{
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<typename T> void PrintMatrix(T** matrix, size_t rows, size_t columns)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			cout << matrix[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
}