/*
Файли в стилі С.
Приклад 9.
Робота зі структурами.
Написати програму, яка допише в кінець файлу 
зі структурами ще одну структуру
*/

#include <iostream>
#include <Windows.h>
using namespace std;

struct A
{
	int x;
	int y;
} spis[3], dat;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// створення бінарного файлу
	FILE* f;
	fopen_s(&f, "t1.dat", "wb");
	for (int i = 0; i < 3; i++)
	{
		cout << "Введіть x y -> ";
		cin >> spis[i].x >> spis[i].y;
		fwrite(&spis[i], sizeof(A), 1, f);
	}
	fclose(f);

	// ----------------
	// Читання з файлу
	cout << "\nДані у файлі : " << endl;
	fopen_s(&f, "t1.dat", "rb");
	for (int i = 0; i < 3; i++)
	{
		fread(&spis[i], sizeof(A), 1, f);
		cout << spis[i].x << " " << spis[i].y;
		cout << endl;
	}
	fclose(f);

	// Дописування
	fopen_s(&f, "t1.dat", "ab");
	dat.x = 9;
	dat.y = 99;
	fwrite(&dat, sizeof(A), 1, f);
	fclose(f);

	// Виведення результату (перевірка)
	cout << "\nДані у файлі після додавання ";
	cout << "в кінець : " << endl;
	fopen_s(&f, "t1.dat", "rb");
	for (int i = 0; i < 4; i++)
	{
		fread(&spis[i], sizeof(A), 1, f);
		cout << spis[i].x << " " << spis[i].y;
		cout << endl;
	}
	fclose(f);
}