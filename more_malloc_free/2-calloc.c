#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each elements
 * Return: a pointer to the array, or NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *grid;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	grid = malloc(nmemb * size);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < (nmemb * size); index++)
	{
		grid[index] = 0;
	}
	return (grid);
}
