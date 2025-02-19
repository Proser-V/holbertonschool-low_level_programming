#include "main.h"

/**
 * print_number - Helper function for Betty
 * @num: The number to print
 */

void print_number(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + num);
	}
	else if (num < 100)
	{
		_putchar(' ');
		_putchar('0' + (num / 10));
		_putchar('0' + (num % 10));
	}
	else
	{
		_putchar('0' + (num / 100));
		_putchar('0' + (num / 10) % 10);
		_putchar('0' + (num % 10));
	}
}

/**
 * print_times_table - print n times table
 * Description: This function will print n times table
 * starting with 0
 * @n: number of times table
 * Return: int times table
 */

void print_times_table(int n)
{
	int l;
	int c;
	int result;

	if (n > 15 || n < 0)
		return;

	for (l = 0; l <= n; l++)
	{
		for (c = 0; c <= n; c++)
		{
			result = c * l;

			if (c == 0)
				_putchar('0' + result);
			else
			{
				_putchar(',');
				_putchar(' ');
				print_number(result);
			}
		}
		_putchar('\n');
	}
}
