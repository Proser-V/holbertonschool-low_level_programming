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

	while (hours < 25)
	{
		if (min < 60)
		{
			min++;
		}
		hours++;
	}
}
