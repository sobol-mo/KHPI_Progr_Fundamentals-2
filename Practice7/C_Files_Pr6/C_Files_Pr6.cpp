/*
Файли в стилі С.
Приклад 6.
Написати програму, яка прочитає з бінарного файлу 
з цілими числами п'ятий елемент
*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// створення бінарного файлу
	FILE* f;
	fopen_s(&f, "t1.dat", "wb");
	int mas[11] = { 0,11,22,33,44,55,66,77,88,99,100 };
	fwrite(mas, sizeof(int), 11, f);
	fclose(f);
	// ----------------
	// Читання з файлу
	fopen_s(&f, "t1.dat", "rb");
	int x;
	fseek(f, 5 * sizeof(int), SEEK_SET);
	fread(&x, sizeof(int), 1, f);
	cout << "П'ятий елемент з файлу: " << x;
	fclose(f);
}

