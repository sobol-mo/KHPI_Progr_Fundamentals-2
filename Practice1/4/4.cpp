/*
Приклад 4:
Написати функцію, яка повертає суму чисел в заданому
натуральному числі n
*/
#include <iostream>
using namespace std;

int sum(int x)
{
	if (x < 10) return x;

	return x % 10 + sum(x / 10);
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

		cout << "Sum = " << sum(N);

		cout << endl;
		system("pause");
		system("cls");
	}
	return 0;
}
