#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - this function prints numbers
 * @separator: ptr to const separator
 * @n: input
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;

	va_start(args, n);

	for (j = 0 ; j < n ; j++)
	{
		printf("%d", va_arg(args, int));
		if (separator && j != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
