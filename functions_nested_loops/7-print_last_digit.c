#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: a number entry
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
	{
		x = -x;
	}

	_putchar(x + '0');

	return (x);
}
