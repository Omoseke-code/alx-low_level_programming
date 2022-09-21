#include "main.h"

/**
 * _strncat - similar to the _strcat function
 * except that it will use at most n bytes from src
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes to be added
 * Return: dest as a concat string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
