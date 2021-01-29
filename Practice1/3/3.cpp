/*
Приклад 3:
Написати функцію, яка друкує N одиниць потім N нулів
*/
#include <iostream>
using namespace std;

void fun(int N)
{
	cout << 1;	// перед

	if (N > 1) fun(N - 1);

	cout << 0;	// після
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

		fun(N);

		cout << endl;
		system("pause");
		system("cls");
	}
	return 0;
}
