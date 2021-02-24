/*
	Рядки в стилі С.
Приклад 4
Написати функцію, яка видалить з рядка задану 
кількість символів, починаючи з заданої позиції
*/

#include <iostream>
#include <Windows.h>
using namespace std;

/*
S - вхідний рядок
S1 - рядок-результат
poz - позиція
kol - кількість символів, які треба видалити
*/
void fun(char* S, char* S1, int poz, int kol)
{
	// 1) записування ДО видалення
	for (int i = 0; i < poz; i++) {
		*S1 = *S;
		S1++; S++;
	}
	// 2) видалення, фактично обхід
	for (int i = 0; i < kol; i++) S++;
	// 3) переписування залишку
	while (*S != '\0')
	{
		*S1 = *S;
		S1++; S++;
	}
	// 4) установка ознаки кінця рядка
	*S1 = '\0';
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//char S [] = "01234567";
	char S[80];
	cout << "Введіть рядок -> "; gets_s(S);
	char S1[80];
	int poz = 2;
	int kol = 4;
	cout << "Введіть позицію n -> "; cin >> poz;
	cout << "Введіть кількість символів dl -> "; 
	cin >> kol;
	fun(S, S1, poz, kol);
	puts(S1);
}