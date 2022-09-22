#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 * @str: a string with lowercase character
 * Return: returns a string
 */
char *string_toupper(char *str)
{
	int i;

	for (i =  0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
