/*
До практики № 2 по структурам в мовах С/С++

Приклад 1
Створити структуру "Працівники підприємства", 
яка містить 3 змінні.
Ініціалізувати струткуру.
Написати функцію, для виведення інформації та 
передати у неї структуру.
*/
#include <iostream>

struct Employee
{
	short id;
	int age;
	double salary;
};

void printInformation(Employee employee)
{
	std::cout << "ID: " << employee.id << "\n";
	std::cout << "Age: " << employee.age << "\n";
	std::cout << "Salary: " << employee.salary << "\n";
}

int main()
{
	// створюємо окрему структуру Employee для John-a
	Employee john = { 21, 27, 28.45 };
	// створюємо окрему структуру Employee для James-a
	Employee james = { 22, 29, 19.29 }; 

	// Виводимо інформацію про John-а
	printInformation(john);
	std::cout << "\n";
	// Виводимо інформацію про James-а
	printInformation(james);

	return 0;
}