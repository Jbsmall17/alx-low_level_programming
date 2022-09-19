#include "main.h"

/**
 * _puts - print a string
 * @str: string parameter
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a]; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
