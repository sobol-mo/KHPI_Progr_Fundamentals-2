/*
Приклад #include 2
Багатофайловий проект
Створити проект, який буде реалізовувати виведення 
повідомлення в консоль.Функція виведення повинна бути 
в окремому файлі і окремому просторі імен
*/
#include "Print.h"
using namespace std;

int main()
{
	MyNamespace::PrintMessage("Hello World!");

	return 0;
}