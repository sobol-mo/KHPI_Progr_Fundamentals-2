/*
	Рядки в стилі С.
Приклад 5
Написати функцію, яка порахує кількість слів у реченні
*/

#include <iostream>
#include <Windows.h>
using namespace std;

/*
S - вхідний рядок
*/
int fun(char* S)
{
	int prob = 1;
	while (*S != '\0')
	{
		if (*S == ' ') prob++;
		S++;
	}
	return prob;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);	
	char S[80];
	cout << "Введіть рядок -> "; gets_s(S);	
	cout << "Кількість слів у реченні : " << fun(S);
}