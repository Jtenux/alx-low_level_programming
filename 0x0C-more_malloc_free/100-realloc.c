#include "main.h"
#include <stdlib.h>
/**
 * _realloc - this function reallocates a memory block by using malloc and free
 * @ptr: pointer 1
 * @old_size: size of ptr
 * @new_size: new memory size
 * Return: pointer
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr2, *p;
	unsigned int m;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == old_size)
		return (ptr);

	ptr2 = ptr;
	mem = malloc(sizeof(*ptr2) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = mem;
	for (m = 0 ; m < old_size && m < new_size ; m++)
		p[m] = *ptr2++;

	free(ptr);
	return (mem);
}
