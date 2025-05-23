#include "test.h"

void test(string name, int number, int expected)
{
	int actual = calculate_factorial(number);

	cout << name << ": " << (actual == expected ? "PASS" : "FAIL") << endl;
}