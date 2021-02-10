/*
Приклад #define 3
Макропідстановки і макроозначення
Написати функцію-макрос виведення у консоль
із використанням знаку #
*/
#include <iostream>
using namespace std;

#define Print(a) cout << #a << " = " << (a)

int main()
{
	int variable_X = 10;
	Print(variable_X);

	return 0;
}