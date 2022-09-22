#include "main.h"

/**
 * _strncpy - print a copy of a string
 * @dest: parameter
 * @src: parameter
 * @n: number of characters
 * Return: return a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
