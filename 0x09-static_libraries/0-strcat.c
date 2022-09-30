#include "main.h"

/**
 * _strcat - concats two strings
 * @dest: string 1
 * @src: string 2
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;/*length*/
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];/*concat*/
	dest[i] = '\0';

	return (dest);
}
