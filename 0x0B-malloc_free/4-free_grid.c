#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid created by your alloc_grid function.
 * @grid: to be freed
 * @height: height of array
 * Return: array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
