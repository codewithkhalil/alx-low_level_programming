#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - main function
 *
 * @i: the number to be checked
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negatve\n", i);
	else
		printf("%d is positive\n", i);
}
