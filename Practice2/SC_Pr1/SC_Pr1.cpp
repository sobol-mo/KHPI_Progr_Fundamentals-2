/*
Приклад 1 за матеріалами Simple Code на тему 
структури і перерахування (enum)
Створити структуру зберігання імені 
та стану комп'ютера (включений, вимкнений, спить),
задати стан, і вивести на друк
*/
#include <iostream>	// std::cout
#include <Windows.h>
using namespace std;

struct PC
{
	enum PCState
	{
		ON,
		OFF,
		SLEEP
	} State;
	string name;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Створення комп'ютера
	PC pc;							
	// Завдання імені комп'ютера
	pc.name = "My computer";
	// Зміна стану комп'ютера в Виключений
	pc.State = PC::PCState::OFF;	

	// Виведення стану комп'ютера
	cout << "Комп'ютер <" << pc.name;
	switch (pc.State)
	{
	case PC::PCState::OFF:
		cout << "> виключений" << "\n";
		break;
	case PC::PCState::ON:
		cout << "> працює" << "\n";
		break;
	case PC::PCState::SLEEP:
		cout << "> спить" << "\n";
		break;
	default:
		break;
	}

	return 0;
}