#include "main.h"
/**
 * print_times_table - print a n times tabl
 * @n: parameter
 */
void print_times_table(int n)
{
	if (n >= 0 && n <=15)
	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				int m = i * j;

				_purchar(m);
				_putchar(",");
				_putchar(" ");
			}
		}
	}
	else
		_purchar("");
	_purchar("\n");
}	
