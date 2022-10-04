#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D array
 * @width: Array width
 * @height: Array height
 *
 * Return: NULL or grid
 */
int **alloc_grid(int width, int height)
{
	int (*grid)[width][height];

	grid = malloc(sizeof(*grid));
	if (width == 0 || width < 0 || height == 0 || height < 0)
		return (NULL);
	if ((*grid) == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
