#include "main.h"

/**
 * cap_string - capitalize words in a string
 * @str: string
 * Return: returns a string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
		else
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				str[i] = str[i] + 32;
			}
		}
		switch (str[i])
		{
			case '.':
			case '\n':
			case '\t':
			case ' ':
			case ',':
			case ';':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				++i;
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
					continue;
				}
				break;
		}

	}
	return (str);
}

