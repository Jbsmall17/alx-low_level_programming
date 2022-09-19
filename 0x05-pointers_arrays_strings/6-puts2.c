#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: store a string
 */
void puts2(char *str)
{
	int i = string_length(str)

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

/**
 * string_length - print length of a string
 * @word: stores a string
 * Return: return a number
 */

int string_length(char *word)
{
	int length;

	for (length = 0; word[length] != '\0'; length++)
	{
	}
	return (length);
}
