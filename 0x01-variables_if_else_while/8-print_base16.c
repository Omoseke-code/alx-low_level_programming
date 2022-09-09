#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = '0';
	char b = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
