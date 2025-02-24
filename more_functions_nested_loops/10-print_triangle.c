#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: triangle's base
 * Return: nothing
 */

void print_triangle(int size)
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
			if (s < a)
			{
				_putchar(' ');
				s++;
			}
			else
			{
				_putchar('#');
			}
		_putchar('\n');
		s = 0;
		}
	}
}
