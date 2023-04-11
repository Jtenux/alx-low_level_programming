#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - main function
 * @width: array width
 * @height: array height
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (m = 0 ; m < height ; m++)
	{
		grid[m] = malloc(sizeof(int) * width);
		if (grid[m] == NULL)
		{
			for (n = 0 ; n < m ; n++)
			{
				free(grid[n]);
			}
			free(grid);
			return (NULL);
		}
		for (n = 0 ; n < width ; n++)
		grid[m][n] = 0;
	}
	return (grid);
}
