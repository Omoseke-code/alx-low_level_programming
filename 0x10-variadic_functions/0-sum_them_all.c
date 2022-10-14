#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	else
	{
		for (i = 0; i < n; i++)
			sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
