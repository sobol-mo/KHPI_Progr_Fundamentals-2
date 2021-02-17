/*
	Покажчики. Приклад 2
	Дано змінні
	int x = 5, y = 8
	int *p1, *p2
	Описати, що відбувається при наступних операціях?
*/

#include <iostream>
#include "windows.h"
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int x = 5, y = 8;
	int* p1, * p2;

	// а)
	cout << "а)\t" << endl;
	p1 = &x;
	p2 = &y;
	cout << "x=\t" << x << endl;		// x = 5;
	cout << "y=\t" << y << endl;		// y = 8;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 5;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 8;
	// б)
	cout << "б) p2 = &x;\t" << endl;
	p2 = &x;
	cout << "x=\t" << x << endl;		// x = 5;
	cout << "y=\t" << y << endl;		// y = 8;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 5;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 5;
	// в)
	cout << "в) *p2 = x - 2;\t" << endl;
	*p2 = x - 2;
	cout << "x=\t" << x << endl;		// x = 3;
	cout << "y=\t" << y << endl;		// y = 8;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 3;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 3;
	// г)
	cout << "г) p1 = &y;\t" << endl;
	p1 = &y;
	cout << "x=\t" << x << endl;		// x = 3;
	cout << "y=\t" << y << endl;		// y = 8;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 8;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 3;
	// д)
	cout << "д) \t" << endl;
	*p1 = y - 3;
	*p2 = x + 3;
	cout << "x=\t" << x << endl;		// x = 6;
	cout << "y=\t" << y << endl;		// y = 5;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 5;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 6;
	// е)
	cout << "е) y = x + 3;\t" << endl;
	y = x + 3;
	cout << "x=\t" << x << endl;		// x = 6;
	cout << "y=\t" << y << endl;		// y = 9;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 9;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 6;
	// ж)
	cout << "ж) \t" << endl;
	*p1 = x - 1;
	*p2 = y - 1;
	cout << "x=\t" << x << endl;		// x = 4;
	cout << "y=\t" << y << endl;		// y = 5;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 5;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 4;
}