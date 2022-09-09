#include <stdio.h>

/**
 * main - Prints the alphabet except the letters q and e.
 *
 * Return: 0 on success
 */
int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
