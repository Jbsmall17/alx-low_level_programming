#include "main.h"

/**
 * print_sign - check for either positivity or negativity of a number 
 * @n: parameter
 * Return: return either zero or one or minus one
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar("+");
		return (1);
	}
	else if (n < 0)
	{
		_putchar("-");
		return (-1);
	}
	else
	{
		_putchar("0");
		return (0);
	}
}
