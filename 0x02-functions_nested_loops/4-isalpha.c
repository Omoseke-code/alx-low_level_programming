#include "main.h"

/**
 * _isalpha - determines if a character is an alphabet
 * @c: parameter
 *
 * Return: 1 0n sucess, 0 not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
