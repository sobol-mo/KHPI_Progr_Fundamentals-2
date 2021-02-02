/*
Пример 6
Вычислить сумму элементов массива
*/
#include <iostream>


using namespace std;

int sum(int n, int a[])	// N - индекс последнего элемента массива
{
	if (n == 0) return a[0];

	return a[n] + sum(n - 1, a);
}

int main()
{
	const int N = 4;
	int a[N] = {1, 2, 3, 4};

	// Вызов рекурсивной функции
	cout << "Sum = " << sum(N - 1, a) << endl;

	return 0;
}
