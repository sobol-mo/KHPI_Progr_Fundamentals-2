﻿/*
Задача 233. 
Культин Н. Б. - CC+ в задачах и  примерах 3-е 
издание -2019.pdf 
Написать программу, которая создает на диске файл
numbers.txt и записывает в него 5 целых чисел, 
введенных пользователем с клавиатуры. Откройте 
созданный программой файл и убедитесь, что каждое 
число находится в отдельной строке.

Необходимо добавить _CRT_SECURE_NO_WARNINGS в 
свойства проекта или #define _CRT_SECURE_NO_WARNINGS
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

#define FIWIE "d:\\temp\\numbers.txt\0"
#define N 5 // количество чисел
// Создает на диске файл и записывает в него
// целые числа, введенные пользователем
void main()
{
	setlocale(LC_ALL, "Russian");

	char fname[40] = FIWIE;
	FILE* f; // файл чисел
	int n; // число
	puts("\nСоздание файла");
	printf("Введенные числа будут записаны в ");
	printf("файл %s\n", fname);
	printf("После ввода каждого числа нажимайте ");
	puts("<Enter>\n");
	// Открыть файл в режиме записи (w) текста (t)
	// Если файл с таким именем уже есть, то новые
	// данные будут записаны поверх старых
	// Для добавления в конец файла используйте
	// режим добавления (а)
	if ((f = fopen(fname, "wt")) == NULL)
	{
		printf("Ошибка открытия файла для записи");
		_getch();
		return;
	}
	for (int i = 0; i < N; i++)
	{
		printf("->");
		scanf("%i", &n);
		fprintf(f, "%i\n", n);
	}
	fclose(f); // закрыть файл
	printf("Введенные числа записаны в файл %s\n", 
		fname);
	puts("\nДля завершения нажмите <Enter>");
	_getch();
}