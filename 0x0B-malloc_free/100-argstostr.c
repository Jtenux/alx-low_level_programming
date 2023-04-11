#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - main function
 * @ac: aug 1
 * @av: aug 2
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int len = 0;
	int m;
	int pos = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (m = 0 ; m < ac ; m++)
	{
		if (av[m] == NULL)
		{
			return (NULL);
		}
		len += strlen(av[m]) + 1;
	}
	aout = malloc(sizeof(char) * len);
	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}
	for (m = 0 ; m < ac ; m++)
	{
		strcpy(aout + pos, av[m]);
		pos += strlen(av[m]);
		aout[pos++] = '\n';
	}
	aout[pos] = '\0';
	return (aout);
}

