#include "main.h"
#include <stdlib.h>

/**
 * free_grid -function that frees a 2 dimensional grid
 * previously created by the alloc_grid function
 * @grid: -the 2D matrix to free
 * @height: -height of the matrix
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)

	return;

	for (a = 0; a < height; a++)
{
	free(grid[a]);
}
free(grid);
}
