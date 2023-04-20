#include "function_pointers.h"
/**
 * int_index - this function searches for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to the function to be used for value comparison
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size <= 0)
	{
		return (-1);
	}

	for (n = 0 ; n < size ; n++)
	{
		if (cmp(array[n]) != 0)
			return (n);
	}
	return (-1);
}
