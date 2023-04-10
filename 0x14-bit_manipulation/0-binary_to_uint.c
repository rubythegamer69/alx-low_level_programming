#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: binary.
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	int length, b2;

	if (!b)
		return (0);

	a = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, b2 = 1; length >= 0; length--, b2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			a += b2;
		}
	}

	return (a);
}
