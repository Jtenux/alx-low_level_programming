#include "main.h"
#include <stdlib.h>
/**
 * str_concat - this function concatenates two strings
 * @s1: strng 1
 * @s2: strng 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str2;
	int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0 ; s1[a] != '\0' ; a++)
		;
	for (b = 0 ; s2[b] != '\0' ; b++)
		;
	str2 = malloc(sizeof(char) * (a + b + 1));
	if (str2 == NULL)
	{
		free(str2);
		return (NULL);
	}

	for (c = 0 ; c < a ; c++)
		str2[c] = s1[c];

	for (d = 0 ; d < b ; c++, d++)
		str2[c] = s2[d];

	return (str2);

	free(str2);
}
