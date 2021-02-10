/*
Приклад #include 4
Багатофайловий проект
Роздільна компіляція
Захист від повторного включення
Включення / вимикання / перемикання 
між типами налагоджувальної інформації

Створити функцію знаходження максимальної оцінки 
в масиві структур "ім'я, оцінка". Функція повинна 
бути в окремому файлі. Передбачити перемикання 
між двома типами друку результату (через cout і 
printf). У якості налагоджувальної інформації 
в функції виводити поточну дату і ім'я файлу
*/
#include <iostream>
#include <ctime>
#include "F_stud.h"
#include "S_stud.h"
#define N 5		// Розмір масиву
using namespace std;

int main()
{
	srand(time(NULL));
	stud spis[N];
	int max;

	// Заповнення масиву структур
	// зі студентами та оцінками
	for (int i = 0; i < N; i++)
	{
		spis[i].name = "Name" +
						to_string(rand() % 10 + 1);
		spis[i].oc = rand() % 3 + 3;
		cout << spis[i].name << " ";
		cout << spis[i].oc << endl;
	}

	// Виклик функції обчислення максимальної оцінки
	max = max_oc(spis, N);
	cout << "Print from main, max = " << max << endl;
	system("pause");

	return 0;
}