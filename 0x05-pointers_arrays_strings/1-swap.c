#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int ab, bc;

	ab = *a;
	bc = *b;

	*a = bc;
	*b = ab;
}
