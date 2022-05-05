#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of integers
 * @grid: 2-dimensional array of integers to be freed.
 * @height: height of grid.
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
		free(grid[n]);
	free(grid);
}
