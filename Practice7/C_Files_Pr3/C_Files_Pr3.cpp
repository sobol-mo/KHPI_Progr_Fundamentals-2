/*
Файли в стилі С.
Приклад 3.
Написати програму для запису в файл 20 чисел 
(НЕ масив). Числа тільки позитивні. Після читання 
з файлу цих чисел записати їх в новий файл, і знайти
їх середнє арифметичне.
*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FILE* f1;
	FILE* f2;
	fopen_s(&f1, "t1.txt", "w");
	int x;
	int k = 0, sum = 0, SA;
	if (!f1)
	{
		cout << "Error"; exit(0);
	}
	for (int i = 0; i < 20; i++)
	{
		//cin >> x;
		x = rand() % 10;
		fprintf(f1, "%2d", x);
		k++;
	}
	fclose(f1);
	// ----------------
	// Читання з файлу і запис в новий
	fopen_s(&f1, "t1.txt", "r");
	fopen_s(&f2, "t2.txt", "w");
	for (int i = 0; i < k; i++)
	{
		fscanf_s(f1, "%2d", &x);
		fprintf(f2, "%2d", x);
		sum += x;
	}
	fclose(f1);
	fclose(f2);
	// ----------------
	// Читання з другого файлу
	fopen_s(&f2, "t2.txt", "r");
	for (int i = 0; i < k; i++)
	{
		fscanf_s(f2, "%2d", &x);
		cout << x << " ";
	}
	fclose(f2);
	SA = sum / k;
	cout << "\nСума всіх чисел: " << sum;
	cout << "\nКількість всіх чисел: " << k;
	cout << "\nСереднє арифметичне: " << SA << endl;
}

