#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - this function prints  string followed by a new line
 * @separator: ptr to a const separator
 * @n: input
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	char *strr;

	va_start(args, n);

	for (j = 0 ; j < n ; j++)
	{
		strr = va_arg(args, char *);
		if (strr == NULL)
			printf("(nil)");
		else
			printf("%s", strr);
		if (separator && j != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
