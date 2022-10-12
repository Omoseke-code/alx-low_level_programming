#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: to be iterated
 * @size: size of array
 * @action: action
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
