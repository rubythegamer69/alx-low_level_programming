#include "main.h"

/**
 * _strcat -  concatenates two strings
 *
 * @dest: string 1
 *
 * @src: string 2
 *
 * Return: returns concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; *(dest + a); a++)
		;

	for (b = 0; b >= 0; b++)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
	}
	return (dest);
}
