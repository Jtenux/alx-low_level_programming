#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - this function prints the sum of two diagonals of
 * a square matrix of integers
 * @a: diag 1
 * @size: diag 2
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	i = 0;
	j = size - 1;

	while (i < size)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + j);
		i++;
		j--;
	}
	printf("%d, %d\n", sum1, sum2);
}
