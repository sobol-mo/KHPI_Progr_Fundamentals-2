/*
Пример 2
Перевод числа X в двоичную систему счисления
и печать результата
10 - это 1010

*/
#include <iostream>

using namespace std;

//
void fun(int x)
{
	int c;
	c = x % 2;
	x = x / 2;
	if (x > 0) fun(x);
	cout << c;
}



int main()
{
	// Итерационный метод
	int x = 10, c, k = 0;
	int mas[100];
	while (x > 0)
	{
		c = x % 2;
		x = x / 2;
		cout << c;
		mas[k++] = c;	
	}
	cout << endl;
	// Будет выведено 0101, а надо 1010
	// Исправление
	for (int i = k-1; i >= 0; i--)
	{
		cout << mas[i];
	}
	cout << endl;

	// Тоже, но с использованием рекурсии
	x = 10;
	cout << "The same with recursion:" << endl;
	fun(x);
	cout << endl;

	return 0;
}
