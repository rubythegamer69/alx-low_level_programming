#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 *
 * @s: input string
 *
 * Return: none
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; ++i)
		;
	for (j = i -1; j >= 0; j--)
	{
		if (s[j] != '\0')
		{
			_putchar(s[j]);
		}
		else
		{
			_putchar('\n');
			break;
		}
	}
}
