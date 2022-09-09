#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 *
 * Return: ) on success
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
