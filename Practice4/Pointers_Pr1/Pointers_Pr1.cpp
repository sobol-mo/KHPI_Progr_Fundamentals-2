/*
	Покажчики. Приклад 1
	Дано змінні
	int x = 10, y = 20
	int * p1, * p2
	Описати, що відбувається при наступних операціях?
*/

#include <iostream>
using namespace std;

void main()
{
	int x = 10, y = 20;
	int* p1, * p2;

	// 1)
	cout << "1)\t" << endl;
	p1 = &x;
	p2 = &y;
	cout << "x=\t" << x << endl;		// x = 10;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 10;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	// 2)
	cout << "2)\t" << endl;
	*p1 = *p2;
	cout << "x=\t" << x << endl;		// x = 20;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 20;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	// 3)
	cout << "3) x = p2; -> ERROR\t" << endl;
	// x = p2;							// ERROR
	// 4)
	cout << "4) p2 = *p1; -> ERROR\t" << endl;
	// p2 = *p1;						// ERROR
	// 5)
	cout << "5) x = ++(*p1);\t" << endl;
	x = ++(*p1);
	cout << "x=\t" << x << endl;		// x = 21;
	cout << "y=\t" << y << endl;		// y = 20;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 21;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 20;
	// 6)
	cout << "6) *p2 = (*p1)++;\t" << endl;
	*p2 = (*p1)++;
	cout << "x=\t" << x << endl;		// x = 22;
	cout << "y=\t" << y << endl;		// y = 21;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 22;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 21;
	// 7)
	cout << "7) p1 = p2;\t" << endl;
	p1 = p2;
	cout << "x=\t" << x << endl;		// x = 22;
	cout << "y=\t" << y << endl;		// y = 21;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 21;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 21;
	// 8)
	cout << "8) p2 = &x;\t" << endl;
	p2 = &x;
	cout << "x=\t" << x << endl;		// x = 22;
	cout << "y=\t" << y << endl;		// y = 21;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 21;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 22;
	// 9)
	cout << "9) *p2 = y + 2;\t" << endl;
	*p2 = y + 2;
	cout << "x=\t" << x << endl;		// x = 23;
	cout << "y=\t" << y << endl;		// y = 21;
	cout << "*p1=\t" << *p1 << endl;	// *p1 = 21;
	cout << "*p2=\t" << *p2 << endl;	// *p2 = 23;
}