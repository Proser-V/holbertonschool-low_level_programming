#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: target string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
		len++;
	if ((len % 2) != 0)
	{
		for (i = (len / 2) + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		for (i = (len / 2); str[i] != '\0'; i++)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
