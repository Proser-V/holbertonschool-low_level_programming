#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: nothing (void)
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					printf("%s%s", separator, str ? str : "(nil)");
					break;
				}
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
