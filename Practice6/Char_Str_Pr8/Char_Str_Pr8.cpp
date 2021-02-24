/*
	Рядки в стилі С.
Приклад 8
Написати функцію, яка замінює символи рядка з 
одного алфавіту на символи іншого алфавіту
*/

#include <iostream>
#include <Windows.h>
using namespace std;

/*
S - вхідний рядок
S1 - рядок-результат
a1 - вхідний алфавіт
a2 - алфавіт, в який треба перекласти
*/
void zamena(char* S, char* S1, char* a1, char* a2)
{
	int poz;
	int i;
	while (*S != '\0')
	{
		// отримання номера символу з першого алфавіту
		for (i = 0; a1[i] != '\0'; i++)
			if (*S == a1[i]) {
				poz = i; break;
			}
		// заміна (запис) символу в новому алфавіті
		*S1 = a2[poz];
		// зміщення до наступного символу
		S++; S1++;
	}
	*S1 = '\0';
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//char S [] = "3179023";
	char S[80];
	cout << "Введіть рядок -> "; gets_s(S);
	char S1[80];
	char a1[] = "1234567890";
	char a2[] = "abcdefghjk";
	zamena(S, S1, a1, a2);
	puts(S1);
}