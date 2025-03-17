#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: nothing (void)
 */

void print_all(const char * const format, ...)
{
	va_list args; int i = 0, num; char *separator = "", *str; double f;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's')
		{
			printf("%s", separator);
			if (format[i] == 'c')
			{
				num = va_arg(args, int);
				printf("%c", num);
			}
			else if (format[i] == 'i')
			{
				num = va_arg(args, int);
				printf("%d", num);
			}
			else if (format[i] == 'f')
			{
				f = va_arg(args, double);
				printf("%f", f);
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char*);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
			}
			separator = ", ";
		}
			i++;
	}
	va_end(args);
	printf("\n");
}
