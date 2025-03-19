#include "main.h"

/**
 * strlen - calculate the length of a string
 * 
 * Despcription: This function calculates the length of the string pointed to
 *               by s, excluding the terminating null byte ('\0').
 * 
 * @s: The string we want to know the length
 * 
 * Return: the number of bytes in the string.
 */

int _strlen(char *s)
{
    int count = 0;
    int index;

    for (index = 0; s[index] != ('\0'); index++)
    {
        count++;
    }
    return (count);
}