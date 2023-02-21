#include "main.h"

/**
 * _abs - calculatess the absolute value
 *
 * @i: input number as an integer.
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
		return (i * -1);
}
