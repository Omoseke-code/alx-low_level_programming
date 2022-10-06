#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of some
 * elements of size bytes each and returns a pointer to the allocated memory.
 * @nmemb: number of members
 * @size: memory to be allocated
 * Return: allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = (nmemb * size);
	array = malloc(j);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		array[i] = 0;
	return (array);
}
