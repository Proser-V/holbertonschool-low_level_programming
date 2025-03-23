#include "holberton.h"

/**
 * _print_digit - A helper function for _printf, printing a signed integer.
 *
 * Description: When a conversion specifier "%d" or "%i" is passed to _ptrinf,
 *              this function prints the integer from the "format" arguments.
 *
 * @arguments: The arguments list passed to _printf.
 *
 * Return: The count of printed characters.
 */

int _print_digit(va_list arguments)
{
	int digit = va_arg(arguments, int);

	write(1, &digit, 1);
	return (1);
}
