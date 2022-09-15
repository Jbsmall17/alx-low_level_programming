#include "main.h"

/**
 * print_line - print a strainght line
 * @n: parameter
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
