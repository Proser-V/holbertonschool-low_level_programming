#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: multidimentionnal array
 * @size: size of the array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int result1 = 0;
	int result2 = 0;

	for (i = 0; i < size; i++)
	{
		result1 += a[i * size + i];
	}
	for (i = size; i > 0; i--)
	{
		result2 += a[i * size - i];
	}
	printf("%d, %d\n", result1, result2);
}
