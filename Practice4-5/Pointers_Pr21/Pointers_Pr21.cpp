/*
	Покажчики. Приклад 21
Передача параметрів через покажчик

Зробити функцію, яка повинна в двомірному
динамічному масиві (ДДМ) знайти максимальний елемент
*/

#include <iostream>
#include <iomanip>      // std::setw
#include <Windows.h>
using namespace std;

// Функція розрахунку
// S - масив !!!
void f(int** A, int n, int* max)
{
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			if (*(*(A + i) + j) > *max)
				*max = *(*(A + i) + j);
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
			A[i][j] = rand() % 100 - 50;
			cout << A[i][j] << setw(4);
		}
		cout << endl;
	}

	// Виклик функції
	int max = -100;
	f(A, n, &max); // max - змінна, тому & потрібен

	// Виведення результату
	cout << "Максимальний елемент ДДМ : ";
	cout << max << endl;

	// Звільнення пам'яті
	for (int i = 0; i < n; i++) delete[] A[i];
	delete[] A;
	A = nullptr;
}