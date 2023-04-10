#include <stdio.h>
/**
 * main - this print the number of arguments passed to it
 * @argc: command line
 * @argv: array
 * Return: 0 when successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
