#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first targeted string
 * @s2: second targeted string
 * @n: number of bytes of the second string
 * Return: pointer to the allocated memory or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	char *concat;
	unsigned int index;

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
	if (n > size2)
	{
		n = size2;
	}

		concat = malloc(size1 + n + 1);
	if (concat == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size1; index++)
	{
		concat[index] = s1[index];
	}

	for (index = size1; index < (size1 + n); index++)
	{
		concat[index] = s2[index - size1];
	}
	concat[size1 + n] = '\0';
	return (concat);
}
