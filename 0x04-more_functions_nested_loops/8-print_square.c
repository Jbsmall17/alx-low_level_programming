#include "main.h"

/**
 * print_square - prints a n area of square
 * @size: parameter
 */
void print_square(int size)
{
	while (size > 0)
	{
		while (size > 0)
		{
			_purchar('#');
			size--;
		}
		_purchar('\n');
		size--;	
	}
	_purchar('\n');
}
