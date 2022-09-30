#include "main.h"

/**
 * _strspn -writes a function that gets the length of a prefix substring
 * @s: to be searched
 * @accept: search value
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++;
			}
		}
		else
			return (count);
	}
	return (count);
}
