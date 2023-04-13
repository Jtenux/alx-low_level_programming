#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - -this function concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int a = 0, b = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	while (n > b)
		b++;
	m = malloc((a + n + 1) * sizeof(char));

	if (m == NULL)
		return (0);
	for (k = 0 ; k < a ; k++)
		m[k] = s1[k];
	for (; k < (a + n) ; k++)
		m[k] = s2[k - a];

	m[k] = '\0';
	return (m);
}
