/*
Приклад 2:
Написати функцію, яка виводить всі числа від 1 до N
*/
#include <iostream>
using namespace std;

void fun(int N)
{
	if (N != 1) fun(N - 1);
	cout << N;
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
