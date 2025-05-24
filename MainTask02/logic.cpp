#include "logic.h"

// Loop Realization
//bool is_power_of_three(int number)
//{
//	while (number > 1)
//	{
//		if (number % 3 != 0)
//		{
//			return false;
//		}
//
//		number /= 3;
//	}
//
//	return number == 1;
//}

// Recursion Realization
bool is_power_of_three(int number)
{
	if (number <= 1)
	{
		return number == 1;
	}

	if (number % 3 != 0)
	{
		return false;
	}

	return is_power_of_three(number / 3);
}