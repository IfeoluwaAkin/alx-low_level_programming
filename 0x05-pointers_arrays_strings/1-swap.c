#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
