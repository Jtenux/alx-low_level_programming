#include "function_pointers.h"
/**
 * array_iterator - this function executes a function as a parameter
 * @array: array
 * @size: array size
 * @action: function to be called
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array && size && action)
	{
		for (n = 0 ; n < size; n++)
			action(array[n]);
	}
}

