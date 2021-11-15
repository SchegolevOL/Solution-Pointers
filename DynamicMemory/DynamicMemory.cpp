#include"DynamicMemory.h"

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
	T** matrix = new T * [rowns];
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
	T* tmp = new T[columns]{};
	push_back(matrix, rows, tmp);
}

template <typename T> void push_row_front(T**& matrix, size_t& rows, size_t columns)//Добавляет строку в начало массива---
{
	T* tmp = new T[columns]{};
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
	delete[] matrix[rows - 1];
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

