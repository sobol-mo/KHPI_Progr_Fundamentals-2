/*
До практики № 3 по структурам в мовах С/С++

Приклад #define 1 
Макропідстановки і макроозначення 
Написати функцію-макрос обчислення більшого з двох чисел
*/
#include <iostream>
using namespace std;

#define getmax(a,b) ((a) > (b) ? (a) : (b))

int main()
{
	int x = 5, y;
	int z;
	z = getmax(x, 2);
	cout << "z = " << z << endl;
	cout << "getmax = " << getmax(7, x) << endl;

	return 0;
}