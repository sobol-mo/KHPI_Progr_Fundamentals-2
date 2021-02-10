/*
Приклад 3
Створити структуру "Багаж пасажира":
- к-ть валіз (багажних місць)
- загальна вага
Є інформація про 5 пасажирів (пара чисел).
Написати функцію, порахувати загальну кількість 
багажних місць і з'ясувати, чи є пасажири 
з 1м багажним місцем вагою понад 30 кг.
*/
#include <iostream>
#include <Windows.h>
using namespace std;
const int N = 5;	// Кількість пасажирів

struct Info
{
	short kol;
	float ves;
};

void printInformation(Info info[], int N)
{
	int kp = 0;	// Кількість пасажирів	
	int kv = 0; // Загальна вага 

	for (int i = 0; i < N; i++)
	{
		kv += info[i].ves;
		if (info[i].kol == 1 && info[i].ves > 30) kp++;
	}
	cout << "Загальна вага = " << kv << "\n";

	if (kp != 0)
	{
		cout << "Пасажирів, у яких один чемодан"; 
		cout << " більше 30 кг - " << kp << "\n";
	}
	else cout << "Пасажирів з одним чемоданом"; 
	cout << " більше 30 кг немає" << "\n";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Завдання вихідних даних
	Info info[N] = { {2, 15}, {1, 35}, {2, 15}, 
				     {1, 45}, {2, 15} };
	// Виведення інформації
	printInformation(info, N);

	return 0;
}