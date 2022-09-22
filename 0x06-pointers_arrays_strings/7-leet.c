#include "main.h"

/**
 * *leet - to encode a string
 * @str: a string parameter
 * Return: returns a string
 */

char *leet(char *str)
{
	int i;

	int i, j;

	char src[] = "aeotlAEOTL";
	char dest[] = "4307143071";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (src[j] == *(str + i))
			{
				*(str + i) = dest[j];
			}
		}
	}
	return (str);
}
