#include "main.h"
/**
 * print_last_digit - checks for the last digit for a number
 * @n:k parameter
 * Return: retruns a number
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
