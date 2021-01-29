/*
Приклад 8:
Написати функцію, яка визначає максимальний 
елемент в масиві
*/
#include <iostream>
using namespace std;

int Max(int a[], int N, int max)
{
	if (a[N] > max) max = a[N];

	if (N == 0) return max;

	Max(a, N - 1, max);
}

int main()
{
	const int N = 5;
	//			 0	1  2  3  4    
	int a[N] = { 1, 2, 5, 3, 4 };
	// Виклик рекурсивної функції
	cout << "Max = " << Max(a, N - 1, INT_MIN);

	cout << endl;

	return 0;
}
