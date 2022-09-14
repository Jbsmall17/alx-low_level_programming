#include <stdio.h>

/**
 * main - print to the screen
 * Return: returns zero
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	int c;
	long int d;

	printf("%ld, %ld, ", a, b);
	for (c = 2; c < 50; c++)
	{
		d = a + b;
		if (c == 49)
			printf("%ld", d);
		else
		{
			printf("%ld, ", d);
			a = b;

			b = d;

		}
	}
	printf("\n");
	return (0);
}
