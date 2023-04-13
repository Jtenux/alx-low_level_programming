#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - this function allocates memory
 * @b: bytes
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
