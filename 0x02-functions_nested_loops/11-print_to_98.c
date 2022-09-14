#include "main.h"
/**
 * print_to_98 - print numbers
 * @n: parameter
 */
void print_to_98(int n)
{
	for (n; n <= 98; n++)
	{
		_purchar(n);
		_purchar(",");
		_purchar(" ");
	}
	_purchar("\n");
}
