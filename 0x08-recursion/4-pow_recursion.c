#include "main.h"

/**
 * _pow_recursion - returns x to power y
 * @x: base.
 * @y: exponent.
 * Return: value of x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
