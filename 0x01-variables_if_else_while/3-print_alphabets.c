#include <stdio.h>
/**
 * main - this prints alphabets in lower and upper cases
 *
 * Return: always 0 when successful
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
