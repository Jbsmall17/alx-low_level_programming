#include <stdio.h>
/**
 * main - print to the screen
 * Return: returns ero
 */
int main(void)
{
	int a;
	int b; 

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
		}
	}
}
