/*
Задача 238.
Культин Н. Б. - CC+ в задачах и  примерах 3-е 
издание -2019.pdf
Написать программу, которая загружает из файла 
данные в двумерный массив дробного типа

Необходимо добавить _CRT_SECURE_NO_WARNINGS в 
свойства проекта или #define _CRT_SECURE_NO_WARNINGS
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;
void main()
{
#define NR 3
#define NC 6
	setlocale(LC_ALL, "Russian");
	// массив NRxNC - NR строк из NC элементов
	float a[NR][NC]; 
	FILE* f; // файл
	// предполагается, что строки текстового файла
	// содержат значения строк элементов массива
	// Открыть для чтения (r) текстовый файл (t)
	if ((f = fopen("d:\\temp\\a.dat", "rt")) == NULL)
	{
		printf("HeT файла d:\\temp\\a.dat");
		printf("\nДля завершения нахмите <Enter>");
		_getch();
		return;
	}
	int r, c; // номер строки и столбца
	for (r = 0; r < NR; r++)
	{
		for (c = 0; c < NC; c++)
		{
			fscanf(f, "%f", &a[r][c]);
		}
	}
	fclose(f);
	printf("\nДанные, загруженные в массив из ");
	printf("файла : \n");
	// показать прочитанные данные
	for (r = 0; r < NR; r++)
	{
		for (c = 0; c < NC; c++)
		{
			printf("%7.2f ", a[r][c]);
		}
		printf("\n");
	}
	printf("\nДля завершения нажмите <Enter>");
	_getch();
}