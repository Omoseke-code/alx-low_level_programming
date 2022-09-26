#include "main.h"

/**
 * _memcpy - writes a function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
