#include "main.h"
/**
 *print_alphabet - print alphabet in lowercase
 *
 *Return: always 0 when successful
 *
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
		_putchar(n);

	_putchar('\n');
}
