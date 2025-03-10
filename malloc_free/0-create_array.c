#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of the array
 * @c: specific char to initialize the array with
 * Return: NULL if fail or size = 0, or c
 */

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	tab = malloc(size);
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
}
