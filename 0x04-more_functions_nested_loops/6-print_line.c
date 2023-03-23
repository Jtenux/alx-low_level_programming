#include "main.h"
/**
 * print_line - this function draws a line in the terminal
 * @n: input
 * Return: always 0 when successful
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0 ; a < n ; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
