#include <stdio.h>
/**
 * times_table - print from zero to nine timestable
 */
void times_table(void)
{
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			int m = a * b;
			if (b != 9)
			{
				if (m < 10)
					printf("%d,  ", m);
				else
					printf("%d, ", m);
			}
			else
				printf("%d", m);	
		}
		printf("$\n");
	}
}

/**
 * main - prinr to the screen
 */
void main(void)
{
	times_table();
}
