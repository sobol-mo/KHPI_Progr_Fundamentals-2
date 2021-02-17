/*
	Покажчики. Приклад 6
В одновимірному динамічному масиві порахувати кількість
позитивних елементів не використовуючи індексацію
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
	// Кількість позитивних елементів
	int S = 0;			

	// Резервування місця в пам'яті під масив
	// з int елементів в кількості SIZE
	int* pArr = new int[SIZE];
	// Запам'ятовування початку масиву
	int* pArr_start = pArr;

	// Заповнення масиву без використання індексації
	cout << "Початковий масив: \n ";
	for (; pArr < pArr_start + SIZE; pArr++)
	{
		*pArr = rand() % 100 - 50;
		cout << *pArr << "\t";
	}

	// Підрахунок позитивних елементів
	for (pArr = pArr_start; 
		pArr < pArr_start + SIZE; pArr++)
	{
		if (*pArr > 0) S++;
	}
	cout << "\nКількість позитивних елементів: ";
	cout << S << endl;

	// Повернення покажчика на початок масиву знову
	pArr = pArr_start;
	// Звільнення пам'яті
	delete[] pArr;
}