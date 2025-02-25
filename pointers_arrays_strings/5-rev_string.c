#include "main.h"

/**
 * rev_string - reverse a string
 * @s: target string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int len = 0;
	int temp;

	while (s[len] != '\0')
		len++;

	for (i = 0, j = i - 1; s[i] != s[j]; i++, j--)
	{
		temp = j;
		j = i;
		i = temp;
	}
	_putchar('\n');
}
