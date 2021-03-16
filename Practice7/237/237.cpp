/* 
Задача 237.
Культин Н. Б. - CC+ в задачах и  примерах 3-е 
издание -2019.pdf
Написать программу, которая записывает в файл данные,
находящиеся в двумерном массиве дробного типа.

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
	// массив данных
	float a[NR][NC] =
	{
	15.0,16.5,18.0,19.5,21.0,24.0,
	16.5,18.0,19.5,21.0,22.5,24.0,
	18.0,19.5,21.0,22.5,24.0,27.0
	};
	FILE* f;	// файл
	int r, c;	// номер строки и столбца
		// показать данные
	printf("\nДанные:\n");
	for (r = 0; r < NR; r++)
	{
		for (c = 0; c < NC; c++)
		{
			printf("%5.2f ", a[r][c]);
		}
		printf("\n");
	}
	// предполагается, что строки текстового 
	// файла будут содержать значения
	// строк элементов массива
	// Открыть для записи(w) текстовый файл(t)
	// Если файл с указанным именем уже существует,
	// он будет заменен новым
	if ((f = fopen("d:\\temp\\a.dat", "wt")) == NULL)
	{
		printf("Ошибка создания файла\n");
		printf("Для завершения нажмите <Enter>");
		_getch();
		return;
	}
	for (r = 0; r < NR; r++)
	{
		for (c = 0; c < NC; c++)
		{
			fprintf(f, "%5.2f ", a[r][c]);
		}
		if (r != NR - 1)
			fprintf(f, "\n");
	}
	fclose(f);
	printf("Данные записаны в файл\n");
	printf("\nДля завершения нажмите <Enter>");
	_getch();
}