/*
	Указатели. Пример 8
	В одномерном динамическом массиве поменять местами
	последний и минимальный элеманты
*/

#include <iostream>
#include <time.h>       /* time */

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	// Установка размера массива
	int SIZE = 5;

	// Резервирование места в памяти под массив из int элементов
	// в количестве SIZE
	int* pArr = new int[SIZE];
	// Запоминание начала массива
	int* pArr_start = pArr;
	// Указатель на минимальный элемент
	int* pMin;

	// Заполнение массива
	cout << "Исходный массив: \n";
	for (int i = 0; i < SIZE; i++)
	{
		*pArr = rand() % 10 - 5;
		cout << i << " " << pArr << " " << *pArr << endl;
		pArr++;
	}

	// Временная переменная для обмена
	int temp, i, iMin;
	// Поиск минимального элемента
	for (i = 0, iMin = 0, pMin = pArr_start, pArr = pArr_start; i < SIZE; i++)
	{
		if (*pArr < *pMin) { pMin = pArr; iMin = i; }
		pArr++;
	}
	cout << "Минимальный элемент:\n";
	cout << iMin << " " << pMin << " " << *pMin << endl;
	// Возврат указателя на начало массива опять
	pArr = pArr_start;
	// Обмен
	temp = *pMin;
	*pMin = *(pArr + SIZE - 1);
	*(pArr + SIZE - 1) = temp;

	// Печать результата
	cout << "Результатирующий массив: \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << i << " " << pArr << " " << *pArr << endl;
		pArr++;
	}

	// Возврат указателя на начало массива опять
	pArr = pArr_start;
	// Освобождение памяти
	delete[] pArr;
}