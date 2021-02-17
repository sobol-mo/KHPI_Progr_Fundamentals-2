/*
	Покажчики. Приклад 14
Динамічні масиви.
Працюючи з динамічними масивами необхідно:
- заповнити двомірний масив (ДМ)
- знайти максимальний елемент
- відобразити масив відносно головної діагоналі
- повернути масив на 90 градусів
Працювати з ДМ:
а) як з одновимірним масивом (ОМ)
б) як з ДМ
*/

#include <iostream>
#include <time.h>
#include <iomanip>      // std::setw
#include <Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int* A1;
	int t;
	srand(time(0));
	int N;
	// а) Робота з ДМ як з ОМ
	cout << "1) Робота з ДМ як з ОМ" << endl;
	// Створення і заповнення двовимірного масиву А1
	// розміром N на N, як ОМ
	cout << "Введіть N: "; cin >> N;
	cout << setw(4);
	A1 = new int[N * N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			*(A1 + (i * N + j)) = rand() % 20 - 10;
			cout << *(A1 + (i * N + j)) << setw(4);
		}
		cout << endl;
	}

	// Пошук максимального елементу
	int* max = new int(-10);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (*(A1 + (i * N + j)) > *max)
			{
				max = A1 + (i * N + j);
			}
		}
	}
	cout << "Максимальний елемент = " << *max << endl;

	// Відображення масиву
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i > j)
			{
				t = *(A1 + (i * N + j));
				*(A1 + (i * N + j)) = *(A1 +
					((N - i - 1) * N + (N - j - 1)));
				*(A1 + ((N - i - 1) * N +
					(N - j - 1))) = t;
			}
		}
	}
	// Друк нового масиву
	cout << endl << "Масив після відображення :";
	cout << endl << setw(4);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << *(A1 + (i * N + j)) << setw(4);
		}
		cout << endl;
	}

	// Поворот на 90 градусів
	int* B1 = new int[N * N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			*(B1 + (j * N + N - i - 1)) =
				*(A1 + (i * N + j));
		}
	}
	// Друк нового масиву
	cout << endl << "Масив після повороту :";
	cout << endl << setw(4);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << *(B1 + (i * N + j)) << setw(4);
		}
		cout << endl;
	}

	// Звільнення пам'яті
	delete[] A1; A1 = nullptr;
	delete[] B1; B1 = nullptr;

	// б) Робота з ДМ як з ДМ
	cout << endl << "2) Робота з ДМ як з ДМ" << endl;
	// Створення ДМ  ДМ
	int** A2 = new int* [N];
	for (int i = 0; i < N; i++)
	{
		A2[i] = new int[N];
	}
	// Заповнення і друк ДМ
	cout << "ДМ як ДМ:" << endl << setw(4);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			*(*(A2 + i) + j) = rand() % 20 - 10;
			cout << *(*(A2 + i) + j) << setw(4);
		}
		cout << endl;
	}
	// Пошук максимального елементу
	*max = -20;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (*(*(A2 + i) + j) > *max)
			{
				max = *(A2 + i) + j;
			}
		}
	}
	cout << "Максимальний елемент ДМ як ДМ = ";
	cout << *max << endl;

	// Відображення масиву
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i > j)
			{
				t = *(*(A2 + i) + j);
				*(*(A2 + i) + j) = *(*(A2 + N - i - 1)
					+ N - j - 1);
				*(*(A2 + N - i - 1) + N - j - 1) = t;
			}
		}
	}
	// Друк нового масиву
	cout << endl << "ДМ як ДМ після відображення :";
	cout << endl << setw(4);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << *(*(A2 + i) + j) << setw(4);
		}
		cout << endl;
	}
	// Поворот на 90 грд
	// Створення ДМ як ДМ
	int** B2 = new int* [N];
	for (int i = 0; i < N; i++)
	{
		B2[i] = new int[N];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			*(*(B2 + j) + (N - i - 1)) =
				*(*(A2 + i) + j);
		}
	}
	// Друк нового масиву
	cout << endl << "Масив після повороту :";
	cout << endl << setw(4);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << *(*(B2 + i) + j) << setw(4);
		}
		cout << endl;
	}

	// Звільнення пам'яті
	for (int i = 0; i < N; i++)
	{
		delete[] A2[i];
		delete[] B2[i];
	}
	delete[] A2; A2 = nullptr;
	delete[] B2; B2 = nullptr;
	max = nullptr;
}