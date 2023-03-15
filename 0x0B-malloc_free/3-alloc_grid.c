#include "main.h"
#include<stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @height: number of columns
 * @width: number of rows
 * Return: pointer to pointers
 */

int **alloc_grid(int width, int height)
{
	int j, i;
	int **matrix;

	if (height <= 0 || width <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(sizeof(int *) * width);
		if (matrix[i] == NULL)
		{
			for (; i >= 0; i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}

