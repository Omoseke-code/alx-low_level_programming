#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp;
	int len = n - 1;

	for (i = 0; i < len; i++)
	{
		tmp = a[i];
		a[i] = a[len];
		a[len--] = tmp;
	}
}
