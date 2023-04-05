#include "main.h"
/**
 * prime_number - this function prints prime numbers
 * @n: given number
 * @s: prime number
 * Return: 1
 */

int prime_number(int n, int s)
{
	if (n % s == 0)
	{
		if (n == s)
			return (1);
		else
			return (0);
	}
	return (0 + prime_number(n, s + 1));
}


/**
 * is_prime_number - this function prints prime numbers
 * @n: input integer
 * Return: 1 when integer is a prime number
 * and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_number(n, 2));
}

