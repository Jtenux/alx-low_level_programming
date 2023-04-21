#include <stdarg.h>
/**
 * sum_them_all - this function returns the sum of all its para
 * @n: para
 *
 * Return: the sum of para
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	int sum = 0;

	va_start(args, n);

	for (j = 0 ; j < n ; j++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
