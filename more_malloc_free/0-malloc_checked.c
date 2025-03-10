#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - check the malloc function
 * @b: number of bytes allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
