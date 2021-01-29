/*
До практики № 1 по рекурсії в мовах С/С++.

Приклад 1:
Написати функцію, яка зводить число х в ступінь y
*/
#include <iostream>
using namespace std;

int fun(int x, int y)
{
	if (y == 1) return x;
	return x * fun(x, y - 1);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, y;
	// Виклик рекурсивної функції
	while (true)
	{
		cout << "Input x y:" << endl;
		cin >> x >> y;
		cout << endl;
		cout << "x to the power of y = " << fun(x, y) << endl;

		system("pause");
		system("cls");
	}

	return 0;
}
