#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2D array of int
 * @grid: 2D array
 * @height: rows of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
		for (i = 0; i < height; i++)
			free(grid[i]);
	free(grid);
}
