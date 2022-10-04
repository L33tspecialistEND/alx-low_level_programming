#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees memory taken by a grid
 * @grid: 2D array
 * @height: Number of rows of the array
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
