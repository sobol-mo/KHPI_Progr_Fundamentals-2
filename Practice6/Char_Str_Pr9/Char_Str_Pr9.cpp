/*
	Рядки в стилі С.
Приклад 9
Написати функцію, яка виділяє з рядка задану кількість
слів, починаючи зі слова із заданим номером
*/

#include <iostream>
#include <Windows.h>
using namespace std;

/*
S - вхідний рядок
S1 - рядок-результат
nom - порядковий номер слова
kol - кількість слів
*/
void vidsl(char* S, char* S1, int nom, int kol)
{
	int prob1 = 0;
	while (prob1 != nom - 1 && *S != '\0')
	{
		if (*S == ' ') prob1++;
		S++;
	}
	int prob2 = 0;
	while (prob2 != kol && *S != '\0')
	{
		if (*S == ' ') prob2++;
		*S1 = *S;
		S1++; S++;
	}
	S1--;
	*S1 = '\0';
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char S [] = "111 222 333 444 555 66";
	/*char S[80];
	cout << "Введите строку -> "; gets_s(S);*/
	char S1[80];
	int nom = 2;
	int kol = 3;
	cout << "Введіть порядковий номер слова nom -> ";
	cin >> nom;
	cout << "Введіть кількість слів kol -> ";
	cin >> kol;
	vidsl(S, S1, nom, kol);
	puts(S1);
}