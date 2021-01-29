/*
Приклад 9:
Написати рекурсивну функцію, яка визначає 
середнє арифметичне елементів масиву
*/
#include <iostream>
using namespace std;
#define count 5

float Aver(int a[], int N)
{

	/*
	if (N == 0) return (float) a[0] / count;
	else
		return (float) a[N] / count + Aver(a, N - 1);
	*/
	// Більш компактна запис:
	return (N == 0) ? (float)a[0] / count : (float)a[N] / count + Aver(a, N - 1);

}

int main()
{
	const int N = 5;
	//			 0	1  2  3  4    
	int a[N] = { 1, 2, 5, 3, 4 };
	// Виклик рекурсивної функції
	cout << "Average = " << Aver(a, N - 1);

	cout << endl;

	return 0;
}
