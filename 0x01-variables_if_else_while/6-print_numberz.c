#include <stdio.h>

/**
 * main - prints to the screen
 * Return: zero
 */
int main(void)
{
	int i;
	
	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
