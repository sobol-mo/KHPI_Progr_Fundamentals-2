/*
	Покажчики. Приклад 17
Покажчик на функцію
Зробити 3 функції
f1 - повертає подвійну значення аргументу
f2 - повертає 0, якщо аргумент парний,
і повертає сам аргумент, якщо він непарний
map - використовуючи функції f1, f2
змінює значення елементів в масиві
*/

#include <iostream>
#include <Windows.h>
using namespace std;

int f1(int a) { return 2 * a; }
int f2(int a) {
	if (a % 2 == 0) return 0;
	else return a;
}

void map(int* mas, int n, int (*p)(int))
{
	for (int i = 0; i < n; i++)
	{
		mas[i] = p(mas[i]);
		// Чи
		// *(mas + i) = p(*(mas + i))
		// Це означає
		// mas[i] = f1(mas[i]); // чи 
		// mas[i] = f2(mas[i]);
	}
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int mas[] = { 1, 2, 3, 4, 5, 6 };

	// Виклик функції map з функцією f2
	map(mas, 6, f2);
	// Виведення результату:		1 0 3 0 5 0
	cout << "Функція f2" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << mas[i] << "\t";
	}

	// Виклик функції map з функцією f1
	cout << endl << "Функція f1" << endl;
	map(mas, 6, f1);
	// Виведення результату:		2 0 6 0 10 0
	for (int i = 0; i < 6; i++)
	{
		cout << mas[i] << "\t";
	}
}