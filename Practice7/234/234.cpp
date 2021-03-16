/*
Задача 234. 
Культин Н. Б. - CC+ в задачах и  примерах 3-е 
издание -2019.pdf
Написать программу, которая дописывает в файл 
numbers.txt три целых числа, введенных пользователем.
Убедитесь, открыв файл при помощи редактора текста, 
что в файле находятся 8 чисел.

Необходимо добавить _CRT_SECURE_NO_WARNINGS в 
свойства проекта или #define _CRT_SECURE_NO_WARNINGS
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

// имя файла
#define FNAME "d:\\temp\\numbers.txt\0" 
#define N 3 // количество чисел
// Дописывает в находящийся на диске файл numbers.txt
// целые числа, введенные пользователем
void main()
{
	setlocale(LC_ALL, "Russian");
	char fname[40] = FNAME;
	FILE* f; // файл чисел
	int n; // число
	puts("\nДобавление в файл");
	printf("Bвeденные числа будут добавлены в ");
	printf("файл %s\n", fname);
	printf("nocne ввода каждого числа нажимайте ");
	puts("<Enter>\n");
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
	for (int i = 0; i < N; i++)
	{
		printf("->");
		scanf("%i", &n);
		fprintf(f, "%i\n",n);
	}
	fclose(f); // закрыть файл
	printf("Введенные числа добавлены в файл %s\n", 
		fname);
	puts("\nДля завершения нажмите <Enter>");
	_getch();
}