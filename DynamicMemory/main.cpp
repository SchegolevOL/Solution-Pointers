/*void FillRand(???)		//���������� ������� ���������� �������++
void Print(???)			//����� ������� �� �����++

??? push_back(???);		//��������� �������� � ����� �������++
??? push_front(???);	//��������� �������� � ������ �������++
??? insert(???);		//��������� �������� � ������ �� ���������� �������++
??? pop_back(???);		//������� ��������� ������� �� �������++
??? pop_front(???);		//������� ������� ������� �� �������++
??? erase(???);			//������� �������� �� ������� �� ���������� �������++

??? allocate(???);		//�������� ������ ��� ��������� ������������ ������++
??? clear(???);			//������� ������, ���������� ��������� ������������ ��������++
??? push_row_back(???);		//��������� ������ � ����� �������++
??? push_row_front(???);	//��������� ������ � ������ �������++
??? insert_row(???);	//��������� ������ � ��������� ������������ ������ �� ���������� �������++
??? pop_row_back(???);		//������� ������ � ����� �������++
??? pop_row_front(???);		//������� ������ � ������ �������++
??? erase_row(???);		//������� ������ �� ���������� ������������� ������� �� ���������� �������++
??? push_col_back(???);		//��������� ������� � ����� �������++
??? push_col_front(???);	//��������� ������� � ������ �������++
??? insert_col(???);	//��������� ������� � ��������� ������������ ������ �� ���������� �������++
??? pop_col_back(???);		//������� ������� � ����� �������++
??? pop_col_front(???);		//������� ������� � ������ �������++
??? erase_col(???);		//������� ������� �� ���������� ������������� ������� �� ���������� �������
*/
#include <iostream>
#include<Windows.h>
#include<time.h>
#include <stdlib.h>

using namespace std;

void FillRand(int* Array, int length, int begin = 1, int end = 9);//���������� ������� ���������� �������
void Print(const int* arr, size_t length); //����� ������� �� �����
void push_back(int** array, size_t& length, int element); //��������� �������� � ����� �������
void push_front(int** array, size_t& length, int element); //��������� �������� � ������ �������
void insert(int** array, size_t& length, size_t position, int element); //��������� �������� � ������ �� ���������� �������
void pop_back(int** array, size_t& length); //������� ��������� ������� �� �������
void pop_front(int** array, size_t& length); //������� ������� ������� �� �������
void erase(int** array, size_t& length, size_t position); //������� �������� �� ������� �� ���������� �������
int** allocate(size_t rows, size_t columns); //�������� ������ ��� ��������� ������������ ������
void clear(int** matrix, size_t rows, size_t columns); //������� ������, ���������� ��������� ������������ ��������
int** push_row_back(int** matrix, size_t& rows, size_t columns);//��������� ������ � ����� �������
int** push_row_front(int** matrix, size_t& rows, size_t columns);//��������� ������ � ������ �������
void PrintMatrix(int** matrix, size_t rows, size_t columns);
void RandMatrix(int** Matrix, size_t rows, size_t columns, int begin = 1, int end = 9);
int** push_col_back(int** matrix, size_t rows, size_t& columns);//��������� ������� � ����� �������
int** push_col_front(int** matrix, size_t rowns, size_t& columns);//��������� ������� � ������ �������
int** pop_row_back(int** matrix, size_t& rows, size_t columns);		//������� ������ � ����� �������
int** pop_row_front(int** matrix, size_t& rows, size_t columns);		//������� ������ � ������ �������
int** pop_col_back(int** matrix, size_t rows, size_t& columns);		//������� ������� � ����� �������
int** pop_col_front(int** matrix, size_t rows, size_t& columns);		//������� ������� � ������ �������
int** insert_row(int** matrix, size_t& rows, size_t columns, size_t index);//��������� ������ � ��������� ������������ ������ �� ���������� �������
int** erase_row(int** matrix, size_t& rows, size_t columns, size_t index);		//������� ������ �� ���������� ������������� ������� �� ���������� �������
int** insert_col(int** matrix, size_t rows, size_t& columns, size_t index);	//��������� ������� � ��������� ������������ ������ �� ���������� �������
int** erase_col(int** matrix, size_t rows, size_t& columns, size_t index);		//������� ������� �� ���������� ������������� ������� �� ���������� �������




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	size_t index;
	size_t length;
	cout << "������� ������ ������� : ";
	cin >> length;
	int* array = new int[length];
	FillRand(array, length, 1, 10);
	Print(array, length);

	int element;
	cout << "���������� �������� � ����� �������." << endl;
	cout << "������� ������� ������� : ";
	cin >> element;
	push_back(&array, length, element);
	Print(array, length);

	cout << "���������� �������� � ������ �������." << endl;
	cout << "������� ������� ������� : ";
	cin >> element;
	push_front(&array, length, element);
	Print(array, length);

	cout << "���������� �������� ������� �� �������." << endl;
	cout << "������� ������� ������� : ";
	cin >> element;

	cout << "������� ������ �� 0 �� " << length << " :";
	cin >> index;
	insert(&array, length, index, element);
	Print(array, length);

	cout << "�������� �������� � ����� �������." << endl;
	pop_back(&array, length);
	Print(array, length);

	cout << "�������� �������� � ������ �������." << endl;
	pop_front(&array, length);
	Print(array, length);

	cout << "�������� �������� ������� �� �������." << endl;
	cout << "������� ������ �� 0 �� " << length << " :";
	cin >> index;
	erase(&array, length, index);
	Print(array, length);
	delete[] array;

	/*------------------------------------------------------*/

	size_t rows, columns;
	cout << "������� ����������� ����� ������� : ";
	cin >> rows;
	cout << "������� ����������� �������� ������� : ";
	cin >> columns;
	int** matrix = allocate(rows, columns);
	RandMatrix(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);

	cout << "��������� ��������� ������ �������" << endl;
	matrix = push_row_back(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);
	cout << "������� ��������� ������ �������" << endl;
	matrix = pop_row_back(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);

	cout << "��������� ������ (�������) ������ �������" << endl;
	matrix = push_row_front(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);
	cout << "������� ������ (�������) ������ �������" << endl;
	matrix = pop_row_front(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);

	cout << "��������� ������ �������" << endl;
	cout << "������� ������ ������ : ";
	cin >> index;
	matrix = insert_row(matrix, rows, columns, index);
	PrintMatrix(matrix, rows, columns);
	cout << "������� ������ �������" << endl;
	cout << "������� ������ ������ : ";
	cin >> index;
	matrix = erase_row(matrix, rows, columns, index);
	PrintMatrix(matrix, rows, columns);

	cout << "��������� ��������� ������� �������" << endl;
	matrix = push_col_back(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);
	cout << "������� ��������� ������� �������" << endl;
	matrix = pop_col_back(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);

	cout << "��������� ������ (�������) ������� �������" << endl;
	matrix = push_col_front(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);
	cout << "������� ������ (�������) ������� �������" << endl;
	matrix = pop_col_front(matrix, rows, columns);
	PrintMatrix(matrix, rows, columns);

	cout << "��������� ������� �������" << endl;
	cout << "������� ������ ������� : ";
	cin >> index;
	matrix = insert_col(matrix, rows, columns, index);
	PrintMatrix(matrix, rows, columns);
	cout << "�������� ������� �������" << endl;
	cout << "������� ������ ������� : ";
	cin >> index;
	matrix = erase_col(matrix, rows, columns, index);
	PrintMatrix(matrix, rows, columns);

	clear(matrix, rows, columns);

	return 0;
}

void FillRand(int* Array, int length, int begin, int end)//���������� ������� ���������� �������
{
	for (size_t i = 0; i < length; i++)
		*(Array + i) = rand() % (end - begin + 1) + begin;
}

void Print(const int* arr, size_t length)//����� ������� �� �����
{
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void push_back(int** array, size_t& length, int element)//��������� �������� � ����� �������
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

void push_front(int** array, size_t& length, int element)//��������� �������� � ������ �������
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

void insert(int** array, size_t& length, size_t position, int element)//��������� �������� � ������ �� ���������� �������
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

void pop_back(int** array, size_t& length)//������� ��������� ������� �� �������
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

void pop_front(int** array, size_t& length)//������� ������� ������� �� �������
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

void erase(int** array, size_t& length, size_t position)//������� �������� �� ������� �� ���������� �������
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

int** allocate(size_t rowns, size_t columns)//�������� ������ ��� ��������� ������������ ������
{
	int** matrix = new int* [rowns];
	for (size_t i = 0; i < rowns; i++)
		matrix[i] = new int[columns];
	return matrix;
}

void clear(int** matrix, size_t rows, size_t columns)//������� ������, ���������� ��������� ������������ ��������
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

int** push_row_front(int** matrix, size_t& rows, size_t columns)//��������� ������ � ������ �������---
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

int** push_col_back(int** matrix, size_t rows, size_t& columns)//��������� ������� � ����� �������
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

int** push_col_front(int** matrix, size_t rows, size_t& columns)//��������� ������� � ������ �������
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

int** pop_row_back(int** matrix, size_t& rows, size_t columns)//������� ������ � ����� �������
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

int** pop_row_front(int** matrix, size_t& rows, size_t columns)		//������� ������ � ������ �������
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

int** pop_col_back(int** matrix, size_t rows, size_t& columns)//������� ������� � ����� �������
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

int** pop_col_front(int** matrix, size_t rows, size_t& columns)		//������� ������� � ������ �������
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

int** insert_row(int** matrix, size_t& rows, size_t columns, size_t index)//��������� ������ � ��������� ������������ ������ �� ���������� �������
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

int** erase_row(int** matrix, size_t& rows, size_t columns, size_t index) //������� ������ �� ���������� ������������� ������� �� ���������� �������
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

int** insert_col(int** matrix, size_t rows, size_t& columns, size_t index)	//��������� ������� � ��������� ������������ ������ �� ���������� �������
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

int** erase_col(int** matrix, size_t rows, size_t& columns, size_t index)		//������� ������� �� ���������� ������������� ������� �� ���������� �������
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