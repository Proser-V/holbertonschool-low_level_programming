#include "function_pointers.h"

/**
 * int_index - search for integers
 * @array: the targeted array
 * @size: number of elements in the array
 * @cmp: pointer to the function you need to use to compare values
 * Return: the index of the first element for which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
