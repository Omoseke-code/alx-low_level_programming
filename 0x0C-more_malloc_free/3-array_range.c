#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number of values
 * @max: maximum number of values
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);
	array = malloc(max - min);
	if (array == NULL)
		return (NULL);
	for (i = min; array[i] >= max; i++)
		;
	return (array);
}
