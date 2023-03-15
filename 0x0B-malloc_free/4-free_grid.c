#include "main.h"
#include<stdlib.h>

/**
 * free_grid - free a 2D array
 * @grid: pointer to a pointer to an array
 * @height: nuber of rows in an array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
