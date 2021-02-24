/*
	Рядки в стилі С.
Приклад 3
Написати функцію, яка виділяє з заданого рядка S
підрядок S1 довжиною dl з позиції n
*/

#include <iostream>
#include <Windows.h>
using namespace std;

/*
S - вхідний рядок
S1 - підрядок
dl - довжина підрядка S1
n - позиція
*/
void fun(char* S, char* S1, int dl, int n)
{
	// 1) установка на потрібну позицію
	for (int i = 0; i < n; i++) S++;
	// 2) переписування dl символів
	for (int i = 0; i < dl; i++)
	{
		*S1 = *S;
		S1++;
		S++;
	}
	// 3) установка ознаки кінця рядка
	*S1 = '\0';
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//char S [] = "746593214";
	char S[80];
	cout << "Введіть рядок -> "; gets_s(S);
	char S1[80];
	int dl = 4;
	int n = 2;
	cout << "Введіть позицію n -> "; cin >> n;
	cout << "Введіть кількість символів dl -> "; 
	cin >> dl;
	fun(S, S1, dl, n);
	puts(S1);
}