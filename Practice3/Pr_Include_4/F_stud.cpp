#include "F_stud.h"
#include "S_stud.h"
#include <iostream>
using namespace std;

#define DEBUG
#define PRINT_TYPE 1	// Друк за допомогою COUT
//#define PRINT_TYPE 2	// Друк за допомогою PTINTF

int max_oc(stud spis[], int size)
{
#ifdef DEBUG
	cout << __FUNCTION__ << " " << __DATE__ << endl;
#endif // DEBUG

	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (spis[i].oc > max) max = spis[i].oc;
	}

#if PRINT_TYPE == 1
	cout << "Print from max_oc with cout, max = ";
	cout << max << endl;
#else
	printf("Print from max_oc with printf, ");
	printf("max = % d \n", max);
#endif // PRINT_TYPE == 1

	return max;
}
