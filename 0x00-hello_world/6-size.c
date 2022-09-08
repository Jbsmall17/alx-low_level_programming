#include <stdio.h>
/**
 * main - print to the screen
 * Return: return value zero
 */
int main(void)
{
	int i;
	char a;
	float f;
	printf("Size of a char: %lu byte\(s\)\n", sizeof(a));
	printf("Size of an int: %lu byte\(s\)\n", sizeof(i));
	printf("Size of a float: %lu byte\(s\)\n", sizeof(f));
	printf("Size of a long int: %lu byte\(s\)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte\(s\)\n", sizeof(long long int));
	return (0);
}
