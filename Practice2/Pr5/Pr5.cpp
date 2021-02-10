/*
Приклад 5
Створити структуру "Машина":
- назва
- максимальна швидкість
Відома інфомація про 20-ть авто
Написати функцію і вивести список моделей, 
у яких максимальна швидкість більше 150 км / год
*/
#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string
#include <Windows.h>
using namespace std;
const int N = 20;	// Кількість моделей авто

struct Car
{
	string make;
	unsigned short max_speed;
};

// Функція заповнення масиву з 
//інформацією про авто (створення масиву авто)
void inputInfo(Car info[], int N)
{
	for (int i = 0; i < N; i++)
	{
		info[i].make = "Make" + 
						to_string(rand() % N + 1);
		info[i].max_speed = rand() % 9 * 10 + 120;
	}
}

// Функція виведення
void printInfo(Car info[], int N)
{
	int n = 0;
	for (int i = 0; i < N; i++)
	{
		if (info[i].max_speed > 150)
		{
			cout << ++n << ": " << info[i].make; 
			cout << " " << info[i].max_speed << "\n";
		}
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Оголошення масиву машин
	Car info[N];	

	while (true)
	{
		inputInfo(info, N);	// Створення масиву машин
		cout << "Список моделей, у яких максимальна"; 
		cout << " швидкість більше 150 км/год" << "\n";
		printInfo(info, N);	// Друк марок машин

		system("pause");
		system("cls");
	}
	return 0;
}