#include <stdio.h>
/**
 * main - prints to the screen
 * Return: returns zero
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch < 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
