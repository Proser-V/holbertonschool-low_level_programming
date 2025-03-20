#include "main.h"

/**
 * print_rev - prints a string in reverse
 * 
 * Despcription: This function prints a string in reverse followed by a new 
 *               line to the standard output.
 * 
 * @s: The string we want to print in reverse
 * 
 * Return: nothing (void)
 */

void print_rev(char *s)
{
    int index;

    while (s[index] != '\0')
    {
        index++;
    }
    while (index >= 0)
    {
        _putchar(s[index]);
        index--;
    }
    _putchar('\n');
}
