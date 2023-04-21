#include "variadic_functions.h"
/**
 * print_all - this function prints everything
 * @format: lists of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *strr;
	const char t_arg[] = "cifs";
	unsigned int n = 0, m, c = 0;

	va_start(args, format);
	while (format && format[n])
	{
		m = 0;
		while (t_arg[m])
		{
			if (format[n] == t_arg[m] && c)
			{
				printf(", ");
				break;
			} m++;
		}
		switch (format[n])
		{
			case 'c':
				printf("%c", va_arg(args, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), c = 1;
				break;
			case 's':
				strr = va_arg(args, char *), c = 1;
				if (strr == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", strr);
				break;
		} n++;
	}
	va_end(args), printf("\n");
}
