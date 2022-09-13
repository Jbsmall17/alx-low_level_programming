#include <stdio.h>
/**
 * print_alphabet - print alphabet to the screen
 * Return: returns no value;
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}

/**
 * main - print to the screen
 * Return: return zero
 */

int main(void)
{
	print_alphabet();
	return (0);
}
