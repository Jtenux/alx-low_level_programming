#include "main.h"
/**
 * leet - this function encodes a string into a given number
 * @c: string
 * Return: c
 */

char *leet(char *c)
{
	int n;

	for (n = 0 ; c[n] != '\0' ; n++)
	{
		while (c[n] == 'a' || c[n] == 'A')
			c[n] = '4';
		while (c[n] == 'e' || c[n] == 'E')
			c[n] = '3';
		while (c[n] == 'o' || c[n] == 'O')
			c[n] = '0';
		while (c[n] == 't' || c[n] == 'T')
			c[n] = '7';
		while (c[n] == 'l' || c[n] == 'L')
			c[n] = '1';
	}
	return (c);
}
