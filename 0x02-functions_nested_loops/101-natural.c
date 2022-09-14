#include <stdio.h>

/**
 * main - print to the screen
 */
void main(void)
{
	int result, b;

	for (b = 0; b < 1024; b++)
	{
		if (b % 3 == 0 || b % 5 == 0)
		{
			result += b;
		}
	}
	printf("%d\n", result);
}
