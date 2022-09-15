#include "main.h"

/**
 * print_diagonal - PRINT DIAGONAL
 * @n: first parameter
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}

