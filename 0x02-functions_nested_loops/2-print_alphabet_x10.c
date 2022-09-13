#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet ten times to the screen
 * return: returns no value
 */

void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
/**
 * main - print to the screen
 * Return: returns no value
 */

void main(void)
{
	print_alphabet_x10();
}
