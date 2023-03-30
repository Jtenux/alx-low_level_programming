#include "main.h"
/**
 * *_strcat - this function concatenates two strings
 * @dest: string 2
 * @src: string 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	c = 0;
	for (i = 0; i < 10000; i++)
	{
		if (dest[i] == '\0')
			break;
		c++;
	}

	for (i = 0; src[i] != '\0' && i < c; i++)
	{
		dest[c + i] = src[i];
	}

	dest[c + i] = '\0';

	return (dest);
}
