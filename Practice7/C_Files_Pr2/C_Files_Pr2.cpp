/*
Файли в стилі С.
Приклад 2.
Введення / виведення у файл рядків
Написати програму, у якій буде задано кількість
рядків (n), що будуть записані у файл. Ввести 
рядки з клавіатури. Записати інформацію у файл 
та зчитати з файлу.
*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FILE* f;
	int n;
	cout << "Введіть кількість рядків -> "; 
	cin >> n;
	// Очищення буфера
	cin.ignore(cin.rdbuf()->in_avail());

	fopen_s(&f, "t1.txt", "w");
	char *s = new char[10];
	for (int i = 0; i < n; i++)
	{
		cin.getline(s, 10);
		fputs(s, f);
		fputs("\n", f);
		//cin.clear();
	}
	fclose(f);
	// ----------------
	// Читання символів з файлу
	fopen_s(&f, "t1.txt", "r");
	for (int i = 0; i < n; i++)
	{
		fgets(s, 10, f);
		cout << s;
		//puts(s);
	}
	fclose(f);
}

