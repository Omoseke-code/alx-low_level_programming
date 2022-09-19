#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: param
 * @b: param
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
