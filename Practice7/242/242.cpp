/*
Задача 242.
Культин Н. Б. - CC+ в задачах и  примерах 3-е 
издание -2019.pdf
Написать программу, которая позволяет найти в 
телефонном справочнике(в файле contacts.txt) нужную 
информацию. Программа должна запрашивать у 
пользователя фамилию человека и выводить информацию 
о нем.Если в справочнике есть люди с одинаковыми 
фамилиями, то программа должна вывести список всех 
этих людей.

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
	char obr[15]; // фамилия - образец для поиска в БД
	// найденная информация
	char fam[15]; // фамилия
	char name[15]; // имя
	char tel[9]; // номер телефона
	// количество записей, удовлетворяющих запросу
	int n = 0;
	puts("\nПоиск в телефонном справочнике");
	// Открыть файл в режиме чтения (r) текста (t)
	if ((f = fopen(fname, "rt")) == NULL)
	{
		printf("Ошибка открытия файла %s", fname);
		_getch();
		return;
	}
	// получим данные от пользователя
	printf("Фамилия ->");
	scanf("%s", &obr); // образец для поиска в БД
	while (true)
	{
		fscanf(f, "%s %s %s", &fam, &name, &tel);
		if (feof(f)) break;
		if (strcmp(fam, obr) == 0)
		{
			printf("\n%s %s %s", fam, name, tel);
			n++;
		}
	}
	if (n)
		printf("\nНайдено записей: %i", n);
	else
		printf("\nДанных об абоненте %s в БД нет", 
			obr);
	fclose(f); // закрыть файл
	puts("\nДля завершения работы нажмите <Enter>");
	_getch();
}