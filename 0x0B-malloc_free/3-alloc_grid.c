#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int n, x;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		grid[n] = malloc(width * sizeof(int));
		if (grid[n] == NULL)
		{
			for (n = 0; n < height; n++)
				free(grid[n]);
			free(grid);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			grid[n][x] = 0;
	}
	return (grid);
}
