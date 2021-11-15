/*Создать ветку DynamicOverload, и в этой ветке перегрузить функции из предыдущего задания 
для одномерных и двумерных массивов типа double и char.
Для каждой функции написать проверочный код.
(Функции можно шаблонизировать, только тогда ветка будет DynamicTemplated)

*/
#include <iostream>
#include<Windows.h>
#include<time.h>
#include <stdlib.h>

using namespace std;

void FillRand(int* Array, int length, int begin = 1, int end = 9);//Заполнение массива случайными числами
void FillRand(double* Array, int length, int begin, int end, int acc);
void FillRand(char* Array, size_t length, char begin = 0, char end = 255);
template<typename T> void Print(const T* arr, size_t length);//Вывод массива на экран
template<typename T>void push_back(T*& array, size_t& length, T element); //Добавляет значение в конец массива
template<typename T> void push_front(T*& array, size_t& length, T element); //Добавляет значение в начало массива
template<typename T> void insert(T*& array, size_t& length, size_t position, T element); //Добавляет значение в массив по указанному индексу
template<typename T> void pop_back(T*& array, size_t& length); //Удаляет последний элемент из массива
template<typename T> void pop_front(T*& array, size_t& length); //Удаляет нулевой элемент из массива
template<typename T> void erase(T*& array, size_t& length, size_t position); //Удаляет значение из массива по указанному индексу
template<typename T> T** allocate(size_t rows, size_t columns); //Выделяет память под двумерный динамический массив
template<typename T> void clear(T** matrix, size_t rows, size_t columns); //Очищает память, занимаемую двумерным динамическим массивом
template<typename T> void push_row_back(T**& matrix, size_t& rows, size_t columns);//Добавляет строку в конец массива
template<typename T> void push_row_front(T**& matrix, size_t& rows, size_t columns);//Добавляет строку в начало массива
template<typename T> void push_col_back(T**& matrix, size_t rows, size_t& columns);//Добавляет столбец в конец массива
template<typename T> void push_col_front(T**& matrix, size_t rowns, size_t& columns);//Добавляет столбец в начало массива
template<typename T> void pop_row_back(T**& matrix, size_t& rows, size_t columns);		//Удаляет строку с конец массива
template<typename T> void pop_row_front(T**& matrix, size_t& rows);		//Удаляет строку с начала массива
template<typename T> void pop_col_back(T**& matrix, size_t rows, size_t& columns);		//Удаляет столбец с конец массива
template<typename T> void pop_col_front(T**& matrix, size_t rows, size_t& columns);		//Удаляет столбец с начала массива
template<typename T> void insert_row(T**& matrix, size_t& rows, size_t columns, size_t index);//Добавляет строку в двумерный динамический массив по указанному индексу
template<typename T> void erase_row(T**& matrix, size_t& rows, size_t index);		//Удаляет строку из двумерного динамического массива по указанному индексу
template<typename T> void insert_col(T**& matrix, size_t rows, size_t& columns, size_t index);	//Добавляет столбец в двумерный динамический массив по указанному индексу
template<typename T> void erase_col(T**& matrix, size_t rows, size_t& columns, size_t index);		//Удаляет столбец из двумерного динамического массива по указанному индексу
template<typename T> void PrintMatrix(T** matrix, size_t rows, size_t columns);
void RandMatrix(int** Matrix, size_t rows, size_t columns, int begin = 1, int end = 9);
void RandMatrix(double** Matrix, size_t rowns, size_t columns, int begin=1, int end=9, int acc=2);
void RandMatrix(char** Matrix, size_t rowns, size_t columns, char begin=0, char end=255);

int main()
{
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

void FillRand(int* Array, int length, int begin, int end)//Заполнение массива случайными числами
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

template<typename T> void Print(const T* arr, size_t length)//Вывод массива на экран
{
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<typename T> void push_back(T*& array, size_t& length, T element)//Добавляет значение в конец массива
{
	++length;
	T* tmp = new T[length];
	for (size_t i = 0; i < length - 1; i++)
	{
		tmp[i] = array[i];
	}
	tmp[length - 1] = element;
	delete[] array;
	array = tmp;
}

template<typename T> void push_front(T*& array, size_t& length, T element)//Добавляет значение в начало массива
{
	++length;
	
	T* tmp = new T[length];
	tmp[0] = element;
	for (size_t i = 0; i < length - 1; i++)
	{
		tmp[i + 1] = array[i];
	}
	delete[] array;
	array = tmp;
}

template<typename T> void insert(T*& array, size_t& length, size_t position, T element)//Добавляет значение в массив по указанному индексу
{
	++length;
	T* tmp = new T[length];
	size_t j = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (i == position)
		{
			tmp[i] = element;
			j--;
		}
		else
			tmp[i] = array[j];
		++j;
	}
	delete[] array;
	array = tmp;
}

template<typename T> void pop_back(T*& array, size_t& length)//Удаляет последний элемент из массива
{
	length--;
	T* tmp = new T[length];
	size_t j = 0;
	for (size_t i = 0; i < length; i++)
	{
		tmp[i] = array[i];
	}
	delete[] array;
	array = tmp;
}

template<typename T> void pop_front(T*& array, size_t& length)//Удаляет нулевой элемент из массива
{
	length--;
	T* tmp = new T[length];
	for (size_t i = 0; i < length; i++)
	{
		tmp[i] = array[i + 1];
	}
	delete[] array;
	array = tmp;
}

template<typename T> void erase(T*& array, size_t& length, size_t position)//Удаляет значение из массива по указанному индексу
{
	length--;
	T* tmp = new T[length];
	size_t j = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (i == position)
		{
			j++;
		}
		tmp[i] = array[j];

		++j;
	}
	delete[] array;
	array = tmp;
}

template<typename T> T** allocate(size_t rowns, size_t columns)//Выделяет память под двумерный динамический массив
{
	T** matrix = new T* [rowns];
	for (size_t i = 0; i < rowns; i++)
		matrix[i] = new T[columns];
	return matrix;
}

template<typename T> void clear(T** matrix, size_t rows, size_t columns)//Очищает память, занимаемую двумерным динамическим массивом
{
	for (size_t i = 0; i < rows; i++)
		delete matrix[i];
	delete[] matrix;
}

template<typename T> void push_row_back(T**& matrix, size_t& rows, size_t columns)// Добавляет столбец в конец массива
{
	T* tmp = new T [columns]{};
	push_back(matrix, rows, tmp);
}

template <typename T> void push_row_front(T**& matrix, size_t& rows, size_t columns)//Добавляет строку в начало массива---
{
	T* tmp = new T [columns]{};
	push_front(matrix, rows, tmp);
}

template<typename T> void push_col_back(T**& matrix, size_t rows, size_t& columns)//Добавляет столбец в конец массива
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		T* arr = new T[tmp + 1]{};
		push_back(matrix[i], tmp, *arr);
	}
	columns++;
}

template <typename T> void push_col_front(T**& matrix, size_t rows, size_t& columns)//Добавляет столбец в начало массива
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		T* arr = new T[tmp + 1]{};
		push_front(matrix[i], tmp, *arr);
	}
	columns++;
}

template <typename T> void pop_row_back(T**& matrix, size_t& rows, size_t columns)//Удаляет строку с конец массива
{
	delete[] matrix[rows-1];
	pop_back(matrix, rows);
}

template<typename T> void pop_row_front(T**& matrix, size_t& rows)		//Удаляет строку с начала массива
{
	delete[]matrix[0];
	pop_front(matrix, rows);
}

template <typename T> void pop_col_back(T**& matrix, size_t rows, size_t& columns)//Удаляет столбец с конец массива
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		pop_back(matrix[i], tmp);
	}
	columns--;
}

template <typename T> void pop_col_front(T**& matrix, size_t rows, size_t& columns)		//Удаляет столбец с начала массива
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		pop_front(matrix[i], tmp);
	}
	columns--;
}

template <typename T> void insert_row(T**& matrix, size_t& rows, size_t columns, size_t index)//Добавляет строку в двумерный динамический массив по указанному индексу
{
	T* tmp = new T[columns]{};
	insert(matrix, rows, index, tmp);
}

template<typename T> void erase_row(T**& matrix, size_t& rows, size_t index) //Удаляет строку из двумерного динамического массива по указанному индексу
{
	delete[] matrix[index];
	erase(matrix, rows, index);
}

template<typename T> void insert_col(T**& matrix, size_t rows, size_t& columns, size_t index)	//Добавляет столбец в двумерный динамический массив по указанному индексу
{	
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		T* arr = new T[columns + 1]{};
		insert(matrix[i], tmp, index, *arr);
	}
	columns++;
}

template<typename T> void erase_col(T**& matrix, size_t rows, size_t& columns, size_t index)		//Удаляет столбец из двумерного динамического массива по указанному индексу
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		erase(matrix[i], tmp, index);
	}
	columns--;
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