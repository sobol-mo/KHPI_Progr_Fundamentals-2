/*
Файли в стилі С.
Приклад 4.
Написати програму, яка запише в бінарний файл 
кілька випадкових чисел. Ім'я файлу вводити з екрану.
Прочитати числа з файлу і знайти максимальне.
*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FILE* f;
	char* name = new char[10];
	cout << "Введіть ім'я файлу ->";
	cin.getline(name, 10);
	fopen_s(&f, name, "wb");
	int x;
	for (int i = 0; i < 10; i++)
	{
		x = rand() % 20;
		fwrite(&x, sizeof(int), 1, f);
	}
	fclose(f);
	// ----------------
	// Читання з файлу
	int max = 0;
	cout << "Читання чисел з файлу: ";
	fopen_s(&f, name, "rb");
	for (int i = 0; i < 10; i++)
	{
		fread(&x, sizeof(int), 1, f);
		cout << x << " ";
		if (x > max) max = x;
	}
	cout << "Максимальне число: " << max << endl;
	fclose(f);
}

