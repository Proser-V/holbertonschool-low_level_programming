#include "main.h"

/**
 * print_numbers - print some digits
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}
}
