#include "main.h"
#include <stdio.h>

/**
 * print_array - prints some elements of an array
 * 
 * Despcription: This function prints n elements of an array of int a
 *               printed numbers are separated by a comma and a space.
 *               They are diplayed in the same order as they are in the array.
 * 
 * @a: The array we are looking in
 * @n: The number of elements we will print
 * 
 * Return: nothing (void)
 */

void print_array(int *a, int n)
{
    int index = 0;

    printf("%d", a[index]);
    for (index = 0; index < n; index++)
    {
        printf(", %d", a[index]);
    }
    printf("\n");
}
