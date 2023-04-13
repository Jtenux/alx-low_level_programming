#include "main.h"
#include <stdlib.h>
/**
 * array_range - this function creates an array of integers
 * @min: min val
 * @max: max val
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *m;
	int i;

	if (min > max)
		return (NULL);
	m = malloc((max - min + 1) * sizeof(*m));
	if (m == NULL)
		return (NULL);

	for (i = 0 ; min <= max ; i++, min++)
		m[i] = min;

	return (m);
}
