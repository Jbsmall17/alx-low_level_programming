#include <stdio.h>
/**
 * _isalpha - checks for alphabet
 * @c: parameter
 * Return: returns either one or zero
 */
int _isalpha(int c)
{	
	if (c >= 'a' && c <= 'z')
		return (1);
	else if	(c >= 'A' && c <= 'Z')
		return (1);
	else
		return  (0);
}

/**
 * main - print to the screen
 * Return: return either one or two
 */
int main(void)
{
	int result = _isalpha('A');
	int result1 = _isalpha('a');
	int result2 = _isalpha(4);

	printf("%d%d%d\n", result, result1, result2);
	return (0);
}
