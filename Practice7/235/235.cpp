/*
Задача 235. 
Культин Н. Б. - CC+ в задачах и  примерах 3-е 
издание -2019.pdf
Написать программу, которая выводит на экран 
содержимое файла numbers.txt.

Необходимо добавить _CRT_SECURE_NO_WARNINGS в 
свойства проекта или #define _CRT_SECURE_NO_WARNINGS
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

#define FNAME "d:\\temp\\numbers.txt\0" // имя файла
void main()
{
	setlocale(LC_ALL, "Russian");
	char fname[40] = FNAME;
	FILE* f; // текстовый файл
	char st[80]; // строка из файла
	printf("\nСодержимое файла %s\n", fname);
	puts("---------------------------------");
		// Открыть файл в режиме чтения(r) текста(t)
	if ((f = fopen(fname, "rt")) == NULL)
	{
		printf("Ошибка открытия файла для чтения");
		_getch();
		return;
	}
	while (!feof(f))
	{
		fscanf(f, "%s", &st);
		printf("%s\n", st);
	}
	fclose(f); // закрыть файл
	puts("---------------------------------");
	puts("\nДля завершения наймите <Enter>");
	_getch();
}