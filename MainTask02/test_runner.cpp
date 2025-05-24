#include "test.h"

int main()
{
	test("Test01", 0, false);
	test("Test02", 1, true);
	test("Test03", 3, true);
	test("Test04", 9, true);
	test("Test05", 27, true);
	test("Test06", -1, false);
	test("Test07", 28, false);
	test("Test08", 2, false);
	test("Test09", 81, true);
	test("Test10", -27, false);

	return 0;
}