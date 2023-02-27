#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; *(s + i) != '\0'; ++i)
		;
	if ((i % 2) != 0)
	{
		for (j = 0; j >= 0; j++)
		{
			if ((j % 2) == 0)
			{
				_putchar(str[j]);
			}
		}
		_putchar(str[j]);
	}
	else
	{
		for (j = 0; j >= 0; j++)
		{
			if ((j % 2) == 0)
			{
				_putchar(str[j]);
			}
		}
	}
	_putchar('\n');
}
