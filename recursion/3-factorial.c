#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: the target number
 * Return: the factorial of n, or -1 if an error occured
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
