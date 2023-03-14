#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *abc;
	unsigned int i;

	if (size == 0)
		return (NULL);

	abc = malloc(sizeof(c) * size);

	if (abc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		abc[i] = c;

	return (abc);
	free(abc);
}
