#include <stdio.h>
/**
 * main - print to the screen
 * Return: returns a number
 */

int main(void)
{
	long int a = 1;
	long int b = 1;
	long int c = a + b;
	long int d = 0;

	while (c < 4000000)
	{
		if (c % 2 == 0)
			d += c;
		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld\n", d);
	return (0);

}
