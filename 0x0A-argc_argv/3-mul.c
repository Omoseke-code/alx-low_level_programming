#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, mul = 1, d;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			d = atoi(argv[i]);
			mul = mul * d;
		}
		printf("%i\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}