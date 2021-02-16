/*
	Покажчики. Приклад 22
Передача параметрів через покажчик
Зробити функцію, яка повинна з двомірного
динамічного масиву (ДДМ) вибрати елементи на
головній діагоналі (ГД) в одновимірний динамічний
масив, і повернути його оператором return
*/

#include <iostream>
#include <iomanip>      // std::setw
#include <Windows.h>
using namespace std;

// Функція розрахунку
int* f(int** A, int n)
{
	int* mas_in = new int[n];
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			if (i == j)
				*(mas_in + i) = *(*(A + i) + j);
		}
	}
	// Повертається покажчик на початок масиву
	return mas_in;
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
	// Оголошуємо покажчик в який повернеться
	// адреса виділеної пам'яті в функції
	int* mas;

	// Виклик функції
	mas = f(A, n);

	// Виведення результату
	cout << endl << "Масив з результатом: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(mas + i) << setw(4);
	}
	cout << endl;

	// Звільнення пам'яті
	for (int i = 0; i < n; i++) delete[] A[i];
	delete[] A;
	A = nullptr;
	delete[] mas;
	mas = nullptr;
}