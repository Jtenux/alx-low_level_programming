#include <stdio.h>
#include <stdlib.h>
/**
 * main - this program multipies two numbers
 * @argc: command line
 * @argv: array
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
