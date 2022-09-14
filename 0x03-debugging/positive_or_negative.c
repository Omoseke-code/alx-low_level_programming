#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - entry point
 * @i: parameter
 * conditions
 *
 * Return: 0 - success
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	} else if (i < 0)
	{
		printf("%d is negative\n", i);
	} else
	{
		printf("%d is zero\n", i);
	}
}
