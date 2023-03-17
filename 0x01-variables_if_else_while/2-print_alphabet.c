#include <stdio.h>
/**
 * main - prints alphabets in lowercase
 *
 * Return: always 0 when successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
