/*
	Покажчики. Приклад 2
	Дано змінні
	int x = 5, y = 8
	int *p1, *p2
	Описати, що відбувається при наступних операціях?
*/

#include <iostream>
using namespace std;

void main()
{
	int x = 5, y = 8;
	int* p1, * p2;

	// 1)
	cout << "1)\t" << endl;
	p1 = &x;
	p2 = &y;
	cout << "x=\t" << x << endl;		// x = 5;
	cout << "y=\t" << y << endl;		// y = 8;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 5;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 8;
	// 2)
	cout << "2) p2 = &x;\t" << endl;
	p2 = &x;
	cout << "x=\t" << x << endl;		// x = 5;
	cout << "y=\t" << y << endl;		// y = 8;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 5;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 5;
	// 3)
	cout << "3) *p2 = x - 2;\t" << endl;
	*p2 = x - 2;
	cout << "x=\t" << x << endl;		// x = 3;
	cout << "y=\t" << y << endl;		// y = 8;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 3;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 3;
	// 4)
	cout << "4) p1 = &y;\t" << endl;
	p1 = &y;
	cout << "x=\t" << x << endl;		// x = 3;
	cout << "y=\t" << y << endl;		// y = 8;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 8;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 3;
	// 5)
	cout << "5) \t" << endl;
	*p1 = y - 3;
	*p2 = x + 3;
	cout << "x=\t" << x << endl;		// x = 6;
	cout << "y=\t" << y << endl;		// y = 5;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 5;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 6;
	// 6)
	cout << "6) y = x + 3;\t" << endl;
	y = x + 3;
	cout << "x=\t" << x << endl;		// x = 6;
	cout << "y=\t" << y << endl;		// y = 9;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 9;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 6;
	// 7)
	cout << "7) \t" << endl;
	*p1 = x - 1;
	*p2 = y - 1;
	cout << "x=\t" << x << endl;		// x = 4;
	cout << "y=\t" << y << endl;		// y = 5;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 5;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 4;
}