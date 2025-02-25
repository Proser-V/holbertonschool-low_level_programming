#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 * @a: target array
 * @n: number of elements of the array to be printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		printf("%d", a[0]);

		for (i = 1; i < n; i++)
		{
		printf(", %d", a[i]);
		}
	}	
	putchar('\n');
}
