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

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len = i++;
	p = (char *) malloc((len  + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	p[i + 1] = '\0';
	return (p);
}
