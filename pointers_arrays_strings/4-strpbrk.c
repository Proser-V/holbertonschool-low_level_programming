#include "main.h"

/**
 * *_strpbrk - search for string2 characters in string1
 * @s: target string
 * @accept: accepted characters to find
 * Return: pointer to the byte "s" that matches the bytes in "accept", or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *p = s;

	for (i = 0; s[i] != '\0'; i++, p++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (p);
			}
		}
	}
	return (NULL);
}
