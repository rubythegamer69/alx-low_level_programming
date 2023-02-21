#include "main.h"
/**
 * print_last_digit - output last digit of a number
 *
 * @c: input number as an integer.
 *
 * Return:last digit of number
 */

int print_last_digit(int c)
{
	int a;

	a = c % 10;
	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}
