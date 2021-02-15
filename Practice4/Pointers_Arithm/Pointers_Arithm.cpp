/*	
	Указники та масиви. Арифметика указників
	за матеріалами уроку №47 / 57
	https://www.youtube.com/watch?v=Weh6UoLkNUQ&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=57
*/
 
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	int arr[SIZE]{ 4, 55, 79, 1, 4 };

	cout << "arr \t: " << arr << endl;
	cout << "*arr\t: " << *arr << endl;
	cout << "*(arr + 1) \t: " << *(arr + 1) << endl;
	cout << "*(arr + 2) \t: " << *(arr + 2) << endl;

	cout << "========== arr[i] =============" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[" << i << "] \t: ";
		cout << arr[i] << endl;
	}

	cout << "========== *(arr+i) ===========" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "*(arr + " << i << ") \t: ";
		cout << *(arr + i) << endl;
	}

	cout << "========== (arr+i) ============" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "(arr + " << i << ") \t: ";
		cout << (arr + i) << endl;
	}

	cout << "========== (arr+10) ============" << endl;
	cout << "(arr + 10) \t: " << (arr + 10) << endl;
	cout << "*(arr + 10) \t: " << *(arr + 10) << endl;
}

