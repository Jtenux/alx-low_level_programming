#include "main.h"
/**
 * reverse_array - this functiom reverses the content of
 * an array of integers
 * @a: array of inegers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int m;
	int j;

	for (m = 0 ; m < (n / 2) ; m++)
	{
		j = a[m];
		a[m] = a[n - m - 1];
		a[n - m - 1] = j;
	}
}
