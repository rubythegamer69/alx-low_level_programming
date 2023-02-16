#include <unistd.h>

/**
 * main - Start point
 *
 * Description - C program that prints to the standard error.
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char alx[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, alx, 59);
	return (1);
}
