#include "function_pointers.h"

/**
 * int_index - Search for integers
 *
 * Description: This function searchs for specific integers through an array
 *
 * @array: The array we need to apply the function
 * @size: The size of the array
 * @cmp: A pointer to the function you need to use to compare values
 *
 * Return: the index of the first element for which the cmp function
 *         does not return 0, or -1 on error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int number_found = 0;

	if (size <= 0)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			number_found = 1;
			break;
		}
	}
	if (number_found == 0)
	{
		return (-1);
	}
	return (index);
}
