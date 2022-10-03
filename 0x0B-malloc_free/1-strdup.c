#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: to be copied
 * Return: the copied string or null
 */
char *_strdup(char *str)
{
	char *p;
	int i, len;

	for (i = 0; str[i] != '\0'; i++)
		len = i++;
	p = malloc(len * sizeof(char));

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			p[i] = str[i];
	}
	else
		return (NULL);
	p[i] = '\0';
	return (p);
}
