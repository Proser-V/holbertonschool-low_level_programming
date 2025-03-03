#include "main.h"

/**
 * *_strchr - locate a character in a string
 * @s: target string
 * @c: traget character
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = s;

	for (i = 0; p[i] != '\0'; i++, p++)
	{
		if (p[i] == c)
		{
			p++;
			return (p);
		}
	}
	return (NULL);
}
