#include "logic.h"

// Loop Realization
//int find_max_digit(int number)
//{
//	number = number < 0 ? -number : number;
//
//	int max_digit = 0;
//
//	while (number != 0)
//	{
//		if (number % 10 > max_digit)
//		{
//			max_digit = number % 10;
//		}
//
//		number /= 10;
//	}
//
//	return max_digit;
//}

// Recursion Realization
int find_max_digit(int number)
{
	if (number == 0)
	{
		return 0;
	}

	number = number < 0 ? -number : number;

	int digit = find_max_digit(number / 10);

	return digit > number % 10 ? digit : number % 10;
}