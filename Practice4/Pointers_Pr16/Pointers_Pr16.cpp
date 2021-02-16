/*
	Покажчики. Приклад 16
	Передача параметрів через покажчик

Вирішити квадратне рівняння
Функція повинна повертати:
2 - 2 кореня
1 - 1 корінь
0 - Д < 0
-1 - a = 0
Корінь повертати через покажчик
*/

#include <iostream>
#include <Windows.h>
using namespace std;

int kv(int a, int b, int c, float* X1, float* X2)
{
	if (a == 0) return -1;
	int D = b * b - 4 * a * c;
	if (D < 0) return 0;
	if (D == 0) {
		*X1 = -b / (2 + a);
		*X2 = *X1;
		return 1;
	}
	if (D > 0) {
		*X1 = (-b + sqrt(D)) / (2 * a);
		*X2 = (-b - sqrt(D)) / (2 * a);
		return 2;
	}
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c;
	float X1, X2;
	// Введення початкових даних
	cin >> a >> b >> c;
	// Виклик функції
	int k = kv(a, b, c, &X1, &X2);
	// Аналіз і вивід результатів
	switch (k)
	{
	case -1: cout << "a = 0"; break;
	case 0: cout << "D < 0"; break;
	case 1: cout << "X1 = X2 = " << X1; break;
	case 2: cout << "X1 = " << X1 << endl;
		cout << "X2 = " << X2; break;
	}
}