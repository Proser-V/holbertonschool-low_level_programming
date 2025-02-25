#include "main.h"
#include <stdio.h>

/**
 * puts_array - print elements of an array of integers
 * @a: target array
 * @n: number of elements of the array to be printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;
	
	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
	printf(", %d", a[i]);
	}
	_putchar('\n');
}
