#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: target array
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for (i = 0, j = n - 1; i < j && i != n; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
