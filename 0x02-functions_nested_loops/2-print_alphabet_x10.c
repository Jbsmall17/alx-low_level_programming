#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times to the screen
 * return: returns no value
 */

void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}

