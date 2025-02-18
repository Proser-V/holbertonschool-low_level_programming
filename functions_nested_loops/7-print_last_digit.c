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
	_putchar(x);

	return (x);
}
