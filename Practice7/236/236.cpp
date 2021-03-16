/*
Задача 236. 
Культин Н. Б. - CC+ в задачах и  примерах 3-е 
издание -2019.pdf
Написать программу, которая вычисляет среднее 
арифметическое чисел, находящихся в файле numbers.txt.

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
	FILE* f;	// текстовый файл
	int a;		// число
	int n = 0;	// количество чисел
	int sum = 0; // сумма чисел
	float sr;	// среднее арифметическое
	puts("\nВычисление среднего арифметического");
	printf("чисел, находящихся в файле %s\n", fname);
	// Открыть файл в режиме чтения (г) текста (t)
	if ((f = fopen(fname, "rt")) == NULL)
	{
		printf("Ошибка открытия файла для чтения");
		_getch();
		return;
	}
	while (!feof(f))
	{
		fscanf(f, "%i", &a);
		sum += a;
		n++;
	}
	fclose(f); // закрыть файл
	sr = (float)sum / n;
	printf("Введено чисел: %i\n", n);
	printf("Cyммa чисел: %i\n", sum);
	printf("Среднее арифметическое: %3.2f", sr);
	puts("\nДля завершения наймите <Enter>");
	_getch();
}