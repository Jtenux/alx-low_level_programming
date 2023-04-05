#include "main.h"
/**
 * pow_operator  - this function returns the suare root of a number
 * @n: number
 * @s: number
 * Return: -1 when the function does not have a root
 *
 */

int pow_operator(int n, int s)
{
	if (s % (n / s) == 0)
	{
		if (s * (n / s) == n)
			return (s);
		else
			return (-1);
	}
	return (0 + pow_operator(n, s + 1));
}


/**
 * _sqrt_recursion - this functon returns the natural root of a number
 * @n: given number
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (pow_operator(n, 2));
}


