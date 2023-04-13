#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - this function allocate memory for an array
 * @nmemb: memory
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
