#include "main.h"

/**
 * print_square - print a square
 * @size: square's size
 * Return: nothing
 */

void print_square(int size)
{
	int a;
	int s;

	a = 0;
	s = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a != size; a++)
		{
			for (s = 0; s != size; s++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
