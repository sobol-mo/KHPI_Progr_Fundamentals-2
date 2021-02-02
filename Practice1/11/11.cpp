/*
Приклад 11:
Написати рекурсивну функцію, яка обчислює добуток 
негативних елементів в одновимірному масиві
*/
#include <iostream>
using namespace std;

float P(int a[], int N)
{
	int p = 1;
	if (a[N] < 0) p = a[N];
	else p = 1;

	if (N == 0) return p;

	return p * P(a, N - 1);
}

int main()
{
	const int N = 5;
	//			 0	 1   2  3   4    
	int a[N] = { 4, -2, 10, 0, -3 };
	// Виклик рекурсивної функції
	cout << "Dobutok - = " << P(a, N - 1);

	cout << endl;

	return 0;
}
