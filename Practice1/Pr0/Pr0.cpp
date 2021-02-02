/*
Пример 0 
Суть рекурсии
*/
#include <iostream>

using namespace std;

//
void Rec(int a)
{
	if (a > 0) Rec(a - 1);
	cout << a << endl;	
}

int main()
{
	// Вызов рекурсивной функции
	Rec(3);

	return 0;
}
