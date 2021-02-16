/*
	Покажчики. Приклад 3
	Дано змінні
	int x = 40, y = 30
	int *p1, *p2
	Описати, що відбувається при наступних операціях?
*/

#include <iostream>
using namespace std;

void main()
{
	int x = 40, y = 30;
	int* p1, * p2;

	// 1)
	cout << "1)\t" << endl;
	p1 = &y;
	p2 = &x;
	cout << "x=\t" << x << endl;		// x = 40;
	cout << "y=\t" << y << endl;		// y = 30;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 30;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 40;
	// 2)
	cout << "2)\t" << endl;
	*p1 = x - 10;
	*p2 = y - 10;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 30;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 30;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	// 3)
	cout << "3) p1 = &x;\t" << endl;
	p1 = &x;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 30;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 20;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	// 4)
	cout << "4) *p2 = y + 20;\t" << endl;
	*p2 = y + 20;
	cout << "x=\t" << x << endl;		// x = 50;
	cout << "y=\t" << y << endl;		// y = 30;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 50;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 50;
	// 5)
	cout << "5) p2 = &y;\t" << endl;
	p2 = &y;
	cout << "x=\t" << x << endl;		// x = 50;
	cout << "y=\t" << y << endl;		// y = 30;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 50;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 30;
	// 6)
	cout << "6) x = y + 30;\t" << endl;
	x = y + 30;
	cout << "x=\t" << x << endl;		// x = 60;
	cout << "y=\t" << y << endl;		// y = 30;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 60;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 30;
	// 7)
	cout << "7) \t" << endl;
	*p1 = y + 2;
	*p2 = y - 2;
	cout << "x=\t" << x << endl;		// x = 32;
	cout << "y=\t" << y << endl;		// y = 28;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 32;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 28;
}