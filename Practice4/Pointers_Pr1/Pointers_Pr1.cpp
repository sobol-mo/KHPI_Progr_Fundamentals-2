/*
	Покажчики. Приклад 1
	Дано змінні
	int x = 10, y = 20
	int * p1, * p2
	Описати, що відбувається при наступних операціях?
*/

#include <iostream>
#include "windows.h"
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int x = 10, y = 20;
	int* p1, * p2;

	// а)
	cout << "а)\t" << endl;
	p1 = &x;
	p2 = &y;
	cout << "x=\t" << x << endl;		// x = 10;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 10;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	// б)
	cout << "б)\t" << endl;
	*p1 = *p2;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 20;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	// в)
	cout << "в) x = p2; -> ERROR\t" << endl;
	// x = p2;							// ERROR
	// г)
	cout << "г) p2 = *p1; -> ERROR\t" << endl;
	// p2 = *p1;						// ERROR
	// д)
	cout << "д) x = ++(*p1);\t" << endl;
	x = ++(*p1);
	cout << "x=\t" << x << endl;		// x = 21;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 21;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	// е)
	cout << "е) *p2 = (*p1)++;\t" << endl;
	*p2 = (*p1)++;
	cout << "x=\t" << x << endl;		// x = 22;
	cout << "y=\t" << y << endl;		// y = 21;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 22;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 21;
	// ж)
	cout << "ж) p1 = p2;\t" << endl;
	p1 = p2;
	cout << "x=\t" << x << endl;		// x = 22;
	cout << "y=\t" << y << endl;		// y = 21;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 21;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 21;
	// з)
	cout << "з) p2 = &x;\t" << endl;
	p2 = &x;
	cout << "x=\t" << x << endl;		// x = 22;
	cout << "y=\t" << y << endl;		// y = 21;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 21;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 22;
	// и)
	cout << "и) *p2 = y + 2;\t" << endl;
	*p2 = y + 2;
	cout << "x=\t" << x << endl;		// x = 23;
	cout << "y=\t" << y << endl;		// y = 21;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 21;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 23;
}