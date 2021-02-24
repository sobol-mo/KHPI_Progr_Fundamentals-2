/*
	Рядки в стилі С.
Приклад 6
Написати функцію, яка виділяє перше слово в рядку
і рахує кількість символів в першому слові
*/

#include <iostream>
#include <Windows.h>
using namespace std;

/*
S - вхідний рядок
S1 - перше слово
*/
int psl(char* S, char* S1)
{
	int k = 0;
	while (*S != ' ')
	{
		*S1 = *S;
		S1++; S++;
		k++;
	}
	*S1 = '\0';
	return k;		
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);	
	char S[80];
	cout << "Введіть рядок -> "; gets_s(S);
	char S1[80];
	cout << "Кількість символів в першому слові: ";
	cout << psl(S, S1) << endl;
	puts(S1);
}