#include <stdio.h>
/**
 * main - print screen
 * Return: returns zero
 */
int main(void)
{
	char z = 'z';

	for (z = 'z'; z >= 'a'; z--)
		putchar(z);
	putchar('\n');
	return (0);
}
