#include "main.h"

/**
 * puts_half - print half of a screen
 * @str: stores a string
 */
void puts_half(char *str)
{
	int a, b;

	a = _strlen(str);
	if (a % 2 == 0)
	{
		for (b = a / 2; b < a; b++)
			_putchar(str[b]);
	}
	else
	{
		for (b = ((a - 1) / 2) + 1; b < a; b++)
			_putchar(str[b]);
	}
	_putchar('\n');
}
/**
 * _strlen - returns the kength of a string
 * @s: a pointer to s
 * Return: returns a number
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
