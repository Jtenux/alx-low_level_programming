#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers
 * @n: checks code
 * Return: always 0 when successful
 */

void print_to_98(int n)
{
	int m;

	if (n >= 0 && n <= 98)
	{
		for (m = n ; m <= 98 ; m++)
		{
			printf("%d", m);
			if (m != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (m = n ; m <= 98 ; m++)
		{
			printf("%d", m);
			if (m != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (m = n ; m >= 98 ; m--)
		{
			printf("%d", m);
			if (m != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d", n);

}
