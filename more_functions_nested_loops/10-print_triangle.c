#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: triangle's base
 * Return: nothing
 */

void print_triangle(int size)
{
	int a;
	int l;
	int c;

	a = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (l = 1; l != (size - a); l++)
			{
			_putchar(' ');
			}
				for (c = 0; c <= (size - l); c++)
				{
				_putchar('#');
				}
		_putchar('\n');
		}
	}
}
