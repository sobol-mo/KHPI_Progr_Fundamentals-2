/*
	Покажчики. Приклад 11
Використовуючи масив покажчиків
замінити парні числа на 0
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
	// Установка розміру масиву
	const int SIZE = 6;
	// Завдання масиву
	int A[SIZE];
	cout << "Початковий масив: \t";
	for (int i = 0; i < SIZE; i++)
	{
		A[i] = rand() % 10;
		cout << A[i] << " ";
	}
	cout << endl;
	// Створення масиву покажчиків
	// на елементи масиву А
	int* Arr_p[SIZE];
	// Заповнення масиву покажчиками
	for (int i = 0; i < SIZE; i++)
	{
		Arr_p[i] = &A[i];
	}
	// Заміна парних елементів на 0
	// і друк результату
	cout << "Масив результату: \t";
	for (int i = 0; i < SIZE; i++)
	{
		if (*Arr_p[i] % 2 == 0) *Arr_p[i] = 0;
		cout << *Arr_p[i] << " ";
	}
}