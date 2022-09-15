#include "main.h"

/**
 * print_numbers - print 0-9
 * Return: 0 on success
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
