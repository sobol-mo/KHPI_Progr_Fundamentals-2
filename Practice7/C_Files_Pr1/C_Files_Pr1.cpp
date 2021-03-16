/*
Файли в стилі С.
Приклад 1.
Написати програму, у якій потрібно ввести в файл 
інформацію посимвольно з клавіатури до символу # 
і після вивести з файлу на екран теж посимвольно
*/

#include <iostream>
using namespace std;

int main()
{
	FILE* f;
	fopen_s(&f, "t1.txt", "w");
	char ch = getchar();
	while (ch != '#')
	{
		fputc(ch, f);	// запис в файл символу
		ch = getchar();
	}
	fclose(f);
	// ----------------
	// Читання символів з файлу
	fopen_s(&f, "t1.txt", "r");
	ch = fgetc(f);
	while (!feof(f))
	{
		putchar(ch);
		ch = fgetc(f);
	}
	fclose(f);
}

