#include "main.h"

/**
 * *_strncat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * @n: byte number from source
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (src[j] < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
