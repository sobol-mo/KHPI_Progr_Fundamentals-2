/*
Пример 3
Нахождение факториала с частными случаями
(когда n <= 1)
По аналогии с SC_Pr2_Fakt.cpp, только без отладочной информации
*/
#include <iostream>

using namespace std;

int Fact(int N)
{
	if (N <= 1) return 1;

	return N * Fact(N - 1);
}

int main()
{
	// Вызов рекурсивной функции
	cout << Fact(4) << endl;

	return 0;
}
