#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
