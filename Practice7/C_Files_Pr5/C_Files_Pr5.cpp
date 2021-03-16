/*
Файли в стилі С.
Приклад 5.
Написати програму, яка запише масив з п'яти 
елементів повністю в файл. Прочитати масив з 
файлу і роздрукувати поелементно.
*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FILE* f;
	fopen_s(&f, "t1.dat", "wb");
	int mas[5] = { 0,1,2,3,4, };
	fwrite(mas, sizeof(int), 5, f);
	fclose(f);

	// ----------------
	// Читання з файлу
	fopen_s(&f, "t1.dat", "rb");
	int mas2[5];
	cout << "Масив після читання: ";
	for (int i = 0; i < 5; i++)
	{
		fread(&mas2[i], sizeof(int), 1, f);
		cout << mas2[i] << " ";
	}
	fclose(f);
}

