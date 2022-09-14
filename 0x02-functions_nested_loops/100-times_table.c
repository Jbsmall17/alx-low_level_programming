#include "main.h"
/**
 * print_times_table - print a n times tabl
 * @n: parameter
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j <= n; j++)
			{
				int m = i * j;

				_putchar(m);
				_putchar(',');
				_putchar(' ');
				_putchar('\n');
			}
		}
	}
	else
		_putchar(' ');
	_putchar('\n');
}	
