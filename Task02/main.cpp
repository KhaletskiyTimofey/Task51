#include <iostream>
#include "logic.h"

using namespace std;

int main()
{
	int operation_type;

	do {
		system("cls");

		cout << "0 - Get number by index" << endl;
		cout << "1 - Get numbers before number by index" << endl;
		cout << "Choose operation type (0 or 1): ";
		cin >> operation_type;
	} while (operation_type != 0 && operation_type != 1);

	int index;

	do {
		system("cls");

		cout << "Enter index: ";
		cin >> index;
	} while (index < 1);

	if (operation_type == 0)
	{
		cout << "Number: " << get_fibonacci_number(index - 1);
	}
	else
	{
		cout << "Numbers:";

		for (int i = 0; i < index; i++)
		{
			cout << " " << get_fibonacci_number(i);
		}
	}

	return 0;
}