#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: binary.
 *
 * Return: unsigned int
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int len, b2;

	if (!b)
		return (0);

	x = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, b2 = 1; len >= 0; len--, b2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			x += b2;
		}
	}

	return (x);
}
