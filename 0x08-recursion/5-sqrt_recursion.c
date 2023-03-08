#include "main.h"

/**
 * power_operation - finds natural square root of a number.
 * @n: input number.
 * @x: iterator.
 * Return: square root or -1.
 */
int power_operation(int n, int x)
{
	if (x % (n / x) == 0)
	{
		if (x * (n / x) == n)
			return (x);
		else
			return (-1);
	}
	return (0 + power_operation(n, x + 1));
}
/**
 * _sqrt_recursion -finds natural square root of a number via power_operation.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
