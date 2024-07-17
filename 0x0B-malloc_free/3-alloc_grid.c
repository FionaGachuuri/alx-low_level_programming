#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = (int *) malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			free(grid);
			for (b = 0; b <= a; b++)
				free(grid[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}

