#include "test.h"

int main()
{
	test("Test01", -1, 0);
	test("Test02", 0, 0);
	test("Test03", 1, 1);
	test("Test04", 2, 2);
	test("Test05", 3, 6);
	test("Test06", 4, 24);
	test("Test07", 5, 120);
	test("Test08", 6, 720);
	test("Test09", 7, 5040);
	test("Test10", 8, 40320);

	return 0;
}