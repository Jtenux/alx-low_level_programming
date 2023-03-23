#include "main.h"
/**
 * print_numbers - this function prints numbers from 0 to 9
 *
 * Return: always 0 when successful
 */

void print_numbers(void)
{

	char i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
