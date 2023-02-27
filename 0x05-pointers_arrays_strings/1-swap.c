#include "main.h"

/**
 * swap_int - swaps value of two integers
 *
 * @a: first int
 * @b: second int
 * @c: swapper int
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int  *c = NULL;
	*c = *a;
	*a = *b;
	*b = *c;
}
