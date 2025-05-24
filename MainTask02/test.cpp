#include "test.h"

void test(string name, int number, bool expected)
{
	cout << name << ": " << (is_power_of_three(number) == expected ? "PASS" : "FAIL") << endl;
}