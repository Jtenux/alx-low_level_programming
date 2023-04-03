#include "main.h"
/**
 * print_chessboard - this function prints the chessboard
 * @a: input
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int c, b;

	for (c = 0 ; c < 8 ; c++)
	{
		for (b = 0 ; b < 8 ; b++)
		{
			_putchar(a[c][b]);
		}
		_putchar('\n');
	}
}
