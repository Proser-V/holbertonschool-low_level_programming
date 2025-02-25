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

	for (i = 0; i < n; i++)
	{
	printf("%d, ", *a);
	}
	_putchar('\n');
}
