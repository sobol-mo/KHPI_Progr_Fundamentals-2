/*
	Покажчики. Приклад 19
Передача параметрів через покажчик

Зробити функцію, яка повинна в кожному рядку
двомірного динамічного масиву (ДДМ) знаходити
суму елементів більше трьох і результати
записувати в новий масив
*/

#include <iostream>
#include <iomanip>      // std::setw
#include <Windows.h>
using namespace std;

// Функція розрахунку
// S - масив !!!
void f(int** A, int n, int* S)
{
	for (int i = 0; i < n; i++) {
		*(S + i) = 0;
		for (int j = 0; j < n; j++) {
			if (*(*(A + i) + j) > 3)
				*(S + i) += *(*(A + i) + j);
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

	// Створення масиву S, 
	// в який будуть записуватися результати
	int* S = new int[n];

	// Виклик функції
	f(A, n, S); // S - масив, тому & не потрібен

	// Виведення результату
	cout << endl << "Масив з результатом: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(S + i) << setw(4);
	}
	cout << endl;
	// Звільнення пам'яті
	for (int i = 0; i < n; i++) delete[] A[i];
	delete[] A;
	delete[] S;
	A = nullptr;
	S = nullptr;
}