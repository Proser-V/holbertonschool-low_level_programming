#include "main.h"

/**
 * print_line - print a line
 * @n: number of "_"
 * Return: nothing
 */

void print_line(int n)
{
	int a;

	a = 0;

	if (n <= 0 || a == n)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a != n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
