#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *abc;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	abc = (char *)malloc(sizeof(char) * (i));

	if (abc == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		abc[j] = str[j];

	return (abc);

	free (abc);
}
