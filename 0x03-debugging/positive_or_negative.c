#include "main.h"
/**
 * positive_or_negative - this shows whether a number is positive or negative
 * @i: input
 * Return: always 0 when successful
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
