#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: an array of integers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i]);
	}
	_putchar('\n');
}
