#include "main.h"

/**
 * _strchr - writes a function that locates a character in a string.
 * @s: destination
 * @c: added character
 * Return: s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (0);
}
