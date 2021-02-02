/*
Пример 4
Написать функцию, которая возвращает количество цифр в заданном 
натуральном числе n
*/
#include <iostream>

using namespace std;

int Kol(int n)
{
	if (n < 10) return 1;

	return 1 + Kol(n / 10);
}

int main()
{
	// Вызов рекурсивной функции
	cout << Kol(326) << endl;

	return 0;
}
