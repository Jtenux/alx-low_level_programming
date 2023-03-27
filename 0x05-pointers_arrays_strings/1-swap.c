#include "main.h"
/**
 * swap_int - this function swaps the value of two integers
 * @a: interger 1
 * @b: integer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
