#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D array previously created
 * @grid: target grid
 * @height: height of the array
 * Return: nothing (void)
 */

void free_grid(int **grid, int height)
{
	int index;

	if (grid == NULL)
	{
		return;
	}

	for (index = 0; index < height; index++)
	{
		if (grid[index] != NULL)
		{
			free(grid[index]);
		}
	}
	free(grid);
}
