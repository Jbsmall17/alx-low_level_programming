#include <stdio.h>
/**
 * main - print screen
 * Return: return zero
 */
int main(void)
{
	int a;
	char b;
	
	for (a = '0'; a <= '9'; a++)
	       putchar(a);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);	
}
