#include "main.h"
/**
 * print_rev - prints reverse string
 * @s: string pointer
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, j, length;

	for (i = 0; s[i] != '\0'; i++)
		;
	length = i;
	for (j = length - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
