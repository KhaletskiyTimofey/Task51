#include "logic.h"

// Loop Realization
//int calculate_factorial(int number)
//{
//	if (number <= 0)
//	{
//		return 0;
//	}
//
//	int factorial = 1;
//
//	for (int i = 2; i <= number; i++)
//	{
//		factorial *= i;
//	}
//
//	return factorial;
//}

// Recursion Realization
int calculate_factorial(int number)
{
	if (number <= 0)
	{
		return 0;
	}

	if (number == 1)
	{
		return 1;
	}

	return number * calculate_factorial(number - 1);
}