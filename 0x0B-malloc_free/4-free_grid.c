#include "main.h"
#include <stdlib.h>
/**
 * free_grid - this function frees the grid
 * @grid: array
 * @height: grid height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0 ; m < height ; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
