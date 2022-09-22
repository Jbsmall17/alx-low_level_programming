#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: string s1
 * @s2: string s2
 * Return: returns a number
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}
