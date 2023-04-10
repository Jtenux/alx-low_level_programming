#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - this adds positive numbers
 * @argc: command line arguments
 * @argv: array pointers
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int n, m;

	for  (n = 1 ; n < argc ; n++)
	{
		for (m = 0; argv[n][m] != '\0' ; m++)
		{
			if (!isdigit(argv[n][m]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[n]);
	}
	printf("%d\n", add);
	return (0);
}
