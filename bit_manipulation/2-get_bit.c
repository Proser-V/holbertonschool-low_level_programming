#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: a number passed to the function.
 * @index: the given index where to check (starting from 0).
 *
 * Return: the value of a bit (1 or 0) or -1 when an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int number, value;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	number = n >> index;
	value = number & 1;
	return (value);
}
