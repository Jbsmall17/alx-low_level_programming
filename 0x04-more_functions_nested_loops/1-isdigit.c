#include "main.h"

/**
 * int _isdigit - checks for digit 
 * @c: parameter
 * Return: returns a nummber
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
