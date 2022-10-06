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
	int a, b;
	int *range;

	if (min > max)
		return (NULL);
	b = min;
	range = (int *) malloc(sizeof(int) * (max - min + 1));
	if (range == NULL)
		return (NULL);
	for (a = 0; a <= (max - min); a++)
	{
		range[a] = b;
		b++;
	}
	return (range);
}
