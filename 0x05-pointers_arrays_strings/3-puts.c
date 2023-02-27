#include "main.h"

/**
 * _puts -prints a string, followed by a new line
 *
 * @str: input string
 *
 * Return: none
 */

void _puts(char *str)
{
	int i, j;

	i = _strlen(*str);
	for (j = 0; j < i; j++)
	{
		if (str[j] == '\0')
		{
			_putchar(str[j]);
		}
		else
		{
			_putchar('\n');
			break;
		}
	}
}
