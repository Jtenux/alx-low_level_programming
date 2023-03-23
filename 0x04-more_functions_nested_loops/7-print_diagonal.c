#include "main.h"
/**
 * print_diagonal - this function draws a diagonal line in the terminal
 * @n: input
 * Return: always 0 when successful
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		while (i < n)
		{
			for (j = 0 ; j < i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
