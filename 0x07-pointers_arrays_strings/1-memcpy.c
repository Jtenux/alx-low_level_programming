#include "main.h"
/**
 * _memcpy - this function copies memory area
 * @dest: para 1
 * @src: para 2
 * @n: copied bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0 ; m < n ; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
