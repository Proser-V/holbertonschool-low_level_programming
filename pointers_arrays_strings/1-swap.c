#include "main.h"

/**
 * swap_int - swap the value of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
