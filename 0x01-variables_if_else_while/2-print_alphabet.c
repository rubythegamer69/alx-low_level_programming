#include <stdio.h>

/**
 * main -Start point
 *
 * Description - Print lowercase alphabets
 *
 * Return: Always 0 (Success)
 */

int main()
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
