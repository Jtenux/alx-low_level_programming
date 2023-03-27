#include "main.h"
/**
 * rev_string - this is a function that reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, k;
	char temp;

	k = 0;
	for (j = 0 ; s[j] ; j++)
		if (s[j] != '\0')
			k++;

	k = k - 1;

	for (i = 0 ; i < k ; i++)
	{
		temp = s[i];
		s[i] = s[k];
		s[k] = temp;
		k--;
	}
}
