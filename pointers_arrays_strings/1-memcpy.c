#include "main.h"

/**
 * *_memcpy - fills memory with a constant byte
 * @src: memory area to copy
 * @dest: memory area destination of the copy
 * @n: numbers of bytes to copy
 * Return: a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *s = src;
	char *d = dest;

	for (i = 0; n > i; i++)
	{
		d[i] = s[i];
	}
	return (dest);
}
