/*
Приклад 8
Створити структуру "Відомість здачі сесії":
- ПІБ студента
- оцінки студента з 5 дисциплін
Кількість студентів дорівнює 20-ти
Написати функції, які:
1) Обчислюють максимальний середній бал
2) Знаходять кращого за середнім балом студента.
*/
#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string
#include <Windows.h>
using namespace std;
#define N 20		// Кількість студентів
#define M 5			// Кількість дисциплін в сесії

struct Student
{
	string name;		// Ім'я студента
	int marks[M];		// Масив оцінок за сесію
	float averageMark;	// Середній бал з оцінок
};

// Функція заповнення відомості (Roll)
void inputRoll(Student roll[])
{
	// Очищення імен
	for (int i = 0; i < N; i++) roll[i].name = "";
	for (int i = 0; i < N; i++)
	{
		// Створення унікального імені
		bool no_unique = true;
		do {
			roll[i].name = "StName" 
							+ to_string(rand() % N + 1);
			for (int j = 0; j < N; j++)
			{
				if (i != j && 
					roll[i].name == roll[j].name){
				 no_unique = true; 
				 break; 
				} else no_unique = false;
			}
		} while (no_unique);

		// Створення оцінок і середнього бала
		roll[i].averageMark = 0;
		for (int j = 0; j < M; j++)
		{
			// 3, 4, 5
			roll[i].marks[j] = rand() % 3 + 3;
			// Підсумовування всіх балів
			roll[i].averageMark += roll[i].marks[j];
		}
		// Розрахунок середнього бала
		roll[i].averageMark /= M;
	}

	// Друк відомості
	printf_s("|------------------------------------|\n");
	printf_s("| N |   ПІБ    |  Оцінки   | Сер.бал |\n");
	printf_s("|------------------------------------|\n");
	for (int i = 0; i < N; i++)
	{
		printf_s("|%3d| %-9s|", i, roll[i].name.c_str());
		for (int j = 0; j < M; j++)
		{
			printf_s("%2d", roll[i].marks[j]);
		}
		printf_s(" | %7.1f |\n", roll[i].averageMark);
	}
	printf_s("|------------------------------------|\n");
}

// 1 Функція знаходження максимального середнього бала
float maxAverageMark(Student roll[])
{
	float max = 0.;
	for (int i = 0; i < N; i++)
	{
		if (roll[i].averageMark > max) 
			max = roll[i].averageMark;
	}
	return max;
}

// 2 Функція знаходження кращого студента
string leader(Student roll[], float maxAverMark)
{
	for (int i = 0; i < N; i++)
	{
		if (roll[i].averageMark == maxAverMark)
			return roll[i].name;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Оголошення масиву студентів
	Student roll[N];

	while (true)
	{
		// Створення масиву студентів, 
		//створення відомості
		inputRoll(roll);

		// 1 Пошук максимального середнього бала
		float maxAverMark = maxAverageMark(roll);
		cout << "Максимальний середній бал = ";
		cout << maxAverMark << "\n";

		// 2 Знаходження кращого студента 
		//по максимальному сер. балу
		cout << "Кращий студент : ";
		cout << leader(roll, maxAverMark) << "\n";

		system("pause");
		system("cls");
	}
	return 0;
}