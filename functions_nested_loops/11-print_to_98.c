#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: specified number
 * Return: nothing
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 97)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98\n");
}
