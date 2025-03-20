#include "main.h"

/**
 * swap_int - swap the value of two integers
 * 
 * Despcription: This function swap the value of 2 integers
 * 
 * @a: The first integer
 * @b: The second integer
 * 
 * Return: nothing (void).
 */

void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}