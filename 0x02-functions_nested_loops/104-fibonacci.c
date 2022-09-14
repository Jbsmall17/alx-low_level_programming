#include <stdio.h>

/**
 * main - print to the screen
 * Return: retruns Zero
 */

int main(void)
{
	float a = 1;
	float b = 2;
	float c;
	int d;

	printf("%.0f, %.0f, ", a, b);
	for (d = 2; d < 98; d++)
	{
		c = a + b;
		if (d == 97)
			printf("%.0f", c);
		else
			printf("%.0f, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);

}

