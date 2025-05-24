#include "test.h"

void test(string name, int number, int expected)
{
	int actual = sum_of_digits(number);

	cout << name << ": " << (actual == expected ? "PASS" : "FAIL") << endl;
}