#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - this function returns a pointer o a newly allocated space
 * in memory
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *str2;

	if (str == NULL)
		return (NULL);
	str2 = malloc(strlen(str) + 1);
	if (str2 == NULL)
	{
		return (NULL);
	}

	strcpy(str2, str);
	return (str2);
}
