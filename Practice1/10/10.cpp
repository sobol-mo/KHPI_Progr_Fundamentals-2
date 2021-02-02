/*
Приклад 10:
Написати рекурсивну функцію, яка обчислює 
суму позитивних елементів в одновимірному масиві
*/
#include <iostream>
using namespace std;

float Sum(int a[], int N)
{
	int sum = 0;
	if (a[N] > 0) sum = a[N];
	else sum = 0;

	if (N == 0) return sum;

	return sum + Sum(a, N - 1);
}

int main()
{
	const int N = 5;
	//			 0	 1   2  3   4    
	int a[N] = { 4, -2, 10, 0, -3 };
	// Виклик рекурсивної функції
	cout << "Sum + = " << Sum(a, N - 1);

	cout << endl;

	return 0;
}
