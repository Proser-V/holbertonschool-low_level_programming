#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings in a new allocated space memory
 * @s1: first target string
 * @s2: second target string
 * Return: a pointer to the concatenated string, or NULL if fail
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	char *concat;
	int index;

	if (s1 != NULL)
	{
		while (s1[size1] != '\0')
			size1++;
	}
	if (s2 != NULL)
	{
		while (s2[size2] != '\0')
			size2++;
	}

	concat = malloc(size1 + size2 + 1);

	if (concat == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (index = 0; index < size1; index++)
		{
			concat[index] = s1[index];
		}
	}
	if (s2 != NULL)
	{
		for (index = size1; index < (size1 + size2); index++)
		{
			concat[index] = s2[index - size1];
		}
	}

	concat[size1 + size2] = '\0';

	return (concat);
}
