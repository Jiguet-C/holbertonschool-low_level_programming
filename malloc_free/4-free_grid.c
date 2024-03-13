#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: double pointer
 * @height: integer
 * Return: NULL or pointer
 */

void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
		{
			free(grid[row]);
		}
	free(grid);
}
