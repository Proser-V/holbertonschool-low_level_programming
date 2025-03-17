#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 * Return: nothing (void)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *arguments = va_arg(args, char*);

		if (arguments == NULL)
			printf("nil");
		else
			printf("%s", arguments);
		if (i + 1 == n)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
