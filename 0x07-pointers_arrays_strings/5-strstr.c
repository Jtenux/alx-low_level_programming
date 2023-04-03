#include "main.h"
/**
 * _strstr - this function locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 * null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int m, n;

	for (m = 0 ; haystack[m] != '\0' ; m++)
	{
		for (n = 0 ; needle[n] != '\0' ; n++)
		{
			if (haystack[m + n] != needle[n])
			{
				break;
			}
		}

		if (needle[n] == '\0')
		{
			return (&haystack[m]);
		}
	}
	return (0);
}


