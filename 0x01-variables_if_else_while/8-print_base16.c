#include <stdio.h>
/**
 * main - this prints numbers in base16
 *
 * Return: always 0 when successful
 */
int main(void)
{
	int i;
	char m;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
