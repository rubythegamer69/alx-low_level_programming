#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: string to check.
 * Return: the number of bytes of the selected stringg.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, checker;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		checker = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				checker = 0;
				break;
			}
		}
		if (checker == 1)
			break;
	}
	return (i);
}
