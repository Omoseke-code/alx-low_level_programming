#include "main.h"

/**
 * print_alphabet_x10 -entry point
 *
 * Return: success on 0
 */
void print_alphabet_x10(void)
{
	char n;
	int i = 0;

	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		i++;
		_putchar('\n');
	}
}
