#include <stdio.h>

/**
 * print_sign - check for either positivity or negativity of a number 
 * @n: parameter
 * Return: return either zero or one or minus one
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}

/*
 * main - print to the screen
 */

void main(void)
{
	int result = print_sign(10);

	printf("%d\n",result);
}
