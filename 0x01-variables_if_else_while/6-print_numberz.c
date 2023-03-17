#include <stdio.h>
/**
 * main - this prints base10 single digits
 *
 * Return: always 0 when successful
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
