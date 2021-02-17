/*
	Покажчики. Приклад 3
	Дано змінні
	int x = 40, y = 30
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
	
	int x = 40, y = 30;
	int* p1, * p2;

	// а)
	cout << "а)\t" << endl;
	p1 = &y;
	p2 = &x;
	cout << "x=\t" << x << endl;		// x = 40;
	cout << "y=\t" << y << endl;		// y = 30;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 30;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 40;
	// б)
	cout << "б)\t" << endl;
	*p1 = x - 10;
	*p2 = y - 10;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 30;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 30;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	// в)
	cout << "в) p1 = &x;\t" << endl;
	p1 = &x;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 30;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 20;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	// г)
	cout << "г) *p2 = y + 20;\t" << endl;
	*p2 = y + 20;
	cout << "x=\t" << x << endl;		// x = 50;
	cout << "y=\t" << y << endl;		// y = 30;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 50;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 50;
	// д)
	cout << "д) p2 = &y;\t" << endl;
	p2 = &y;
	cout << "x=\t" << x << endl;		// x = 50;
	cout << "y=\t" << y << endl;		// y = 30;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 50;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 30;
	// е)
	cout << "е) x = y + 30;\t" << endl;
	x = y + 30;
	cout << "x=\t" << x << endl;		// x = 60;
	cout << "y=\t" << y << endl;		// y = 30;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 60;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 30;
	// ж)
	cout << "ж) \t" << endl;
	*p1 = y + 2;
	*p2 = y - 2;
	cout << "x=\t" << x << endl;		// x = 32;
	cout << "y=\t" << y << endl;		// y = 28;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 32;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 28;
}