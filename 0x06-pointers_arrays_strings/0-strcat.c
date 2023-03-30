#include "main.h"
/**
 * _strcat - main function
 * @dest: string to be appended
 * @src: the new string
 * Return: new appended string
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
