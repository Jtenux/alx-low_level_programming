#include "main.h"
/**
 * _strlen - this function finds the length of a string
 * @s: sting
 * Return: void
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
