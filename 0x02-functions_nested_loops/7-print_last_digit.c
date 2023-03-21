#include "main.h"
/**
 *print_last_digit - prints last digit
 *@c: parameter
 *Return: n
 */

int print_last_digit(int c)
{
	int n;

	n = c % 10;
	if (c < 0)
		n = -n;
	_putchar(n + '0');
	return (n);

}

