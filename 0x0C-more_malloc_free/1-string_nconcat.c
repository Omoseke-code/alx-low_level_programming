#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @n: size of s2
 * @s1: This is the first input string
 * @s2: This is the second input string
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	if (n > len2)
		n = len2;
	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);
}
