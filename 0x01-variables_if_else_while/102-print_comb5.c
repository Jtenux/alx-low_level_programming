#include <stdio.h>

/**
 * main - this prints all possible combos of to different numbers
 *
 * Return: always 0 whem successful
 */

int main(void)
{
	int m;
	int n;

	for (m = 0 ; m < 100 ; m++)
	{
		for (n = 0 ; n < 100 ; n++)
		{
			if (m < n)
			{
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				putchar(' ');
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				if (m != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
