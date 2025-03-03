#include "main.h"

/**
 * *_strstr- search for the first occurence of string2 in string1
 * @haystack: target string
 * @needle: string to find
 * Return: pointer to the beggining of the located substring, or NULL if none
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0' && needle[j] == haystack[i + j]; j++)
			{

			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
