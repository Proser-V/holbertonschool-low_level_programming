#include "main.h"

/**
 * jack_bauer - Entry point
 * Return: no return
 */

void jack_bauer(void)
{
	int hours = 0;
	int min = 0;

	for (; hours < 24; hours++)
	{
		for (min = 0; min < 60; min++)
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
