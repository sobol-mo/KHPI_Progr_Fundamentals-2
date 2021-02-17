/*
	Покажчики. Приклад 8
В одновимірному динамічному масиві поміняти місцями
останній і мінімальний елеманти
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
	int SIZE = 5;

	// Резервування місця в пам'яті під масив
	// з int елементів в кількості SIZE
	int* pArr = new int[SIZE];
	// Запам'ятовування початку масиву
	int* pArr_start = pArr;
	// Покажчик на мінімальний елемент
	int* pMin;

	// Заповнення масиву
	cout << "Початковий масив: \n";
	for (int i = 0; i < SIZE; i++)
	{
		*pArr = rand() % 10 - 5;
		cout << i << " " << pArr << " ";
		cout << *pArr << endl;
		pArr++;
	}

	// Тимчасова змінна для обміну
	int temp, i, iMin;
	// Пошук мінімального елемента
	for (i = 0, iMin = 0, pMin = pArr_start,
		pArr = pArr_start; i < SIZE; i++)
	{
		if (*pArr < *pMin) { pMin = pArr; iMin = i; }
		pArr++;
	}
	cout << "Мінімальний елемент:\n";
	cout << iMin << " " << pMin << " ";
	cout << *pMin << endl;
	// Повернення покажчика на початок масиву знову
	pArr = pArr_start;
	// Обмін
	temp = *pMin;
	*pMin = *(pArr + SIZE - 1);
	*(pArr + SIZE - 1) = temp;

	// Друк результату
	cout << "Результуючий масив: \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << i << " " << pArr << " ";
		cout << *pArr << endl;
		pArr++;
	}

	// Повернення покажчика на початок масиву знову
	pArr = pArr_start;
	// Звільнення пам'яті
	delete[] pArr;
}