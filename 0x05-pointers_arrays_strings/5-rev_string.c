#include "main.h"

/**
 * rev_string - print a reverse string
 * @s: stores a string
 */
void rev_string(char *s)
{
	int j = string_length(s);
	int k;

	for (k = j - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
}

/**
 * string_length - print the length of a string
 * @l: store a string
 * Return: returns a number
 */
int string_length(char *l)
{
	int i;

	for (i = 0; l[i] != '\0'; i++)
	{
	}
	return (i);
}
