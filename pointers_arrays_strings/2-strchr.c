#include "main.h"

/**
 * *_strchr - locate a character in a string
 * @s: target string
 * @c: traget character
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p = s;

	for (i = 0; s[i] != '\0'; i++, p++)
	{
		if (s[i] == c)
		{
			return (p);
		}
	}
	return (NULL);
}
