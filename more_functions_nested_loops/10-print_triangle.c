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

	a = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
		l = 0;
			while (l < (size - a))
			{
			_putchar(' ');
			}
		_putchar('#');	
		_putchar('\n');
		}
	}
}
