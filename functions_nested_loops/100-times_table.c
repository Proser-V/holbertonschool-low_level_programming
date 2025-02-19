#include "main.h"

/**
 * times_table - print n times tables
 * @n: the choosen time table
 * Return: nothing
 */

void print_times_table(int n)
{
	int i = 0;
	int table = 0;
	int result = 0;
	int last_digit = 0;
	int first_digit = 0;
	int second_digit = 0;

	for (; i < 100; i++)
	{
		for (table = 0; table < 100; table++)
		{
			result = i * table;
			if (result > 9)
			{
				first_digit = result / 10;
				last_digit = result % 10;
				_putchar('0' + first_digit);
				_putchar('0' + last_digit);
			}
			else if (result > 99)
			{
				first_digit = result / 100;
				last_digit = result % 10;
				second_digit = result / 10;
				_putchar('0' + first_digit);
				_putchar('0' + second_digit);
				_putchar('0' + last_digit);
			}
			else
			{
				if (table != 0)
				{
					_putchar(' ');
				}

				_putchar('0' + result);
			}

			if (table != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
