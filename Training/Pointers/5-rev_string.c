#include "main.h"

/**
 * rev_string - reverse a string
 * 
 * Despcription: This function reverse a string with no print.
 * 
 * @s: The string we want to reverse
 * 
 * Return: nothing (void)
 */

void rev_string(char *s)
{
    int index1 = 0;
    int index2;
    char temp;

    while (s[index1] != '\0')
    {
        index1++;
    }
    index1--;

    for (index2 = 0; index2 <= index1; index2++, index1--)
    {
        temp = s[index1];
        s[index1] = s[index2];
        s[index2] = temp;
    }
}