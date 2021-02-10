/*
Приклад 2 за матеріалами Simple Code на тему 
структури і перерахування (enum)
Створити структуру "Літак", в якій зберігалися б
константи (у вигляді enum) швидкісних характеристик:
- мінімальна швидкість
- рекомендована швидкість
- максимальна швидкість
Написати функцію, задати швидкість руху літака 
за допомогою цих констант, і вивести її на друк
*/
#include <iostream>	// std::cout
#include <Windows.h>
using namespace std;

struct Plane
{
	enum PlaneSpeed
	{
		MIN = 150,
		RECOMEND = 600,
		MAX = 800
	} Speed;
	string name;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Створення літака
	Plane plane;							
	// Завдання імені літака
	plane.name = "F-10";
	// Завдання поточної швидкості літака
	plane.Speed = Plane::PlaneSpeed::RECOMEND;	

	// Виведення швидкості літака
	cout << "Літак " << plane.name; 
	cout << " рухається на швидкості " << plane.Speed;
	cout << " км/год \n";

	return 0;
}