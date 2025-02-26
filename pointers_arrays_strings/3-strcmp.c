#include "main.h"

/**
 * _strcmp - compare twe strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if similar, positive number if s1 greater than s2
 * negative if s2 greater than s1
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int c1 = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			c1 = (s1[i] - s2[i]);
			return (c1);
		}
	}
	return (0);
}
