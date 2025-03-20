#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy the sorce string to the destination buffer.
 * 
 * Despcription: Copy the string pointed to by src, including the terminating
 *               null byte ('\0'), to the buffer pointed to by dest.
 * 
 * @dest: The destionation of the copy.
 * @src: The source string.
 * 
 * Return: Return a pointer to the destination string dest.
 */

char *_strcpy(char *dest, char *src)
{
	int index1, index2;

	for(index1 = 0, index2 = 0; src[index1] != '\0'; index1++, index2++)
	{
		dest[index2] = src[index1];
	}
	dest[index2] = '\0';

	return (dest);
}