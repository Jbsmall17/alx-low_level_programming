#include <stdio.h>
/**
 * print_last_digit - checks for the last digit for a number
 * @n:k parameter
 * Return: retruns a number
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	return (lastdigit);
}

/**
 * main - print element to the screen
 */

void main(void)
{
	int digit = print_last_digit(1208);

	printf("%d", digit);
}
