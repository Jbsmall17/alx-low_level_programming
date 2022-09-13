#include <stdio.h>
/**
 * jack_bauer - print every minute of the day
 */
void jack_bauer(void)
{
	for (int a = 0; a < 24; a++)
	{
		for (int b = 0; b < 60; b++)
		{
			if (a < 10)
			{
				if (b < 10)
					printf("0%d:0%d\n", a, b);
				else
					printf("0%d:%d\n", a, b);
			}
			else
			{
				if (b < 10)
					printf("%d:0%d\n", a, b);
				else
					printf("%d:%d\n", a, b);
			}
		}
	}
}

/**
 * main - print to the screen
 */
void main(void)
{
	jack_bauer();
}
