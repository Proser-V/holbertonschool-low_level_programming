#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for a 2 dimentional array
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to a 2 dimentionnal array, or NULL if fail
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int index1, index2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (index1 = 0; index1 < height; index1++)
	{
		grid[index1] = malloc(sizeof(int) * width);
		if (grid[index1] == NULL)
		{
			for (index2 = 0; index2 < index1; index2++)
			{
				free(grid[index2]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (index1 = 0; index1 < height; index1++)
	{
		for (index2 = 0; index2 < width; index2++)
		{
			grid[index1][index2] = 0;
		}
	}
	return (grid);
}
