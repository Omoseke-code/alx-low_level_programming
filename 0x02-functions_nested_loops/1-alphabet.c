#include "main.h"

/**
 * print_alphabet -entry point
 *
 * Return: success on 0
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
