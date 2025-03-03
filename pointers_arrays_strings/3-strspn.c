#include "main.h"

/**
 * *_strspn - get the length of a prefix substring
 * @s: target string
 * @accept: accepted characters (to count)
 * Return: number of bytes counted in "s" from "accept"
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int ok = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				ok = 1;
				break;
			}
		}

		if (ok == 1)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
