#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p)
		return (p);
	exit(98);
}
