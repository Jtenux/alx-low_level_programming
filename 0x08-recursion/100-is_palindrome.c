#include "main.h"
#include <string.h>
/**
 * _palindrome - check if string is a palindrome
 * @s: para 1
 * @m: para 2
 * @n: para 3
 * Return: 1 when string is a palindrome and
 * 0 otherwise
 */

int _palindrome(char *s, int m, int n)
{
	if (m >= n)
		return (1);
	if (s[m] != s[n])
		return (0);
	return (_palindrome(s, m + 1, n - 1));
}

/**
 * is_palindrome - this function checks if a string is a palindrome
 * @s: string
 * Return: 1 when string is a palindrome and 0 otherwise
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (*s == '\0')
		return (1);
	return (_palindrome(s, 0, length - 1));
}
