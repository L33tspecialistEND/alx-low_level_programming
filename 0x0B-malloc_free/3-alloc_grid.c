#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D array
 * @width: Array width
 * @height: Array height
 * Return: NULL or grid
 */
int **alloc_grid(int width, int height)
{
	int *grid, i;

	grid = malloc((width * height) * sizeof(int));
	if (width == 0 || width < 0 || height == 0 || height < 0)
		return (NULL);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < (width * height); i++)
		grid[i] = 0;

	return (grid);
}
