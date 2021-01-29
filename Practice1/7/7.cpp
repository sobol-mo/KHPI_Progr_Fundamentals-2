/*
Приклад 7:
Написати функцію, яка підсумовує елементи масиву
*/
#include <iostream>
using namespace std;

int sum(int a[], int N)
{
	if (N == 0) return a[0];

	return a[N] + sum(a, N - 1);
}

int main()
{
	const int N = 5;
	//			 0	 1   2  3   4    
	int a[N] = { 4, -2, 10, 0, -3 };
	// Виклик рекурсивної функції
	cout << "Sum = " << sum(a, N - 1);

	cout << endl;

	return 0;
}
