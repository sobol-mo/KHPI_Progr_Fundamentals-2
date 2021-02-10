/*
Приклад #define 2
Макропідстановки і макроозначення
Написати просту програму з 
використанням зумовлених команд
*/
#include <iostream>
using namespace std;

int main()
{
	/*
		__FILE__ - повертає ім'я файлу (шлях)
		__DATE__ - повертає поточну дату
		__TIME__ - повертає поточний час
		__FUNCTION__ - повертає ім'я функції
	*/
	cout << __FILE__ << endl;
	cout << __DATE__ << endl;
	cout << __FUNCTION__ << endl;
	cout << __TIME__ << endl;

	return 0;
}