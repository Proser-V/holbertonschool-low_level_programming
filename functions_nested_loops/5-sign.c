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
		return (1);
		_putchar(43);
	}
	else if (n == 48)
	{
		return (0);
		_putchar(48);
	}
	else if (n < 48)
	{
		return (-1);
		_putchar(45);
	}
	return (0);
}
