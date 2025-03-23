#include "holberton.h"

/**
 * _print_string - A helper function for _printf, printing a string.
 *
 * Description: When a conversion specifier "%s" is passed to _ptrinf, this
 *              function prints the string from the "format" arguments.
 *
 * @arguments: The arguments list passed to _printf.
 *
 * Return: The count of printed characters.
 */

int _print_string(va_list arguments)
{
	int index, count = 0;
	char *str = (va_arg(arguments, char *));

	if (str == NULL) /* Check if str is NULL */
		str = "(null)"; /* If NULL, fill str with "(null)" to print it */
	for (index = 0; str[index] != '\0'; index++)
	{
		write(1, &str[index], 1); /* Write %s string */
		count++;
	}
	return (count);
}
