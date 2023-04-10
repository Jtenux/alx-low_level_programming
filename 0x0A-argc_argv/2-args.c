#include <stdio.h>
/**
 * main - this program prints all arguments it receives
 * @argc: command line
 * @argv: array
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int n = 0;

	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
