#include "main.h"
#include <stddef.h>
/**
 * _strchr - this function locates a character in a string
 * @s: char 1
 * @c: char 2
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	char n = *s;

	while (n != '\0')
	{
		if (n == c)
		{
			return (s);
		}
		s++;

		n = *s;
	}
	if (n == c)
	{
		return (s);
	}
	return (NULL);
}
