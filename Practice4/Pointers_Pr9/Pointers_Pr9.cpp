/*
	Указники. Приклад 9
З негативних елементів одновимірного динамічного
масиву А сформувати одновимірний динамічний масив В
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
	int SIZE = 10;

	// Резервування місця в пам'яті під масив
	// з int елементів в кількості SIZE
	int* pArr_A = new int[SIZE];
	// Запам'ятовування початку масиву A
	int* pArr_A_start = pArr_A;

	// Заповнення масиву
	cout << "Початковий масив А : \n";
	for (int i = 0; i < SIZE; i++)
	{
		*pArr_A = rand() % 10 - 5;
		cout << i << " " << pArr_A << " ";
		cout << *pArr_A << endl;
		pArr_A++;
	}

	// Визначення кількості від'ємних елементів
	int k = 0;
	for (pArr_A = pArr_A_start;
		pArr_A < pArr_A_start + SIZE; pArr_A++)
	{
		if (*pArr_A < 0) k++;
	}
	cout << "Кількість від'ємних елементів : ";
	cout << k << endl;

	// Створення масиву В розміром k
	int* pArr_B = new int[k];
	// Запам'ятовування початку масиву B
	int* pArr_B_start = pArr_B;
	for (pArr_A = pArr_A_start;
		pArr_A < pArr_A_start + SIZE; pArr_A++)
	{
		if (*pArr_A < 0)
		{
			// Копіювання від'ємного елементу з А в В
			*pArr_B = *pArr_A;
			// Перехід на наступний елемент масиву В
			pArr_B++;
		}
	}

	// Друк результату
	cout << "Результуючий масив В: \n";
	pArr_B = pArr_B_start;
	for (int i = 0; i < k; i++)
	{
		cout << i << " " << pArr_B << " ";
		cout << *pArr_B << endl;
		pArr_B++;
	}

	// Повернення покажчика на початок масиву
	pArr_A = pArr_A_start;
	pArr_B = pArr_B_start;
	// Звільнення пам'яті
	delete[] pArr_A;
	delete[] pArr_B;
}