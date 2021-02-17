/*
	Покажчики. Приклад 10
Перевірити, чи є масив А
зростаючою послідовністю
*/

#include <iostream>
#include <time.h>       /* time */
#include <Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	// Встановлення розміру масиву
	const int SIZE = 6;
	// Завдання масиву
	int A[SIZE] = { 5, 8, 10, 11, 13, 18 };
	// Введення змінної-ознаки зростаючої послідовності
	int H = 0;
	// Оголошення покажчика на елемент масиву
	int* p;
	// Установка покажчика на початок масиву
	p = A;
	do
	{	// Перевірка на зростання
		if (*p < *(p + 1)) H = 1;
		else
		{
			H = 0; break;
		}
		p++;
	} while ((p < A + SIZE - 1));

	// Виведення результату
	switch (H)
	{
	case 1: cout << "Масив є зростаючою";
		cout << " послідовністю" << endl; break;
	case 0: cout << "Масив не є зростаючою";
		cout << " послідовністю" << endl; break;
	default:
		break;
	}
}