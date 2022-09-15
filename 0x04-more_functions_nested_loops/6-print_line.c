#include "main.h"

/**
 * print_line - print a strainght line
 * @n: parameter
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
			_putchar('_');
	}
}
