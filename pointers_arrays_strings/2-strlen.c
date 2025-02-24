#include "main.h"

/**
 * _strlen - show the length of a string
 * @s: target string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	char *i = s;
	int count = 0;

	for (i = s; *i; i++)
	{
	count++;
	}

	return (count);
}
