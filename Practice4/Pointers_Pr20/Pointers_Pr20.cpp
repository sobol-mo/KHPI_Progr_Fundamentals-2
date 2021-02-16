/*
	Покажчики. Приклад 20
Передача параметрів через покажчик
Зробити функцію, яка повинна в кожному
стовпці двомірного динамічного масиву
(ДДМ) знаходити добуток негативних елементів
*/

#include <iostream>
#include <iomanip>      // std::setw
#include <Windows.h>
using namespace std;

// Функція розрахунку
// S - масив !!!
void f(int** A, int n, int* P)
{
	for (int j = 0; j < n; j++) {
		*(P + j) = 1;
		for (int i = 0; i < n; i++) {
			if (*(*(A + i) + j) < 0)
				*(P + j) *= *(*(A + i) + j);
		}
	}
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	cout << "Введіть розмір масиву: "; cin >> n;
	// Створення і заповнення динамічного 
	// двовимірного масиву
	cout << setw(4);
	int** A = new int* [n];
	for (int i = 0; i < n; i++) {
		A[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			A[i][j] = rand() % 11 - 5;
			cout << A[i][j] << setw(4);
		}
		cout << endl;
	}

	// Створення масиву P, 
	// в який будуть записуватися результати
	int* P = new int[n];	// n - кількість стовпців

	// Виклик функції
	f(A, n, P); // S - масив, тому & не потрібен

	// Виведення результату
	cout << endl << "Масив з результатом: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(P + i) << setw(4);
	}
	cout << endl;
	// Звільнення пам'яті
	for (int i = 0; i < n; i++) delete[] A[i];
	delete[] A;
	delete[] P;
	A = nullptr;
	P = nullptr;
}