#include <stdio.h>
/**
 * main - this finds and printd the largest prime factors a given number
 *
 * Return: always 0 when successful
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3 ; i < 782849 ; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
