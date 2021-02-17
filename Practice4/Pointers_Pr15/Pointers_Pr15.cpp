/*
	Покажчики. Приклад 15
Написати функцію, яка визначає суму 
і кількість негативних елементів в масиві. 
Передавати параметри через покажчик.
*/

#include <iostream>
#include <Windows.h>
using namespace std;

void f(int* mas, int n, int* sum, int* kol)
{
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0) {
			*sum += mas[i];
			*kol += 1;
		}
	}
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int mas[5] = { 5,-2,4,-3,-1 };
	int sum = 0;
	int kol = 0;
	// Виклик функції
	f(mas, 5, &sum, &kol);
	// Друк результату
	for (int i = 0; i < 5; i++)
	{
		cout << mas[i] << "\t";
	}
	cout << endl;
	cout << "Сума негативних елементів = ";
	cout << sum << endl;
	cout << "Кількість негативних елементів = ";
	cout << kol << endl;
}