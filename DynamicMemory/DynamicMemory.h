#pragma once
#include"stdafx.h"
template<typename T> void push_back(T*& array, size_t& length, T element); //��������� �������� � ����� �������
template<typename T> void push_front(T*& array, size_t& length, T element); //��������� �������� � ������ �������
template<typename T> void insert(T*& array, size_t& length, size_t position, T element); //��������� �������� � ������ �� ���������� �������
template<typename T> void pop_back(T*& array, size_t& length); //������� ��������� ������� �� �������
template<typename T> void pop_front(T*& array, size_t& length); //������� ������� ������� �� �������
template<typename T> void erase(T*& array, size_t& length, size_t position); //������� �������� �� ������� �� ���������� �������
template<typename T> T** allocate(size_t rows, size_t columns); //�������� ������ ��� ��������� ������������ ������
template<typename T> void clear(T** matrix, size_t rows, size_t columns); //������� ������, ���������� ��������� ������������ ��������
template<typename T> void push_row_back(T**& matrix, size_t& rows, size_t columns);//��������� ������ � ����� �������
template<typename T> void push_row_front(T**& matrix, size_t& rows, size_t columns);//��������� ������ � ������ �������
template<typename T> void push_col_back(T**& matrix, size_t rows, size_t& columns);//��������� ������� � ����� �������
template<typename T> void push_col_front(T**& matrix, size_t rowns, size_t& columns);//��������� ������� � ������ �������
template<typename T> void pop_row_back(T**& matrix, size_t& rows, size_t columns);		//������� ������ � ����� �������
template<typename T> void pop_row_front(T**& matrix, size_t& rows);		//������� ������ � ������ �������
template<typename T> void pop_col_back(T**& matrix, size_t rows, size_t& columns);		//������� ������� � ����� �������
template<typename T> void pop_col_front(T**& matrix, size_t rows, size_t& columns);		//������� ������� � ������ �������
template<typename T> void insert_row(T**& matrix, size_t& rows, size_t columns, size_t index);//��������� ������ � ��������� ������������ ������ �� ���������� �������
template<typename T> void erase_row(T**& matrix, size_t& rows, size_t index);		//������� ������ �� ���������� ������������� ������� �� ���������� �������
template<typename T> void insert_col(T**& matrix, size_t rows, size_t& columns, size_t index);	//��������� ������� � ��������� ������������ ������ �� ���������� �������
template<typename T> void erase_col(T**& matrix, size_t rows, size_t& columns, size_t index);		//������� ������� �� ���������� ������������� ������� �� ���������� �������
template<typename T> void PrintMatrix(T** matrix, size_t rows, size_t columns);
