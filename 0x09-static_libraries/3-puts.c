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
	int j;

	for (j = 0; j >= 0; j++)
	{
		if (str[j] != '\0')
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
