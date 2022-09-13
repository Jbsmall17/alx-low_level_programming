#include <stdio.h>
/**
 * _islower - check if the parameter is a lower case letter
 * @c: paramenter
 * Return: returns either zero or one
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * main - print to the screen
 * Return: returns zero
 */
int main(void)
{
	int result = _islower('c');

	printf("%d\n", result);
	return (0);
}
