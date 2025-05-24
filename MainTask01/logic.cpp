#include "logic.h"

// Loop Realization
//int sum_of_digits(int number)
//{
//	number = number < 0 ? -number : number;
//
//	int sum = 0;
//
//	while (number != 0)
//	{
//		sum += number % 10;
//		number /= 10;
//	}
//
//	return sum;
//}

// Recursion Realization
int sum_of_digits(int number)
{
	if (number == 0)
	{
		return 0;
	}

	number = number < 0 ? -number : number;

	int digit = number % 10;

	return digit + sum_of_digits(number / 10);
}