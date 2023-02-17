#include <stdio.h>

/**
 * main -Start point
 *
 * Description - Print lowercase alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch [52] = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';

	for ( int i = 0; i < 52 ; i++ )
		putchar(ch[i]);
	putchar('\n');

	return (0);
}
