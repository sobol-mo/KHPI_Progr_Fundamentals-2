/*
	Покажчики. Приклад 18
Передача параметрів через покажчик
У динамічному масиві знайти суму елементів
на головній діаганалі (ГД) і добуток елементів
під побічною діагоналлю (ПД)
*/

#include <iostream>
#include <iomanip>      // std::setw
#include <Windows.h>
using namespace std;

// Функція розрахунку суми елементів на ГД - S
// і добуток елементів під побічною ПД - P
void f(int** mas, int n, int* S, int* P)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				// Те ж що і *(*(mas + i) + j)
				*S += mas[i][j];
			if (i + j > n - 1)
				*P *= mas[i][j];
		}
	}
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	int S = 0;
	int P = 1;
	cout << "Введіть розмір масиву: "; cin >> n;
	// Створення і заповнення динамічного 
	// двовимірного масиву
	cout << setw(4);
	int** mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mas[i][j] = rand() % 10 - 5;
			cout << mas[i][j] << setw(4);
		}
		cout << endl;
	}
	// Виклик функції
	f(mas, n, &S, &P);

	// Виведення результату
	cout << "Сума елементів на ГД: " << S << endl;
	cout << "Добуток елементів під ПД: " << P << endl;

	// Звільнення пам'яті
	for (int i = 0; i < n; i++) delete[] mas[i];
	delete[] mas;
	mas = nullptr;
}