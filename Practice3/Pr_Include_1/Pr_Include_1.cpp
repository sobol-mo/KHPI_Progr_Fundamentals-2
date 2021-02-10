/*
Приклад #include 1
Багатофайловий проект
Створити проект, який буде реалізовувати складання двох
чисел, функція складання повинна бути в окремому файлі
*/
#include <iostream>
#include "Sum.h"
using namespace std;

int main()
{
	int result = Sum(2, 3);
	cout << result << endl;

	return 0;
}