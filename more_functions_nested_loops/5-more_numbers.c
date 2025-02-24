#include "main.h"

/**
 * more_numbers - print more digits
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int num;
	int a;

	for (a = 0; a <= 10; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num + '0') / 10);
			}
			_putchar((num + '0') % 10);
		}
	}
	_putchar('\n');
}
