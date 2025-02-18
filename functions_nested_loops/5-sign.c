#include "main.h"

/**
 * print_sign - Entry point
 * @n: entry parameter
 * Return: 1 if n positive, 0 if n null, -1 if n negative
 */

int print_sign(int n)
{

	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}
