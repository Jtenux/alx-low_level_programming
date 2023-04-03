#include "main.h"
/**
 * _memset - this functiom fills memory with a constant byte
 * @s: char 1
 * @b: char 2
 * @n: int n
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
