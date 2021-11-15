/*Создать ветку DynamicOverload, и в этой ветке перегрузить функции из предыдущего задания 
для одномерных и двумерных массивов типа double и char.
Для каждой функции написать проверочный код.
(Функции можно шаблонизировать, только тогда ветка будет DynamicTemplated)
*/
#include <iostream>
#include<Windows.h>
#include<time.h>
#include <stdlib.h>
#include"FillRand.h"
#include"Print.h"
#include"Print.cpp"
#include"DynamicMemory.h"
#include"DynamicMemory.cpp"
int main()
{
	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
		
	size_t index;
	size_t length;

	cout << "Массив типа int. " << endl;
	cout << "Введите размер массива : ";
	cin >> length;
	int* arrayINT = new int[length];
	FillRand(arrayINT, length, 1, 10);
	Print(arrayINT, length);

	int element;
	cout << "Добавление элемента в конец массива." << endl;
	cout << "Введите элемент массива : ";
	cin >> element;
	push_back(arrayINT, length, element);
	Print(arrayINT, length);

	cout << "Добавление элемента в начало массива." << endl;
	cout << "Введите элемент массива : ";
	cin >> element;
	push_front(arrayINT, length, element);
	Print(arrayINT, length);

	cout << "Добавление элемента массива по индексу." << endl;
	cout << "Введите элемент массива : ";
	cin >> element;

	cout << "Введите индекс от 0 до " << length << " :";
	cin >> index;
	insert(arrayINT, length, index, element);
	Print(arrayINT, length);

	cout << "Удаление элемента в конец массива." << endl;
	pop_back(arrayINT, length);
	Print(arrayINT, length);

	cout << "Удаление элемента в начале массива." << endl;
	pop_front(arrayINT, length);
	Print(arrayINT, length);

	cout << "Удаление элемента массива по индексу." << endl;
	cout << "Введите индекс от 0 до " << length << " :";
	cin >> index;
	erase(arrayINT, length, index);
	Print(arrayINT, length);
	delete[] arrayINT;

	cout << "Массив типа double. " << endl;
	cout << "Введите размер массива : ";
	cin >> length;
	double* arrayDOUBLE = new double[length];
	FillRand(arrayDOUBLE, length,1,10,2);
	Print(arrayDOUBLE, length);

	double elementDOUBLE;
	cout << "Добавление элемента в конец массива." << endl;
	cout << "Введите элемент массива : ";
	cin >> elementDOUBLE;
	push_back(arrayDOUBLE, length, elementDOUBLE);
	Print(arrayDOUBLE, length);

	cout << "Добавление элемента в начало массива." << endl;
	cout << "Введите элемент массива : ";
	cin >> elementDOUBLE;
	push_front(arrayDOUBLE, length, elementDOUBLE);
	Print(arrayDOUBLE, length);

	cout << "Добавление элемента массива по индексу." << endl;
	cout << "Введите элемент массива : ";
	cin >> elementDOUBLE;

	cout << "Введите индекс от 0 до " << length << " :";
	cin >> index;
	insert(arrayDOUBLE, length, index, elementDOUBLE);
	Print(arrayDOUBLE, length);

	cout << "Удаление элемента в конец массива." << endl;
	pop_back(arrayDOUBLE, length);
	Print(arrayDOUBLE, length);

	cout << "Удаление элемента в начале массива." << endl;
	pop_front(arrayDOUBLE, length);
	Print(arrayDOUBLE, length);

	cout << "Удаление элемента массива по индексу." << endl;
	cout << "Введите индекс от 0 до " << length << " :";
	cin >> index;
	erase(arrayDOUBLE, length, index);
	Print(arrayDOUBLE, length);
	delete[] arrayDOUBLE;

	cout << "Массив типа char. " << endl;
	cout << "Введите размер массива : ";
	cin >> length;
	char* arrayCHAR = new char[length];
	FillRand(arrayCHAR, length, 'a', 'z');
	Print(arrayCHAR, length);

	char elementCHAR;
	cout << "Добавление элемента в конец массива." << endl;
	cout << "Введите элемент массива : ";
	cin >> elementCHAR;
	push_back(arrayCHAR, length, elementCHAR);
	Print(arrayCHAR, length);

	cout << "Добавление элемента в начало массива." << endl;
	cout << "Введите элемент массива : ";
	cin >> elementCHAR;
	push_front(arrayCHAR, length, elementCHAR);
	Print(arrayCHAR, length);

	cout << "Добавление элемента массива по индексу." << endl;
	cout << "Введите элемент массива : ";
	cin >> elementCHAR;

	cout << "Введите индекс от 0 до " << length << " :";
	cin >> index;
	insert(arrayCHAR, length, index, elementCHAR);
	Print(arrayCHAR, length);

	cout << "Удаление элемента в конец массива." << endl;
	pop_back(arrayCHAR, length);
	Print(arrayCHAR, length);

	cout << "Удаление элемента в начале массива." << endl;
	pop_front(arrayCHAR, length);
	Print(arrayCHAR, length);

	cout << "Удаление элемента массива по индексу." << endl;
	cout << "Введите индекс от 0 до " << length << " :";
	cin >> index;
	erase(arrayCHAR, length, index);
	Print(arrayCHAR, length);
	delete[] arrayCHAR;

	size_t rows, columns;
	cout << "Матрица INT" << endl;
	cout << "Введите колличество строк матрицы : ";
	cin >> rows;
	cout << "Введите колличество столбцов матрицы : ";
	cin >> columns;
	int** matrixINT = allocate<int>(rows, columns);
	RandMatrix(matrixINT, rows, columns);
	PrintMatrix(matrixINT, rows, columns);

	cout << "Добавляет последнею строку матрицы" << endl;
	push_row_back(matrixINT, rows, columns);
	PrintMatrix(matrixINT, rows, columns);
	cout << "Удаляет последнею строку матрицы" << endl;
	pop_row_back(matrixINT, rows, columns);
	PrintMatrix(matrixINT, rows, columns);

	cout << "Добавляет первую (нулевую) строку матрицы" << endl;
	push_row_front(matrixINT, rows, columns);
	PrintMatrix(matrixINT, rows, columns);
	cout << "Удаляет первую (нулевую) строку матрицы" << endl;
	pop_row_front(matrixINT, rows);
	PrintMatrix(matrixINT, rows, columns);

	cout << "Добавляет строку матрицы" << endl;
	cout << "Введите индекс строки : ";
	cin >> index;
	insert_row(matrixINT, rows, columns, index);
	PrintMatrix(matrixINT, rows, columns);
	cout << "Удаляет строку матрицы" << endl;
	cout << "Введите индекс строки : ";
	cin >> index;
	erase_row(matrixINT, rows, index);
	PrintMatrix(matrixINT, rows, columns);

	cout << "Добавляет последнею колонку матрицы" << endl;
	push_col_back(matrixINT, rows, columns);
	PrintMatrix(matrixINT, rows, columns);
	cout << "Удаляет последнею колонку матрицы" << endl;
	pop_col_back(matrixINT, rows, columns);
	PrintMatrix(matrixINT, rows, columns);

	cout << "Добавляет первую (нулевую) колонку матрицы" << endl;
	push_col_front(matrixINT, rows, columns);
	PrintMatrix(matrixINT, rows, columns);
	cout << "Удаляет первую (нулевую) колонку матрицы" << endl;
	pop_col_front(matrixINT, rows, columns);
	PrintMatrix(matrixINT, rows, columns);

	cout << "Добавляет колонку матрицы" << endl;
	cout << "Введите индекс колонки : ";
	cin >> index;
	insert_col(matrixINT, rows, columns, index);
	PrintMatrix(matrixINT, rows, columns);
	cout << "Удаление колонки матрицы" << endl;
	cout << "Введите индекс колонки : ";
	cin >> index;
	erase_col(matrixINT, rows, columns, index);
	PrintMatrix(matrixINT, rows, columns);

	clear(matrixINT, rows, columns);

	cout << "Матрица DOUBLE" << endl;
	cout << "Введите колличество строк матрицы : ";
	cin >> rows;
	cout << "Введите колличество столбцов матрицы : ";
	cin >> columns;
	double** matrixDOUBLE = allocate<double>(rows, columns);
	RandMatrix(matrixDOUBLE, rows, columns, 1, 10, 2);
	PrintMatrix(matrixDOUBLE, rows, columns);

	cout << "Добавляет последнею строку матрицы" << endl;
	push_row_back(matrixDOUBLE, rows, columns);
	PrintMatrix(matrixDOUBLE, rows, columns);
	cout << "Удаляет последнею строку матрицы" << endl;
	pop_row_back(matrixDOUBLE, rows, columns);
	PrintMatrix(matrixDOUBLE, rows, columns);

	cout << "Добавляет первую (нулевую) строку матрицы" << endl;
	push_row_front(matrixDOUBLE, rows, columns);
	PrintMatrix(matrixDOUBLE, rows, columns);
	cout << "Удаляет первую (нулевую) строку матрицы" << endl;
	pop_row_front(matrixDOUBLE, rows);
	PrintMatrix(matrixDOUBLE, rows, columns);

	cout << "Добавляет строку матрицы" << endl;
	cout << "Введите индекс строки : ";
	cin >> index;
	insert_row(matrixDOUBLE, rows, columns, index);
	PrintMatrix(matrixDOUBLE, rows, columns);
	cout << "Удаляет строку матрицы" << endl;
	cout << "Введите индекс строки : ";
	cin >> index;
	erase_row(matrixDOUBLE, rows, index);
	PrintMatrix(matrixDOUBLE, rows, columns);

	cout << "Добавляет последнею колонку матрицы" << endl;
	push_col_back(matrixDOUBLE, rows, columns);
	PrintMatrix(matrixDOUBLE, rows, columns);
	cout << "Удаляет последнею колонку матрицы" << endl;
	pop_col_back(matrixDOUBLE, rows, columns);
	PrintMatrix(matrixDOUBLE, rows, columns);

	cout << "Добавляет первую (нулевую) колонку матрицы" << endl;
	push_col_front(matrixDOUBLE, rows, columns);
	PrintMatrix(matrixDOUBLE, rows, columns);
	cout << "Удаляет первую (нулевую) колонку матрицы" << endl;
	pop_col_front(matrixDOUBLE, rows, columns);
	PrintMatrix(matrixDOUBLE, rows, columns);

	cout << "Добавляет колонку матрицы" << endl;
	cout << "Введите индекс колонки : ";
	cin >> index;
	insert_col(matrixDOUBLE, rows, columns, index);
	PrintMatrix(matrixDOUBLE, rows, columns);
	cout << "Удаление колонки матрицы" << endl;
	cout << "Введите индекс колонки : ";
	cin >> index;
	erase_col(matrixDOUBLE, rows, columns, index);
	PrintMatrix(matrixDOUBLE, rows, columns);

	clear(matrixDOUBLE, rows, columns);
	cout << "Матрица CHAR" << endl;
	cout << "Введите колличество строк матрицы : ";
	cin >> rows;
	cout << "Введите колличество столбцов матрицы : ";
	cin >> columns;
	char** matrixCHAR = allocate<char>(rows, columns);
	RandMatrix(matrixCHAR, rows, columns, 'a', 'z');
	PrintMatrix(matrixCHAR, rows, columns);

	cout << "Добавляет последнею строку матрицы" << endl;
	push_row_back(matrixCHAR, rows, columns);
	PrintMatrix(matrixCHAR, rows, columns);
	cout << "Удаляет последнею строку матрицы" << endl;
	pop_row_back(matrixCHAR, rows, columns);
	PrintMatrix(matrixCHAR, rows, columns);

	cout << "Добавляет первую (нулевую) строку матрицы" << endl;
	push_row_front(matrixCHAR, rows, columns);
	PrintMatrix(matrixCHAR, rows, columns);
	cout << "Удаляет первую (нулевую) строку матрицы" << endl;
	pop_row_front(matrixCHAR, rows);
	PrintMatrix(matrixCHAR, rows, columns);

	cout << "Добавляет строку матрицы" << endl;
	cout << "Введите индекс строки : ";
	cin >> index;
	insert_row(matrixCHAR, rows, columns, index);
	PrintMatrix(matrixCHAR, rows, columns);
	cout << "Удаляет строку матрицы" << endl;
	cout << "Введите индекс строки : ";
	cin >> index;
	erase_row(matrixCHAR, rows, index);
	PrintMatrix(matrixCHAR, rows, columns);

	cout << "Добавляет последнею колонку матрицы" << endl;
	push_col_back(matrixCHAR, rows, columns);
	PrintMatrix(matrixCHAR, rows, columns);
	cout << "Удаляет последнею колонку матрицы" << endl;
	pop_col_back(matrixCHAR, rows, columns);
	PrintMatrix(matrixCHAR, rows, columns);

	cout << "Добавляет первую (нулевую) колонку матрицы" << endl;
	push_col_front(matrixCHAR, rows, columns);
	PrintMatrix(matrixCHAR, rows, columns);
	cout << "Удаляет первую (нулевую) колонку матрицы" << endl;
	pop_col_front(matrixCHAR, rows, columns);
	PrintMatrix(matrixCHAR, rows, columns);

	cout << "Добавляет колонку матрицы" << endl;
	cout << "Введите индекс колонки : ";
	cin >> index;
	insert_col(matrixCHAR, rows, columns, index);
	PrintMatrix(matrixCHAR, rows, columns);
	cout << "Удаление колонки матрицы" << endl;
	cout << "Введите индекс колонки : ";
	cin >> index;
	erase_col(matrixCHAR, rows, columns, index);
	PrintMatrix(matrixCHAR, rows, columns);

	clear(matrixCHAR, rows, columns);


	return 0;
}

