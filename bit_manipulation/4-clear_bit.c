#include "main.h"

/**
 * clear_bit - Set the value of a bit at a given index to 0.
 *
 * @n: a number passed to the function.
 * @index: the given index where to check (starting from 0).
 *
 * Return: 1 on success or -1 when an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
