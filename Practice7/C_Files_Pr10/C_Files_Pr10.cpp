/*
Файли в стилі С.
Приклад 10.
Написати дві функції:
1) записує в файл масив
2) читає з файлу масив і знаходить суму негативних
і твір позитивних елементів масиву
*/

#include <iostream>
#include <Windows.h>
using namespace std;
#define n 5

void f1(char* name, int* mas)
{
	FILE* f;
	fopen_s(&f, name, "wb");
	fwrite(mas, sizeof(int), n, f);
	fclose(f);
}

void f2(char* name, int* S, int* P)
{
	FILE* f;
	fopen_s(&f, name, "rb");
	int x;
	for (int i = 0; i < n; i++)
	{
		fread(&x, sizeof(int), 1, f);
		if (x > 0) *P *= x;
		else *S += x;
	}
	fclose(f);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);	

	// створення масиву
	int mas[n];
	int P = 1, S = 0;
	cout << "Масив : " << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 10 - 5;
		cout << mas[i] << " ";
	}
	// Введення імені файлу
	char* name = new char[10];
	cout << "\nВведіть ім'я файлу -> ";
	cin.getline(name, 10);
	// Виклик функцій
	f1(name, mas);
	f2(name, &S, &P);
	// Виведення результату (перевірка)
	cout << "\nСума негативних: " << S << endl;
	cout << "Твір позитивних: " << P << endl;
}

