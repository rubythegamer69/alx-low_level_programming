#include "main.h"

/**
 * clear_bit - clears the bit.
 * at a given index.
 * @n: pointer to an unsigned long int.
 * @index: bit index.
 *
 * Return: 1 if success, -1 if fail.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
