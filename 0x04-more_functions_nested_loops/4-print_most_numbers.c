#include "main.h"

/**
 * print_most_numbers - print numbers except from two and four
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			continue;
		else
			_putchar('0' + c);
	}
	_putchar('\n');
}
