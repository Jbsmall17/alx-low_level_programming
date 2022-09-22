#include "main.h"

/**
 * *_strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: n number of character of string
 * Return: returns a concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, dest_length = string_length(dest);

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[dest_length + a] = src[a];
	dest[dest_length + a] = src[a];
	return (dest);
}

/**
 * string_length - find the length of a string
 * @str: string parameter
 * Return: returns length of a string
 */

int string_length(char *str)
{
	int a, count = 0;

	for (a = 0; str[a] != '\0'; a++)
		count++;
	return (count);
}
