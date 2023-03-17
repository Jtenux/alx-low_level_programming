#include <stdio.h>

/**
 * main - prints combinations of three different digit
 *
 * Return: always 0 hen succesful
 */

int main(void)
{
	int i;
	int j;
	int l;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (l = 2 ; l < 10 ; l++)
			{
				if (i < j && j < l)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(l + '0');
					if (i + j + l != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
