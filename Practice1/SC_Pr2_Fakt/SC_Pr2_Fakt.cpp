/*
Пример 2 по материалам Simple Code (доработано)
https://www.youtube.com/watch?v=44y44mniCJ4
Вычисление факториала
	N! = N * (N - 1)!
*/
#include <iostream>

using namespace std;

//
int Fact(int N)
{
	cout << N << endl;
	if (N == 0) return 1;	// на случай использования функции для вычисления 0!
	if (N < 0) return 0;	// на случай использования функции для отрицательных чисел

	if (N == 1) return 1;

	int rez = N * Fact(N - 1);
	cout << rez << endl;

	return rez;
}

int main()
{
	// Вызов рекурсивной функции
	cout << Fact(5) << endl;

	return 0;
}
