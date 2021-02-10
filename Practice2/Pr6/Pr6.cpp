/*
Приклад 6
Створити структуру "Працівники підприємства":
- ПІБ
- оклад
- стаж роботи
Є інформація про 20 працівників
Написати функцію виведення співробітників з 
мінімальною заробітною платою
*/
#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string
#include <Windows.h>
using namespace std;
const int N = 20;		// Кількість працівників

struct Employee
{
	string name;
	double salary;
	int work_exp;
};

// Функція заповнення масиву працівників
void inputWokers(Employee workers[], int N)
{
	for (int i = 0; i < N; i++)
	{
		workers[i].name = "WorkerName" 
						+ to_string(rand() % N + 1);
		workers[i].salary = (rand() % 10 * 1000 + 5000);
		workers[i].work_exp = (rand() % 30 + 1);
	}
}

void printInformation(Employee workers[], int N)
{
	int min = INT_MAX;

	// Пошук мінімальної зарплати
	for (int i = 0; i < N; i++)
	{
		if (workers[i].salary < min) 
			min = workers[i].salary;
	}
	// Висновок співробітників з мін зарплатою
	cout << "Співробітник/и з мінімальною"; 
	cout << " заробітною платою:" << "\n";
	
	for (int i = 0; i < N; i++)
	{
		if (workers[i].salary == min)
		{
			cout << i + 1 << ": "; 
			cout << workers[i].name << " "; 
			cout << workers[i].salary << " ";
			cout << workers[i].work_exp << "\n";
		}
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Employee workers[N];

	while (true)
	{
		// Завдання вихідних даних
		inputWokers(workers, N);
		// Виведення інформації
		printInformation(workers, N);

		system("pause");
		system("cls");
	}
	return 0;
}