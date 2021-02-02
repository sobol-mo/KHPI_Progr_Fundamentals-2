/*
Пример 1
Имитация цикла for
Две переменные: i - счетчик шагов, n - количество шагов

1), 2) Печать:
Hello 1
Hello 2
Hello 3
3) Печать:
H1
H2
H3
H2
H1
*/
#include <iostream>

using namespace std;

//
void fun(int i, int n)
{
	if (i < n) fun(i + 1, n);
	cout << "Hello" << i << endl;
}

void fun2(int i, int n)
{
	cout << "Hello" << i << endl;
	if (i < n) fun2(i + 1, n);	
}

void fun3(int i, int n)
{
	cout << "H" << i << endl;
	if (i < n) fun3(i + 1, n);
	cout << "H" << i << endl;
}

int main()
{
	int n = 3;
	cout << "Print with for:" << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << "Hello" << i << endl;
	}
	cout << endl;
	
	// 1)
	cout << "Print with fun:" << endl;
	fun(1, 3);
	cout << endl;
	
	// 2)
	cout << "Print with fun2:" << endl;
	fun2(1, 3);

	// 3) 
	cout << "Print with fun3:" << endl;
	fun3(1, 3);

	return 0;
}
