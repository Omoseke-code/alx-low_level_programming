#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int a, j;

	for (a = 0; a < 10; a++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
