/*
Файли в стилі С.
Приклад 8.
Створити структуру кроликів:
id,
вік, 
маса.
Написати програму, яка запише в файл інформацію про 
кроликів. Знайти найстарішого кролика, а якщо таких 
декілька, то найважчого з них.
Наприклад:
id	v	massa
1	10	5
2	5	6
3	10	7 <- повинен бути виведений цей
4	7	5
*/

#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

struct Krol
{
	int id;
	int voz;
	int massa;	
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// створення бінарного файлу
	Krol dat, max;
	int n;
	FILE* f;
	fopen_s(&f, "krolik.dat", "wb");
	cout << "Введіть кількість кроликів -> "; 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Введіть id вік масу кролика -> ";
		cin >> dat.id >> dat.voz >> dat.massa;
		fwrite(&dat, sizeof(Krol), 1, f);
	}
	fclose(f);
	
	// ----------------
	// Пошук кролика з найбільшим віком
	// Читання з файлу
	fopen_s(&f, "krolik.dat", "rb");
	// Читання першого запису. Вона max
	fread(&max, sizeof(Krol), 1, f);
	// Читання всіх записів
	while (!feof(f))
	{
		fread(&dat, sizeof(Krol), 1, f);
		if (dat.voz > max.voz) max = dat;
	}
	// Пошук кролика з найбільшим віком і масою
	// Встаємо на початок файлу
	fseek(f, 0, SEEK_SET);
	while (!feof(f))
	{
		fread(&dat, sizeof(Krol), 1, f);
		if (dat.voz == max.voz && 
			dat.massa > max.massa) 
			max = dat;
	}
	fclose(f);

	// Виведення результату
	cout << "Кролик з найбільшим віком і масою: ";
	cout << max.id << " " << max.voz << " ";
	cout << max.massa << endl;	
}