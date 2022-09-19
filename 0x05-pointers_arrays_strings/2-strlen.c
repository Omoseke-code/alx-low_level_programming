#include "main.h"

/**
 * _strlen - returns dtring length
 * @s: points to string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}
