#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j, k;

	if (width < 1 || height < 1)
		return (NULL);

	matrix = malloc(width * (sizeof(int)));

	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(sizeof(int) * height);
		if (matrix[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
	}

	for (j = 0; j < width; j++)
		for (k = 0; k < height; k++)
			matrix [i][j] = 0;
	return (matrix);
	free(matrix);
}
