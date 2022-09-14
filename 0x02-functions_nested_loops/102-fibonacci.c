#include <stdio.h>

/**
 * main - print to the screen
 * Return: returns zero
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c, d, e;

	printf("%d, %d, ", a, b);
	for (c = 2; c < 50; c++)
	{
		d = a + b;
		if (c == 49)
			printf("%d", d);
		else
		{
			printf("%d, ", d);
			a = b;

			b = d;

		}
	}
	printf("\n");
	return (0);
}
