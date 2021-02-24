/*
	Рядки.
Створити функцію обчислення довжини рядка
За матеріалами:
https://www.youtube.com/watch?v=hFqXg1yjG6M&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=76
*/
#include <iostream>
using namespace std;

int strLength(const char* str)
{
	int counter = 0;
	while (str[counter] != '\0')
	//while (*(str+counter) != '\0') - аналогічний запис
	{
		counter++;
	}
	return counter;
}

int main()
{
	char str[] = "Hello";
	//char str[] = { 'H','e','l','l','o','\0' }; 
	// аналогічний запис
	cout << strLength(str) << endl;
}