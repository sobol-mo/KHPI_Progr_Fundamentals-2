/*
Задача 239.
Культин Н. Б. - CC+ в задачах и  примерах 3-е 
издание -2019.pdf
Написать программу, которая позволяет просматривать 
текстовые файлы (выводит на экран их содержимое) — 
например, файлы исходных программ C / C++. 
Имя просматриваемого файла должно вводиться 
пользователем во время работы программы.

Необходимо добавить _CRT_SECURE_NO_WARNINGS в 
свойства проекта или #define _CRT_SECURE_NO_WARNINGS
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;
// максимальная длина строки в файле
#define MAXLEN 80 
void main()
{
	setlocale(LC_ALL, "Russian");
	char fname[40]; // имя файла
	FILE* f; // текстовый файл
	// строка, прочитанная из файла
	char st[MAXLEN + 2];
	int n = 0; // кол - во строк, выведенных на экран
	char key; // клавиша, нажатая пользователем
	puts("Просмотр текстового файла");
	printf("Введите полное имя файла и нажмите ");
	puts("<Enter>");
	printf("->");
	scanf("%s", &fname);
	// Открыть файл в режиме чтения (r) текста (t)
	if ((f = fopen(fname, "rt")) == NULL)
	{
		printf("Ошибка при обращении к файлу %s\n", 
			fname);
		_getch();
		return;
	}
	while (!feof(f))
	{
		fgets(st, MAXLEN, f);
		printf("%s", st);
		if (++n > 21)
		{
			printf("\nДля продолжения наймите ");
			printf("<Enter>");
			key = _getch();
			n = 0;
		}
	}
	fclose(f); // закрыть файл
	printf("\nДля завершения наймите <Enter>");
	_getch();
}