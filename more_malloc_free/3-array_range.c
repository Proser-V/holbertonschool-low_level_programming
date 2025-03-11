#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: first integer to include
 * @max: last integer to include
 * Return: a pointer to the array, or NULL if fail
 */

int *array_range(int min, int max)
{
	int *grid;
	int index;
	int length = (max - min + 1);
	int number;

	if (min > max)
	{
		return (NULL);
	}

	grid = malloc(length * sizeof(int));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (index = 0, number = min; index < length; index++, number++)
	{
		grid[index] = number;
	}
	return (grid);
}
