#include "main.h"

/**
 * string_toupper - changes lowercase string characters to uppercase
 * @h: lowercase
 * Return: new string
 */
char *string_toupper(char *h)
{
	int i;

	for (i = 0; h[i] != '\0'; i++)
	{
		if (h[i] >= 97 && h[i] <= 122)
			h[i] -= 32;
	}
	return (h);
}
