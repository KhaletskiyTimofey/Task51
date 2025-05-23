#include "logic.h"

// Loop Realization
//int get_fibonacci_number(int index)
//{
//	if (index <= 1)
//	{
//		return 1;
//	}
//
//	int last_last_number = 1;
//	int last_number = 1;
//
//	for (int i = 2; i <= index; i++)
//	{
//		int number = last_last_number + last_number;
//
//		last_last_number = last_number;
//		last_number = number;
//	}
//
//	return last_number;
//}

// Recursion Realization
int get_fibonacci_number(int index)
{
	if (index <= 1)
	{
		return 1;
	}

	return get_fibonacci_number(index - 2) + get_fibonacci_number(index - 1);
}