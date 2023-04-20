#include <stdio.h>
#include <stdlib.h>
/**
 * main - this checks code
 * @argc: input
 * @argv: rray
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	char *opcodes;
	int n, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcodes = (char *) main;
	for (n = 0 ; n < nbytes ; n++)
	{
		printf("%02x", opcodes[n] & 0xFF);
		if (n != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
