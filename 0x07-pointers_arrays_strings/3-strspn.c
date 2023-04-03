#include "main.h"
/**
 * _strspn - this function gets the length of a prefix substring
 * @s: s byte
 * @accept: another byte
 * Return: accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, count;

	for (a = 0 ; s[a] ; a++)
	{
		count = 0;

		for (b = 0 ; accept[b] ; b++)
		{
			if (s[a] == accept[b])
			{
				count = 1;
				break;
			}
		}
		if (!count)
		{
			break;
		}
	}
	return (a);
}
