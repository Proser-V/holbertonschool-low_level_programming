#include "main.h"
#include <stdio.h>

/**
 * _strcat - Appens a string to another.
 * 
 * Despcription: Appens the src string to the dest string, overwriting the
 *               terminating null byte ('\0') at the end of dest and then add
 *               a terminating null byte.
 * 
 * @dest: The destination string.
 * @src: The source string.
 * 
 * Return: a pointer to the destination string.
 */

char *_strcat(char *dest, char *src)
{
    int index1, index2 = 0;

    while (dest[index2] != '\0')
    {
        index2++;
    }

    for (index1 = 0; src[index1] != '\0'; index1++, index2++)
    {
        dest[index2] = src[index1];
    }
    dest[index2] = '\0';
    return (dest);
}