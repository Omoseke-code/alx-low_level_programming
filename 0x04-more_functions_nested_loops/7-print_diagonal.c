#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: parameter
 * Return: void
 */
void print_diagonal(int n)
{
	int s, k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (s = 0; s < n; s++)
		{
			for (k = 0; k < s; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
