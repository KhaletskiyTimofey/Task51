#include "test.h"

int main()
{
	test("Test01", 0, 0);
	test("Test02", -1234, 10);
	test("Test03", 1234, 10);
	test("Test04", 2468, 20);
	test("Test05", 7777, 28);
	test("Test06", -1, 1);
	test("Test07", 2578, 22);

	return 0;
}