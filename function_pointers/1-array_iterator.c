#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter of an array
 * @array: the targeted array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: nothing (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	for (i = 0; (size_t)i < size; i++)
	{
		action(array[i]);
	}
}
