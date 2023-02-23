#include "main.h"

/**
 * _isupper - evaluates uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, and 0 if not.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
