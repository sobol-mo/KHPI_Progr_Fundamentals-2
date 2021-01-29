/*
Приклад 6:
Написати функцію, яка друкує елементи масиву
*/
#include <iostream>
using namespace std;
// Перший спосіб
void fun(int a[], int N)
{
	if (N > 0) fun(a, N - 1);
	cout << a[N] << " ";
}
// Другий спосіб
void fun2(int a[], int N)
{
	if (N == 0) cout << a[0] << " ";
	else
	{
		fun(a, N - 1);
		cout << a[N] << " ";
	}
}

int main()
{
	const int N = 5;
	//			 0	 1   2  3   4    
	int a[N] = { 4, -2, 10, 0, -3 };
	// Виклик рекурсивної функції
	fun(a, N - 1);

	return 0;
}
