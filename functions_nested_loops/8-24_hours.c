#include "main.h"

/**
 * jack_bauer - Entry point
 * Return: no return
 */

void jack_bauer(void)
{
	int hours;
	int min;

	hours = 0;
	min = 0;

	for (; hours < 24; hours++)
	{
		for (minutes=0; min < 60; min ++)
		{
		_putchar ('0' + hours / 10);
		_putchar ('0' + hours % 10);
		_putchar (':');
		_putchar ('0' + min / 10);
		_putchar ('0' + min % 10);
		_putchar ('\n');
		}
	}
}
