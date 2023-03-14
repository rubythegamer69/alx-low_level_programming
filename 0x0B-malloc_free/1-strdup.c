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

	for (i = 0; str[i] != '\0'; i++)
		;

	abc = (char *)malloc(sizeof(char) * (i + 1));

	if (abc == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		abc[j] = str[j];

	return (abc);

	free(abc);
}
