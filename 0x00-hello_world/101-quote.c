#include <stdio.h>
#include <unistd.h>

/**
 * main - this prints what the user wants to see
 *
 * Return: Always 1 when successful
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);

}
