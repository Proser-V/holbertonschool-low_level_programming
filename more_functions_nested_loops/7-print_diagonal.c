#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: number of "\"
 * Return: nothing
 */

void print_diagonal(int n)
{
	int a;
	int s;

	a = 0;
	s = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a != n; a++)
		{
			if (a != 0)
			{
				while (s < a)
				{
				_putchar(' ');
				s++;
				}
			s = 0;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
