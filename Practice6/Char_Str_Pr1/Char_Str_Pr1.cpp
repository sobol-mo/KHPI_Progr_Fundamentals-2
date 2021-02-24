/*
	Рядки в стилі С.
Приклад 1
Написати функцію, яка в кожному слові замінить голосні
на заданий символ. Речення вводиться з клавіатури.
*/

#include <iostream>
using namespace std;

int main()
{
	char S[80];
	//char S[] = "qweiupjkjsoo";
	char gl[] = "aeouiy";
	int i, j;
	gets_s(S);
	char c = getchar();
	for ( i = 0; i < strlen(S); i++)
	{
		for ( j = 0; j < strlen(gl); j++)
		{
			if (S[i] == gl[j]) 
				S[i] = c;
		}
	}
	puts(S);
}