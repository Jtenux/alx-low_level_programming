#include "main.h"
#include <stdlib.h>
/**
 * create_array - this function creates an array of chars and
 * initializes it with a specific char
 * @size: size of array
 * @c: char
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int n;

	if (size == 0)
		return (NULL);
	
	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (n = 0 ; n < size ; n++)
	{
		ar[n] = c;
	}
	return (ar);
}
