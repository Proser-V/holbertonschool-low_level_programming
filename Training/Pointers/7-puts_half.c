#include "main.h"

/**
 * puts_half - prints the half of a string
 * 
 * Despcription: This function prints the second half of a string followed
 *               by a new line to the standard output.
 * 
 * @str: The string we want to print
 * 
 * Return: nothing (void)
 */

void puts_half(char *str)
{
    int index = 0;
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    for (index = ((length + 1) / 2); index < length; index++)
    {
        _putchar(str[index]);
    }
    _putchar('\n');
}