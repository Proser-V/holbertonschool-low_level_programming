#include "main.h"

/**
 * _puts - prints a string
 * 
 * Despcription: This function prints a string followed by a new line
 *               to the standard output.
 * 
 * @str: The string we want to print
 * 
 * Return: nothing (void)
 */

void _puts(char *str)
{
    int index;

    for (index = 0; str[index] != '\0'; index++)
    {
        _putchar(str[index]);
    }
    _putchar('\n');
}