#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to trnaform.
 *
 * Return: nothing (void)
 */

void print_binary(unsigned long int n)
{
	int index;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			index = 1;
		}
		else if (index)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
