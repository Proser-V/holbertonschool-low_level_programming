#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string to a newly allocated space in memory
 * @str: target string to copy
 * Return: a pointer to the duplicate string, or NULL if fail
 */

char *_strdup(char *str)
{
	int size = 0;
	char *copy;
	int index;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		size++;
	}

	copy = malloc(size + 1);
	if (copy == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		copy[index] = str[index];
	}
	copy[size] = '\0';
	return (copy);
}
