#include  "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: return a concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	int a, dest_length = string_length(dest);

	for (a = 0; src[a] = '\0'; a++)
	{
		dest[dest_length + a] = src[a];
	}
	dest[dest_length + a] = '\0';
}

/**
 * string_length - finds length of string
 * @str: string parameter
 * Return: returns a number
 */
int string_length(char *str)
{
	int a, count = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		count++;
	}

	return (count);
}
