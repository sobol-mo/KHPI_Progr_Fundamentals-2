/*
	Покажчики. Приклад 12
Створити покажчики на покажчики.
Розібрати пріоритети операцій * і ++
*/

#include <iostream>
#include <Windows.h>
using namespace std;

#define N 5

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int A[N] = { 0,1,2,3,4 };
	int* p[N] = { A, A + 1, A + 2, A + 3, A + 4 };
	int** pp = p;
	for (int i = 0; i < N; i++)
	{
		cout << "p[" << i << "] = " << p[i];
		cout << " : *p[" << i << "] = ";
		cout << *p[i] << endl;
	}
	cout << "*p[0]++ = " << *p[0]++ << endl;
	cout << "p[0] = " << p[0] << " : *p[0] = ";
	cout << *p[0] << endl;
	cout << "*++p[0] = " << *++p[0] << endl;
	cout << "p[0] = " << p[0] << " : *p[0] = ";
	cout << *p[0] << endl;

	// Повертаємо в початковий стан масив покажчиків
	for (int i = 0; i < N; i++)
	{
		p[i] = &A[i];
		cout << "p[" << i << "] = " << p[i];
		cout << " : *p[" << i << "] = ";
		cout << *p[i] << endl;
	}
}