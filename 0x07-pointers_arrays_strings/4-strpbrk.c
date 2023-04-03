#include "main.h"
/**
 * _strpbrk - this function searches for any of a set of bytes
 * @s: char 1
 * @accept: char 2
 * Return: a pointer in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int m, n;

	for (m = 0 ; s[m] ; m++)
	{
		for (n = 0 ; accept[n] ; n++)
		{
			if (s[m] == accept[n])
			{
				return (&s[m]);
			}
		}
	}
	return (0);
}
