#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of grid
 * @height: height ogf grid
 *
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			while (i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
