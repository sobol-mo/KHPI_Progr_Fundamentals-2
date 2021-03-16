/*
Задача 244.
Культин Н. Б. - CC+ в задачах и  примерах 3-е 
издание -2019.pdf
Написать программу, при помощи которой можно 
автоматизировать процесс проверки знаний.

Необходимо добавить _CRT_SECURE_NO_WARNINGS в 
свойства проекта или #define _CRT_SECURE_NO_WARNINGS
Файл с тестом (здесь исмользовался test.txt) должен 
лежать в папке с проектом (в кодировке ANCI 
(Windows-1251)). В свойствах прокета необходимо 
заполнить поле Debugging->Command Arguments именем 
файла с тестом
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>


using namespace std;
void main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	char fname[40]; // имя файла теста
	FILE* f; // файл теста
	int VsegoVopr = 0; // количество вопросов теста
	int PravOtv = 0; // количество правильных ответов
	// для текущего вопроса
	int nOtv; // количество альтернативных ответов
	int Prav; // номер правильного ответа
	int Otv; // номер ответа, выбранного пользователем
	int p;		// процент правильных ответов
	char st[80]; // строка файла теста
	int i; // счетчик циклов
	if (!argc)
	{
		puts("\nHe задан файл вопросов теста!");
		printf("Командная строка: НазваниеПрограммы");
		puts(" ИмяФайлаТеста\n");
		system("pause");
		return;
	}

	strcpy(fname, argv[1]);
	// имя файла из командной строки
	// Открыть файл в режиме чтения (r) текста (t)
	if ((f = fopen(fname, "rt")) == NULL)
	{
		printf("Ошибка открытия файла %s", fname);
		_getch();
		return;
	}
	system("cls");
	puts("\nCeйчac Вам будет предложен тест.");
	printf("\nК каждому вопросу дается несколько ");
	puts("вариантов ответа.");
	printf("\nВы должны ввести номер правильного ");
	puts("ответа");
	puts("\nи нажать клавишу <Enter>\n");
	printf("\nДля начала тестирования нажмите ");
	printf("<Enter>");
	_getch();
	system("color 17");
	system("cls");
	while (!feof(f))
	{
		VsegoVopr++;
		fgets(st, 80, f); // читаем из файла вопрос
		printf("\n%s\n", st); // вопрос на экран
		fscanf(f, "%i %i", &nOtv, &Prav);
		// кол-во вариантов
		// ответа
		// и номер прав, ответа
		fgets(st, 80, f);
		// дочитать конец предыдущей строки

		// читаем и выводим альтернативные ответы
		for (i = 1; i <= nOtv; i++)
		{
			fgets(st, 80, f);
			printf("%i. %s", i, st);
		}
		printf("\nВаш выбор ->");
		scanf("%i", &Otv);
		if (Otv == Prav) PravOtv++;
	}
	// обработка результата тестирования
	// вычислим процент правильных ответов
	p = 100 * PravOtv / VsegoVopr;
	printf("\nВаша оценка - ");
	if (p == 100)
		puts("ОТЛИЧНО!");
	if (p >= 99 && p <= 80)
		puts("xopomo.");
	if (p >= 60 && p <= 79)
		puts("УДОВЛЕТВОРИТЕЛЬНО.");
	if (p < 60)
		puts("ПЛOXO!\n");
	puts("\nДля завершения нажмите <Enter>");
	_getch();
	//system("pause");
}