#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: target string
 * Return: nothing
 */

void print_rev(char *s)
{
	int l;
	int i;
	char *begin = s;
	char *end = s;

	l = _strlen(s);

	for (i = 0; i < (l - 1); i++)
	{
		end++;
	}
		for (i = 0; i < (l / 2); i++)
		{
		char temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
	_putchar('\n');
}
