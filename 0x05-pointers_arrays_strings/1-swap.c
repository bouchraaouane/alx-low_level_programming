#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer
 * @b: pointer
 * Returns Void.
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
