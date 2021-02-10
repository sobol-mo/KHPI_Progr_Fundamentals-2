/*
Приклад 7
Створити структуру "Ферма":
- ID
- вид тварини
- вага
На фермі 20 тварин, кролики та індики.
Написати функцію знаходження найважчого кролика.
*/
#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string
#include <Windows.h>
using namespace std;
const int N = 20;		// Кількість тварин

// Визначаємо новий перераховуваний тип Animals
enum Animals
{
	ANIMAL_RABBIT,
	ANIMAL_TURKEY
};

struct FarmAnimal
{
	unsigned int id;
	Animals type;
	float weight;
};

// Функція заповнення масиву тваринами
void inputAnimails(FarmAnimal animals[], int N)
{
	for (int i = 0; i < N; i++)
	{
		animals[i].id = i + 1;
		animals[i].type = Animals((rand() % 2));
		animals[i].weight = float(rand() % 50) / 10 + 1;

		cout << i << ": " << "id=";
		cout << animals[i].id << " ";
		if (animals[i].type == ANIMAL_RABBIT)
			cout << "Кролик";
		else cout << "Індик";
		cout << " " << animals[i].weight << "\n";
	}
}

int findRabbit(FarmAnimal animals[], int N)
{
	int maxWeight = 0;
	int maxWaightRabbitIndex = 0;

	// Пошук кролика з максимальною вагою
	for (int i = 0; i < N; i++)
	{
		if (animals[i].weight > maxWeight && 
			animals[i].type == ANIMAL_RABBIT)
		{
			maxWeight = animals[i].weight;
			maxWaightRabbitIndex = i;
		}
	}
	return maxWaightRabbitIndex;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int maxWaightRabbitIndex = 0;
	FarmAnimal animals[N];

	while (true)
	{
		// Завдання вихідних даних
		inputAnimails(animals, N);
		// Пошук кролика з максимальною вагою
		maxWaightRabbitIndex = findRabbit(animals, N);
		// Виведення інформації
		cout << "Кролик з максимальною вагою : ";
		cout << "id=" << animals[maxWaightRabbitIndex].id;
		cout << " " << "\n";

		system("pause");
		system("cls");
	}
	return 0;
}