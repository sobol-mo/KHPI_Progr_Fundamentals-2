/*
Приклад 4
Створити структуру "Працівники підприємства":
- ПІБ
- посада
- рік народження
- зар. плата
Відома інфомація про 5-ть працівників
Написати функцію, яка виводить:
1) Список і кількість інженерів
2) Список працівників віком від 30 до 50 років
3) Середня зарплата на підприємстві
*/
#include <iostream>
#include <Windows.h>
using namespace std;
const int N = 5;		// Кількість працівників
const int tyear = 2021;	// Поточний рік

struct Employee
{
	string name;
	string position;
	int b_year;
	double salary;
};

void printInformation(Employee info[], int N)
{
	int ki = 0;		// Кількість інженерів
	int aver = 0;	// Середня зарплата

	for (int i = 0; i < N; i++)
	{
		if (info[i].position == "Інженер")
		{
			ki++;
			cout << "Інженер : " << info[i].name << "\n";
		}
		aver += info[i].salary;
	}
	for (int i = 0; i < N; i++)
	{
		if ((tyear - info[i].b_year) > 30 && 
			(tyear - info[i].b_year) < 50)
		{
			cout << "Від 30 до 50 : ";
			cout << info[i].name << "\n";
		}
	}

	cout << "Середня зарплата на підприємстві = "; 
	cout << aver / N << "\n";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Завдання вихідних даних
	Employee info[N] = { 
		{"Іванов І.І.", "Інженер", 1980, 5000},
		{"Петров П.І.", "Інженер", 1975, 5000},
		{"Сідоров С.І.", "Майстер", 1970, 5000},
		{"Васильєв В.І.", "Інженер", 1990, 5000},
		{"Самсонов С.І.", "Інженер", 1995, 5000} };
	// Виведення інформації
	printInformation(info, N);

	return 0;
}