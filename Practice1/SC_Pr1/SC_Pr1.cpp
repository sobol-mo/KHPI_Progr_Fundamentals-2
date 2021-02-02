/*
Пример 1 по материалам Simple Code 
https://www.youtube.com/watch?v=_WGNSVDb0t8&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=54&t=0s
Суть рекурсии
*/
#include <iostream>

using namespace std;

//
int Fun(int a)
{
	if (a < 1) return 0;

	cout << a << endl;
	 
	int rez = Fun(a - 1);

	cout << a << endl;

	return rez;
}

int main()
{
	// Вызов рекурсивной функции
	Fun(3);

	return 0;
}
