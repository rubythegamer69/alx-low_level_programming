#include "main.h"

/**
 * int _strlen - returns the length of a string
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	return i;
}
