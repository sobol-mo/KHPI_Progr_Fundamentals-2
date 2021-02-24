/*
	Рядки в стилі С.
Приклад 7
Написати функцію, яка визначає в рядку номер 
позиції слова із заданим порядковим номером
*/

#include <iostream>
#include <Windows.h>
using namespace std;

/*
S - вхідний рядок
nom - порядковий номер слова
*/
int pozsl(char* S, int nom)
{
	int probel = 0;
	int poz = 0;
	while ((probel != nom - 1) && (*S != '\0'))
	{
		if (*S == ' ') probel++;
		S++;
		poz++;
	}
	return poz;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//char S [] = "1111 2222 333 4444 55";
	char S[80];
	cout << "Введіть рядок -> "; gets_s(S);
	int nom = 4;
	cout << "Введіть порядковий номер слова nom -> ";
	cin >> nom;
	cout << "Номер позиції в реченні: ";
	cout << pozsl(S, nom) << endl;	
}