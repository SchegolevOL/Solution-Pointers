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
void Print(const int* arr, size_t length); //Вывод массива на экран
void push_back(int** array, size_t& length, int element); //Добавляет значение в конец массива
void push_front(int** array, size_t& length, int element); //Добавляет значение в начало массива
void insert(int** array, size_t& length, size_t position, int element); //Добавляет значение в массив по указанному индексу
void pop_back(int** array, size_t& length); //Удаляет последний элемент из массива
void pop_front(int** array, size_t& length); //Удаляет нулевой элемент из массива
void erase(int** array, size_t& length, size_t position); //Удаляет значение из массива по указанному индексу
int** allocate(size_t rows, size_t columns); //Выделяет память под двумерный динамический массив
void clear(int** matrix, size_t rows, size_t columns); //Очищает память, занимаемую двумерным динамическим массивом
int** push_row_back(int** matrix, size_t& rows, size_t columns);//Добавляет строку в конец массива
int** push_row_front(int** matrix, size_t& rows, size_t columns);//Добавляет строку в начало массива
void PrintMatrix(int** matrix, size_t rows, size_t columns);
void RandMatrix(int** Matrix, size_t rows, size_t columns, int begin = 1, int end = 9);
int** push_col_back(int** matrix, size_t rows, size_t& columns);//Добавляет столбец в конец массива
int** push_col_front(int** matrix, size_t rowns, size_t& columns);//Добавляет столбец в начало массива
int** pop_row_back(int** matrix, size_t& rows, size_t columns);		//Удаляет строку с конец массива
int** pop_row_front(int** matrix, size_t& rows, size_t columns);		//Удаляет строку с начала массива
int** pop_col_back(int** matrix, size_t rows, size_t& columns);		//Удаляет столбец с конец массива
int** pop_col_front(int** matrix, size_t rows, size_t& columns);		//Удаляет столбец с начала массива
int** insert_row(int** matrix, size_t& rows, size_t columns, size_t index);//Добавляет строку в двумерный динамический массив по указанному индексу
int** erase_row(int** matrix, size_t& rows, size_t columns, size_t index);		//Удаляет строку из двумерного динамического массива по указанному индексу
int** insert_col(int** matrix, size_t rows, size_t& columns, size_t index);	//Добавляет столбец в двумерный динамический массив по указанному индексу
int** erase_col(int** matrix, size_t rows, size_t& columns, size_t index);		//Удаляет столбец из двумерного динамического массива по указанному индексу




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	size_t index;
	size_t length;
	cout << "Введите размер массива : ";
	cin >> length;
	int* array = new int[length];
	FillRand(array, length, 1, 10);
	Print(array, length);

	int element;
	cout << "Добавление элемента в конец массива." << endl;
	cout << "Введите элемент массива : ";
	cin >> element;
	push_back(&array, length, element);
	Print(array, length);

	cout << "Добавление элемента в начало массива." << endl;
	cout << "Введите элемент массива : ";
	cin >> element;
	push_front(&array, length, element);
	Print(array, length);

	cout << "Добавление элемента массива по индексу." << endl;
	cout << "Введите элемент массива : ";
	cin >> element;

	cout << "Введите индекс от 0 до " << length << " :";
	cin >> index;
	insert(&array, length, index, element);
	Print(array, length);

	cout << "Удаление элемента в конец массива." << endl;
	pop_back(&array, length);
	Print(array, length);

	cout << "Удаление элемента в начале массива." << endl;
	pop_front(&array, length);
	Print(array, length);

	cout << "Удаление элемента массива по индексу." << endl;
	cout << "Введите индекс от 0 до " << length << " :";
	cin >> index;
	erase(&array, length, index);
	Print(array, length);
	delete[] array;

	/*------------------------------------------------------*/

	size_t rows, columns;
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

	clear(matrix, rows, columns);

	return 0;
}

void FillRand(int* Array, int length, int begin, int end)//Заполнение массива случайными числами
{
	for (size_t i = 0; i < length; i++)
		*(Array + i) = rand() % (end - begin + 1) + begin;
}

void Print(const int* arr, size_t length)//Вывод массива на экран
{
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void push_back(int** array, size_t& length, int element)//Добавляет значение в конец массива
{
	++length;
	int* arr = *array;
	int* tmp = new int[length];
	for (size_t i = 0; i < length - 1; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[length - 1] = element;
	*array = tmp;
	tmp = arr;
	delete[] tmp;
}

void push_front(int** array, size_t& length, int element)//Добавляет значение в начало массива
{
	++length;
	int* arr = *array;
	int* tmp = new int[length];
	tmp[0] = element;
	for (size_t i = 0; i < length - 1; i++)
	{
		tmp[i + 1] = arr[i];
	}
	*array = tmp;
	tmp = arr;
	delete[] tmp;

}

void insert(int** array, size_t& length, size_t position, int element)//Добавляет значение в массив по указанному индексу
{
	++length;
	int* arr = *array;
	int* tmp = new int[length];
	size_t j = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (i == position)
		{
			tmp[i] = element;
			j--;
		}
		else
			tmp[i] = arr[j];
		++j;
	}

	*array = tmp;
	tmp = arr;
	delete[] tmp;

}

void pop_back(int** array, size_t& length)//Удаляет последний элемент из массива
{
	length--;
	int* arr = *array;
	int* tmp = new int[length];
	size_t j = 0;
	for (size_t i = 0; i < length; i++)
	{
		tmp[i] = arr[i];
	}

	*array = tmp;
	tmp = arr;
	delete[] tmp;

}

void pop_front(int** array, size_t& length)//Удаляет нулевой элемент из массива
{
	length--;
	int* arr = *array;
	int* tmp = new int[length];
	for (size_t i = 0; i < length; i++)
	{
		tmp[i] = arr[i + 1];
	}

	*array = tmp;
	tmp = arr;
	delete[] tmp;
}

void erase(int** array, size_t& length, size_t position)//Удаляет значение из массива по указанному индексу
{
	length--;
	int* arr = *array;
	int* tmp = new int[length];
	size_t j = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (i == position)
		{
			j++;
		}
		tmp[i] = arr[j];

		++j;
	}

	*array = tmp;
	tmp = arr;
	delete[] tmp;
}

int** allocate(size_t rowns, size_t columns)//Выделяет память под двумерный динамический массив
{
	int** matrix = new int* [rowns];
	for (size_t i = 0; i < rowns; i++)
		matrix[i] = new int[columns];
	return matrix;
}

void clear(int** matrix, size_t rows, size_t columns)//Очищает память, занимаемую двумерным динамическим массивом
{
	for (size_t i = 0; i < rows; i++)
		delete matrix[i];
	delete[] matrix;
}

int** push_row_back(int** matrix, size_t& rows, size_t columns)// 
{
	int** tmp = new int* [rows + 1]{};
	for (size_t i = 0; i < rows; i++)
	{
		tmp[i] = matrix[i];
	}
	tmp[rows] = new int[columns] {};
	rows++;
	delete[] matrix;
	return tmp;
}

int** push_row_front(int** matrix, size_t& rows, size_t columns)//Добавляет строку в начало массива---
{
	int** tmp = new int* [rows + 1]{};
	for (size_t i = 1; i < rows + 1; i++)
	{
		tmp[i] = matrix[i - 1];
	}
	tmp[0] = new int[columns] {};
	rows++;
	delete[]matrix;
	return tmp;
}

int** push_col_back(int** matrix, size_t rows, size_t& columns)//Добавляет столбец в конец массива
{

	for (size_t i = 0; i < rows; i++)
	{
		size_t tmp = columns;
		int* arr = new int[tmp + 1]{};
		push_back(&matrix[i], tmp, *arr);
	}
	columns++;
	return matrix;
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