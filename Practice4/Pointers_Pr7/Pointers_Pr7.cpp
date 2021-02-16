/*
	Покажчики. Приклад 7
В одновимірному динамічному масиві знайти
індекс і адресу максимального елемента
використовуючи абсолютну адресацію
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
	// Покажчик на максимальний елемент
	int* pMax;

	// Заповнення масиву
	cout << "Початковий масив: \n";
	for (int i = 0; i < SIZE; i++)
	{
		*pArr = rand() % 25;
		cout << i << " " << pArr << " ";
		cout << *pArr << endl;
		pArr++;
	}

	// Індекс в масиві
	int iMax, i; 
	// Пошук максимального елемента
	for (i = 0, iMax = 0, pArr = pArr_start,
		pMax = pArr_start; i < SIZE; i++)
	{
		if (*pArr > *pMax) 
		{
			pMax = pArr;
			iMax = i;
		}
		pArr++;
	}
	cout << "Максимальный элемент:\n";
	cout << iMax << " " << pMax << " ";
	cout << *pMax << endl;

	// Повернення покажчика на початок масиву знову
	pArr = pArr_start;
	// Звільнення пам'яті
	delete[] pArr;
}