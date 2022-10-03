#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of arra
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr2d;

	arr2d = malloc(height * sizeof(int));
	if (arr2d == NULL || width <= 0 || height <= 0)
	{
		free(arr2d);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr2d[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
			arr2d[i][j] = 0;
	}
	return (arr2d);
}
