/*
Задача 240.
Культин Н. Б. - CC+ в задачах и  примерах 3-е 
издание -2019.pdf
Написать программу, которая дописывает в находящийся
на диске компьютера файл contacts.txt имя, фамилию 
и номер телефона, например, вашего товарища. Если 
файла на диске нет, то программа должна создать его.
В файле каждый элемент данных(имя, фамилия, телефон) 
должен находиться в отдельной строке.

Необходимо добавить _CRT_SECURE_NO_WARNINGS в 
свойства проекта или #define _CRT_SECURE_NO_WARNINGS
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

#define FNAME "d:\\temp\\contacts.txt\0" // имя файла
void main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	char fname[22] = FNAME;
	FILE* f; // файл
	char fam[15]; // фамилия
	char name[15]; // имя
	char tel[9]; // номер телефона
	printf("\nДобавление информации в телефонный ");
	puts("справочник\n");
	// Открыть файл в режиме добавления(а) текста(t)
	// Если файла с таким именем нет, 
	// то он будет создан
	if ((f = fopen(fname, "at")) == NULL)
	{
		printf("Ошибка открытия файла для ");
		printf("добавления");
		_getch();
		return;
	}
	// получим данные от пользователя
	printf("Фамилия ->");
	scanf("%s", &fam);
	printf("Имя ->");
	scanf("%s", &name);
	printf("Телефон ->");
	scanf("%s", &tel);
	// запишем данные в файл
	fprintf(f, "%s %s %s\n", fam, name, tel);
	puts("\nИнформация добавлена");
	fclose(f); // закрыть файл
	printf("\n\nДля завершения нахмите <Enter>\n");
	_getch();
}