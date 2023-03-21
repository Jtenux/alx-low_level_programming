#include "main.h"
/**
 *print_alphabet_x10 - print alphabet in lowercase 10 times
 *Return: always 0 when successful
 */

void print_alphabet_x10(void)
{
	char m;
	int i;

	i = 1;

	while (i <= 10)
	{
		m = 'a';
		while (m <= 'z')
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		i++;
	}
}
