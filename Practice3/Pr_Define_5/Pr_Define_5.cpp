/*
Приклад #define 5
Макропідстановки і макроозначення
Написати програму, яка дозволяє вмикати і вимикати
проміжний друк в процесі відладки
за допомогою операторів умовної компіляції
*/
#include <iostream>
#include <Windows.h>
using namespace std;

// Може бути будь-який ідентифікатор
//(DEB, DEBUG, TT_, DEBUG_1) 
#define PRINT	//(не обов'язково такий)

int Sum(int a, int b)
{
	return a + b;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 2;
	int b = 2;
	int sum = Sum(2, 2);
	// Перший спосіб
#if defined PRINT
	cout << "Проміжний друк включений \nСума " << a;
	cout << " та " << b << " дорівнює " << sum << endl;
#else
	cout << "Проміжний друк вимкнений" << endl;
#endif // PRINT

	// Другий спосіб
#ifdef PRINT
	cout << "Проміжний друк включений (другий спосіб)\n";
	cout << "Сума " << a << " та " << b;
	cout << " дорівнює " << sum << endl;
#endif
#ifndef PRINT
	cout << "Проміжний друк вимкнений (другий спосіб)\n";
#endif // !PRINT

	return 0;
}