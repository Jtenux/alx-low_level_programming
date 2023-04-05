#include "main.h"
/**
 * factorial - this function returns the factorial of a given number
 * @n: number
 * Return: -1 when lower than 0 to indicate error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
