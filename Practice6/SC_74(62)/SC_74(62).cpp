/*
	Рядки.
Вивести таблицю символів ASCII
*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (int i = 0; i < 266; i++)
	{
		cout << "Code = " << i << "\t" << "char = ";
		cout << (char)i << endl;
	}
}