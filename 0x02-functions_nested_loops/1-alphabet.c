#include "main.h"
/**
 * print_alphabet - print alphabet to the screen
 * Return: returns no value;
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
