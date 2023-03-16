#include <stdio.h>
#include <unistd.h>

/**
 * main - this is what the user sees
 *
 * Return: 1 when successful
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
