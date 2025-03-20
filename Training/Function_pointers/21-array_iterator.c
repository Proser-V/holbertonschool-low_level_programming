#include "function_pointers.h"

/**
 * array_iterator - Execute a function for each element of an array
 * 
 * Description: Execute a function given as a parameter on each element
 *              of an array.
 * 
 * @array: The array we need to apply the function
 * @size: The size of the array
 * @action: A pointer to the function you need to use
 * 
 * Return: nothing (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t index;

    for (index = 0; index < size; index++)
    {
        action(array[index]);
    }
}
