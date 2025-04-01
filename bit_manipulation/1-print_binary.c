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
	int ok;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if (n & mask) /* Check if the current bit is set (1) */
		{
			_putchar('1');
			ok = 1;
		}
		else if (ok == 1) /* If printing has started and the bit is 0, print '0' */
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
