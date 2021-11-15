#pragma once
#include"stdafx.h"
template<typename T> void push_back(T*& array, size_t& length, T element); //Добавляет значение в конец массива
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
