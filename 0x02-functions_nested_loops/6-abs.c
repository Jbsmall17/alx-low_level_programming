#include <stdio.h>
/**
 * _abs - checks from absolutity of the number
 * @n: paarameter
 * Return: returns a number
 */
int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
/**
 * main - print to the screen
 */

void main(void)
{
	int result = _abs(5);
	int result1 = _abs(-5);

	printf("%d%d", result, result1);
}
