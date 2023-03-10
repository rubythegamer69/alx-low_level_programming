#include "main.h"

/**
 * _isalpha - evaluates if alphabet or not
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for alphabetic character. 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	} else
		return (0);
}
