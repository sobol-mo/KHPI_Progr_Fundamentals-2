/*
Приклад 5:
Написати функцію, яка повертає мінімальну цифру в
натуральному числі n
*/
#include <iostream>
using namespace std;
// Перший спосіб
int fun(int x, int min)
{
	if (x == 0) return min;

	if (x % 10 < min) min = x % 10;

	fun(x / 10, min);
}
// Другий спосіб
int fun2(int x, int min)
{
	if (x > 0)
	{
		if (x % 10 < min) min = x % 10;
		fun(x / 10, min);
	}
	else return min;
}
// Третій спосіб
int fun3(int x, int min)
{
	if (x < 10)
	{
		if (x < min) min = x;
		return min;
	}
	if (x % 10 < min) min = x % 10;
	return fun(x / 10, min);
}

int main()
{
	int N;
	// Виклик рекурсивної функції
	while (true)
	{
		cout << "Input N : ";
		cin >> N;
		cout << endl;

		cout << "Min = " << fun(N, 9);

		cout << endl;
		system("pause");
		system("cls");
	}

	return 0;
}
