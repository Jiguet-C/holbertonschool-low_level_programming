#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer
 * @height: integer
 * Return: NULL or pointer
 */

int **alloc_grid(int width, int height)
{
	int row;
	int column;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			while (row >= 0)
			{
				--row;
				free(grid[row]);
			}
			return (NULL);
		}
		for (column = 0; column < width; column++)
		{
			grid[row][column] = 0;
		}
	}

	return (grid);
}
