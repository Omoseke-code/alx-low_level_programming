#include "main.h"

/**
 * _isupper - checks if a character is in uppercase
 * @c: parameter
 *
 * Return: 1 if upper and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
