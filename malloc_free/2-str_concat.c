#include "main.h"
#include <stdlib.h>

/**
 * _str_concat - concatenate 2 strings in a new allocated space memory
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

	for (index = 0; s1[index] != '\0'; index++)
	{
		size1++;
	}
	for (index = 0; s2[index] != '\0'; index++)
	{
		size2++;
	}
	if (s1 == NULL)
	{
		size1 = 0;
	}
	if (s2 == NULL)
	{
		size2 = 0;
	}
	concat = malloc(size1 + size2 + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size1; index++)
	{
		concat[index] = s1[index];
	}
	for (index = size1; index < (size1 + size2); index++)
	{
		concat[index] = s2[index - size1];
	}
	concat[size1 + size2] = '\0';
	return (concat);
}
