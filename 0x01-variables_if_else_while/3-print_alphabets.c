#include <stdio.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */
int main(void)
{
	int y = 'a';
	int x = 'A';

	while (y <= 'z')
	{
		putchar(y);
		y++;
	}
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
