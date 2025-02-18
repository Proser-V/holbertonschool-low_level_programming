#include "main.h"

/**
 * print_sign - Entry point
 * @n: entry parameter
 * Return: 1 if n positive, 0 if n null, -1 if n negative
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 48)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 48)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
