#include "main.h"

/**
 * main - starting point.
 *
 * description: prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char p[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(p[a]);
	}
	_putchar('\n');

	return (0);
}
