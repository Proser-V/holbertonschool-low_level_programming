#include "main.h"

/**
 * puts2 - prinys every other caracter of a string
 * 
 * Despcription: This function prints every other caracter of a string
 *               followed by a new line to the standard output.
 * 
 * @str: The string we want to print
 * 
 * Return: nothing (void)
 */

void puts2(char *str)
{
    int index;

    for (index = 0; str[index] != '\0'; index += 2)
    {
        _putchar(str[index]);
    }
    _putchar('\n');
}