#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 *             one number to another.
 *
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number = n ^ m;
	unsigned int count = 0;

	while (number != 0)
	{
		number &= (number - 1);
		count++;
	}
	return (count);
}
