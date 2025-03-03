#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte
 * @n: numbers of bytes to fill
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
