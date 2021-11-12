/*void FillRand(???)		//Заполнение массива случайными числами++
void Print(???)			//Вывод массива на экран++

??? push_back(???);		//Добавляет значение в конец массива++
??? push_front(???);	//Добавляет значение в начало массива++
??? insert(???);		//Добавляет значение в массив по указанному индексу++
??? pop_back(???);		//Удаляет последний элемент из массива++
??? pop_front(???);		//Удаляет нулевой элемент из массива++
??? erase(???);			//Удаляет значение из массива по указанному индексу++

??? allocate(???);		//Выделяет память под двумерный динамический массив++
??? clear(???);			//Очищает память, занимаемую двумерным динамическим массивом++
??? push_row_back(???);		//Добавляет строку в конец массива++
??? push_row_front(???);	//Добавляет строку в начало массива++
??? insert_row(???);	//Добавляет строку в двумерный динамический массив по указанному индексу++
??? pop_row_back(???);		//Удаляет строку с конец массива++
??? pop_row_front(???);		//Удаляет строку с начала массива++
??? erase_row(???);		//Удаляет строку из двумерного динамического массива по указанному индексу++
??? push_col_back(???);		//Добавляет столбец в конец массива++
??? push_col_front(???);	//Добавляет столбец в начало массива++
??? insert_col(???);	//Добавляет столбец в двумерный динамический массив по указанному индексу++
??? pop_col_back(???);		//Удаляет столбец с конец массива++
??? pop_col_front(???);		//Удаляет столбец с начала массива++
??? erase_col(???);		//Удаляет столбец из двумерного динамического массива по указанному индексу
*/
#include <iostream>
#include<Windows.h>
#include<time.h>
#include <stdlib.h>

using namespace std;

void FillRand(int* Array, int length, int begin = 1, int end = 9);//Заполнение массива случайными числами
void FillRand(double* Array, int length, int begin, int end, int acc);
void FillRand(char* Array, int length, char begin = 0, char end = 255);

template<typename T> void Print(const T* arr, size_t length);//Вывод массива на экран

template<typename T>void push_back(T*& array, size_t& length, T element); //Добавляет значение в конец массива

template<typename T> void push_front(T*& array, size_t& length, T element); //Добавляет значение в начало массива


template<typename T> void insert(T*& array, size_t& length, size_t position, T element); //Добавляет значение в массив по указанному индексу

template<typename T> void pop_back(T*& array, size_t& length); //Удаляет последний элемент из массива

template<typename T> void pop_front(T*& array, size_t& length); //Удаляет нулевой элемент из массива


template<typename T> void erase(T*& array, size_t& length, size_t position); //Удаляет значение из массива по указанному индексу

template<typename T> T** allocate(size_t rows, size_t columns); //Выделяет память под двумерный динамический массив


template<typename T> void clear(T** matrix, size_t rows, size_t columns); //Очищает память, занимаемую двумерным динамическим массивом


template<typename T> T** push_row_back(T** matrix, size_t& rows, size_t columns);//Добавляет строку в конец массива


template<typename T> T** push_row_front(T** matrix, size_t& rows, size_t columns);//Добавляет строку в начало массива

template<typename T> T** push_col_back(T** matrix, size_t rows, size_t& columns);//Добавляет столбец в конец массива

template<typename T> T** push_col_front(T** matrix, size_t rowns, size_t& columns);//Добавляет столбец в начало массива


template<typename T> T** pop_row_back(T** matrix, size_t& rows, size_t columns);		//Удаляет строку с конец массива

template<typename T> T** pop_row_front(T** matrix, size_t& rows, size_t columns);		//Удаляет строку с начала массива

template<typename T> T** pop_col_back(T** matrix, size_t rows, size_t& columns);		//Удаляет столбец с конец массива

template<typename T> T** pop_col_front(T** matrix, size_t rows, size_t& columns);		//Удаляет столбец с начала массива


template<typename T> T** insert_row(T** matrix, size_t& rows, size_t columns, size_t index);//Добавляет строку в двумерный динамический массив по указанному индексу

template<typename T> T** erase_row(T** matrix, size_t& rows, size_t columns, size_t index);		//Удаляет строку из двумерного динамического массива по указанному индексу


template<typename T> T** insert_col(T** matrix, size_t rows, size_t& columns, size_t index);	//Добавляет столбец в двумерный динамический массив по указанному индексу


template<typename T> T** erase_col(T** matrix, size_t rows, size_t& columns, size_t index);		//Удаляет столбец из двумерного динамического массива по указанному индексу


template<typename T> void PrintMatrix(T** matrix, size_t rows, size_t columns);

void RandMatrix(int** Matrix, size_t rows, size_t columns, int begin = 1, int end = 9);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	
	size_t index;
	
	size_t length;
	/*cout << "Массив типа int. " << endl;
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
	delete[] arrayINT;*/

	/*cout << "Массив типа double. " << endl;
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
	delete[] arrayDOUBLE;*/

	/*cout << "Массив типа double. " << endl;
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
	delete[] arrayCHAR;*/

	/*size_t rows, columns;
	cout << "Введите колличество строк матрицы : ";
	cin >> rows;
	cout << "Введите колличество столбцов матрицы : ";
	cin >> columns;
	int** matrix = allocate(rows, columns);
	RandMatrix(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);

	cout << "Добавляет последнею строку матрицы" << endl;
	matrix = push_row_back(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);
	cout << "Удаляет последнею строку матрицы" << endl;
	matrix = pop_row_back(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);

	cout << "Добавляет первую (нулевую) строку матрицы" << endl;
	matrix = push_row_front(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);
	cout << "Удаляет первую (нулевую) строку матрицы" << endl;
	matrix = pop_row_front(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);

	cout << "Добавляет строку матрицы" << endl;
	cout << "Введите индекс строки : ";
	cin >> index;
	matrix = insert_row(matrix, rows, columns, index);
	PrintMatrix(matrix, rows, columns);
	cout << "Удаляет строку матрицы" << endl;
	cout << "Введите индекс строки : ";
	cin >> index;
	matrix = erase_row(matrix, rows, columns, index);
	PrintMatrix(matrix, rows, columns);

	cout << "Добавляет последнею колонку матрицы" << endl;
	matrix = push_col_back(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);
	cout << "Удаляет последнею колонку матрицы" << endl;
	matrix = pop_col_back(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);

	cout << "Добавляет первую (нулевую) колонку матрицы" << endl;
	matrix = push_col_front(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);
	cout << "Удаляет первую (нулевую) колонку матрицы" << endl;
	matrix = pop_col_front(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);

	cout << "Добавляет колонку матрицы" << endl;
	cout << "Введите индекс колонки : ";
	cin >> index;
	matrix = insert_col(matrix, rows, columns, index);
	PrintMatrix(matrix, rows, columns);
	cout << "Удаление колонки матрицы" << endl;
	cout << "Введите индекс колонки : ";
	cin >> index;
	matrix = erase_col(matrix, rows, columns, index);
	PrintMatrix(matrix, rows, columns);

	clear(matrix, rows, columns);*/

	/*cout << "Введите размер массива : ";
	cin >> length;
	double* arr_double = new double[length];
	FillRand(arr_double, length, 0, 10, 2);
	for (size_t i = 0; i < length; i++)
	{
		cout << arr_double[i]<<" ";
	}

	delete[]arr_double;*/





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
	long long b = (long long)(begin * n);
	long long e = (long long)(end * n);
	for (size_t i = 0; i < length; i++)
		*(Array + i) = (double)(rand() % (e - b + 1) + b) / n;
}

void FillRand(char* Array, int length, char begin, char end)
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

template<typename T> void push_row_back(T**& matrix, size_t& rows, size_t columns)// 
{
	T** tmp = new T* [rows + 1]{};
	for (size_t i = 0; i < rows; i++)
	{
		tmp[i] = matrix[i];
	}
	tmp[rows] = new T[columns] {};
	rows++;
	matrix = tmp;
	delete[] tmp;
}

template <typename> void push_row_front(T**& matrix, size_t& rows, size_t columns)//Добавляет строку в начало массива---
{
	T** tmp = new T* [rows + 1]{};
	for (size_t i = 1; i < rows + 1; i++)
	{
		tmp[i] = matrix[i - 1];
	}
	tmp[0] = new T[columns] {};
	rows++;
	matrix=tmp;
	delete[]tmp;
}

template<typename> void push_col_back(T**& matrix, size_t rows, size_t& columns)//Добавляет столбец в конец массива
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		T* arr = new T[tmp + 1]{};
		push_back(&matrix[i], tmp, *arr);
	}
	columns++;
}

int** push_col_front(int** matrix, size_t rows, size_t& columns)//Добавляет столбец в начало массива
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		int* arr = new int[tmp + 1]{};
		push_front(&matrix[i], tmp, *arr);
	}
	columns++;
	return matrix;
}

double** push_col_front(double** matrix, size_t rows, size_t& columns)
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		double* arr = new double[tmp + 1]{};
		push_front(&matrix[i], tmp, *arr);
	}
	columns++;
	return matrix;
}

char** push_col_front(char** matrix, size_t rows, size_t& columns)
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		char* arr = new char[tmp + 1]{};
		push_front(&matrix[i], tmp, *arr);
	}
	columns++;
	return matrix;
}

int** pop_row_back(int** matrix, size_t& rows, size_t columns)//Удаляет строку с конец массива
{
	int** tmp = new int* [rows - 1];
	for (size_t i = 0; i < rows - 1; i++)
	{
		tmp[i] = matrix[i];
	}
	rows--;
	delete[]matrix;
	return tmp;
}

double** pop_row_back(double** matrix, size_t& rows, size_t columns)
{
	double** tmp = new double* [rows - 1];
	for (size_t i = 0; i < rows - 1; i++)
	{
		tmp[i] = matrix[i];
	}
	rows--;
	delete[]matrix;
	return tmp;
}

char** pop_row_back(char** matrix, size_t& rows, size_t columns)
{
	char** tmp = new char* [rows - 1];
	for (size_t i = 0; i < rows - 1; i++)
	{
		tmp[i] = matrix[i];
	}
	rows--;
	delete[]matrix;
	return tmp;
}

int** pop_row_front(int** matrix, size_t& rows, size_t columns)		//Удаляет строку с начала массива
{
	int** tmp = new int* [rows - 1];
	for (size_t i = 0; i < rows - 1; i++)
	{
		tmp[i] = matrix[i + 1];
	}
	rows--;
	delete[]matrix;
	return tmp;
}

double** pop_row_front(double** matrix, size_t& rows, size_t columns)
{
	double** tmp = new double* [rows - 1];
	for (size_t i = 0; i < rows - 1; i++)
	{
		tmp[i] = matrix[i + 1];
	}
	rows--;
	delete[]matrix;
	return tmp;
}

char** pop_row_front(char** matrix, size_t& rows, size_t columns)
{
	char** tmp = new char* [rows - 1];
	for (size_t i = 0; i < rows - 1; i++)
	{
		tmp[i] = matrix[i + 1];
	}
	rows--;
	delete[]matrix;
	return tmp;
}

int** pop_col_back(int** matrix, size_t rows, size_t& columns)//Удаляет столбец с конец массива
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		int* arr = new int[tmp] {};
		pop_back(&matrix[i], tmp);
	}
	columns--;
	return matrix;
}

double** pop_col_back(double** matrix, size_t rows, size_t& columns)
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		double* arr = new double[tmp] {};
		pop_back(&matrix[i], tmp);
	}
	columns--;
	return matrix;
}

char** pop_col_back(char** matrix, size_t rows, size_t& columns)
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		double* arr = new double[tmp] {};
		pop_back(&matrix[i], tmp);
	}
	columns--;
	return matrix;
}

int** pop_col_front(int** matrix, size_t rows, size_t& columns)		//Удаляет столбец с начала массива
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		int* arr = new int[tmp - 1]{};
		pop_front(&matrix[i], tmp);
	}
	columns--;
	return matrix;
}

double** pop_col_front(double** matrix, size_t rows, size_t& columns)
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		double* arr = new double[tmp - 1]{};
		pop_front(&matrix[i], tmp);
	}
	columns--;
	return matrix;
}

char** pop_col_front(char** matrix, size_t rows, size_t& columns)
{
	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		char* arr = new char[tmp - 1]{};
		pop_front(&matrix[i], tmp);
	}
	columns--;
	return matrix;
}

int** insert_row(int** matrix, size_t& rows, size_t columns, size_t index)//Добавляет строку в двумерный динамический массив по указанному индексу
{
	if (index > rows)return matrix;

	int** tmp = new int* [rows + 1]{};
	for (int i = 0; i < index; i++)
		tmp[i] = matrix[i];
	for (int i = index; i < rows; i++)
		tmp[i + 1] = matrix[i];
	delete[] matrix;
	tmp[index] = new int[columns] {};
	rows++;
	return tmp;
}

double** insert_row(double** matrix, size_t& rows, size_t columns, size_t index)
{
	if (index > rows)return matrix;

	double** tmp = new double* [rows + 1]{};
	for (int i = 0; i < index; i++)
		tmp[i] = matrix[i];
	for (int i = index; i < rows; i++)
		tmp[i + 1] = matrix[i];
	delete[] matrix;
	tmp[index] = new int[columns] {};
	rows++;
	return tmp;
}

char** insert_row(char** matrix, size_t& rows, size_t columns, size_t index)
{
	if (index > rows)return matrix;

	char** tmp = new char* [rows + 1]{};
	for (int i = 0; i < index; i++)
		tmp[i] = matrix[i];
	for (int i = index; i < rows; i++)
		tmp[i + 1] = matrix[i];
	delete[] matrix;
	tmp[index] = new int[columns] {};
	rows++;
	return tmp;
}

int** erase_row(int** matrix, size_t& rows, size_t columns, size_t index) //Удаляет строку из двумерного динамического массива по указанному индексу
{
	int** tmp = new int* [rows - 1];
	if (index >= rows)return matrix;
	for (size_t i = 0; i < index; i++)
	{
		tmp[i] = matrix[i];
	}
	for (size_t i = index; i < rows; i++)
	{
		tmp[i] = matrix[i + 1];
	}
	delete[] matrix;
	rows--;
	return tmp;
}

double** erase_row(double** matrix, size_t& rows, size_t columns, size_t index)
{
	double** tmp = new double* [rows - 1];
	if (index >= rows)return matrix;
	for (size_t i = 0; i < index; i++)
	{
		tmp[i] = matrix[i];
	}
	for (size_t i = index; i < rows; i++)
	{
		tmp[i] = matrix[i + 1];
	}
	delete[] matrix;
	rows--;
	return tmp;
}
char** erase_row(char** matrix, size_t& rows, size_t columns, size_t index)
{
	char** tmp = new char* [rows - 1];
	if (index >= rows)return matrix;
	for (size_t i = 0; i < index; i++)
	{
		tmp[i] = matrix[i];
	}
	for (size_t i = index; i < rows; i++)
	{
		tmp[i] = matrix[i + 1];
	}
	delete[] matrix;
	rows--;
	return tmp;
}

int** insert_col(int** matrix, size_t rows, size_t& columns, size_t index)	//Добавляет столбец в двумерный динамический массив по указанному индексу
{
	if (index > columns) return matrix;

	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		int* arr = new int[tmp + 1]{};
		insert(&matrix[i], tmp, index, *arr);
	}
	columns++;
	return matrix;
}

double** insert_col(double** matrix, size_t rows, size_t& columns, size_t index)
{
	if (index > columns) return matrix;

	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		double* arr = new double[tmp + 1]{};
		insert(&matrix[i], tmp, index, *arr);
	}
	columns++;
	return matrix;
}

char** insert_col(char** matrix, size_t rows, size_t& columns, size_t index)
{
	if (index > columns) return matrix;

	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		char* arr = new char[tmp + 1]{};
		insert(&matrix[i], tmp, index, *arr);
	}
	columns++;
	return matrix;
}

int** erase_col(int** matrix, size_t rows, size_t& columns, size_t index)		//Удаляет столбец из двумерного динамического массива по указанному индексу
{
	if (index >= columns) return matrix;

	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		int* arr = new int[tmp - 1]{};
		erase(&matrix[i], tmp, index);
	}
	columns--;
	return matrix;
}

double** erase_col(double** matrix, size_t rows, size_t& columns, size_t index)
{
	if (index >= columns) return matrix;

	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		double* arr = new double[tmp - 1]{};
		erase(&matrix[i], tmp, index);
	}
	columns--;
	return matrix;
}

char** erase_col(char** matrix, size_t rows, size_t& columns, size_t index)
{
	if (index >= columns) return matrix;

	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		char* arr = new char[tmp - 1]{};
		erase(&matrix[i], tmp, index);
	}
	columns--;
	return matrix;
}

void PrintMatrix(int** matrix, size_t rowns, size_t columns)
{
	for (size_t i = 0; i < rowns; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void RandMatrix(int** Matrix, size_t rowns, size_t columns, int begin, int end)
{
	for (size_t i = 0; i < rowns; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			Matrix[i][j] = rand() % (end - begin + 1) + begin;

		}
	}
}