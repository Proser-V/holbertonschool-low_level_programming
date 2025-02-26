#include "main.h"

/**
 * *_strncpy - copy some characters from a string to an array
 * @dest: destination array
 * @src: source string
 * @n: number of copied characters from source
 * Return: a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
