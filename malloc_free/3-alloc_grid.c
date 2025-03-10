#include "main.h"
#include <stdlib.h>

/**
 * _alloc_grid - allocate memory for a 2 dimentional array
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to a 2 dimentionnal array, or NULL if fail
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int index1;
	int index2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	
	grid = malloc(sizeof(int) * width * height);
	
	if (grid == NULL)
	{
		return (NULL);
	}
	for (index1 = 0; index1 < width; index1++)
	{
		for (index2 = 0; index2 < height; index2++)
		{
			grid[index1][index2] = 0;
		}
	}
	return (grid);
}
