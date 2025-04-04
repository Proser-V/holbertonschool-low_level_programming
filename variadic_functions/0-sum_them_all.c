#include "variadic_functions.h"

/**
 * sum_them_all - Addition af all the parameters
 * @n: number of numbers to add
 * Return: The sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
