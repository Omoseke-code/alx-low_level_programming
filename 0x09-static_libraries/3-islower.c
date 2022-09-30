#include "main.h"

/**
 * _islower - checks is alphabet is in lower case
 * @c: parameter
 * Return: 0 if lower, 1 id not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
