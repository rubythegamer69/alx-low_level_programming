#include "main.h"

/**
 * rev_string -  prints a string, in reverse
 *
 * @s: input string
 *
 * Return: none
 */

void rev_string(char *s)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; ++i)
		;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
}
