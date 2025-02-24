#include "main.h"

/**
 * _puts - print a string
 * @str: target string
 * Return: nothing
 */

void _puts(char *str)
{
	char *i = str;

	for (i = str; *i; i++)
	{
		_putchar(*i);
	}
	_putchar('\n');
}
