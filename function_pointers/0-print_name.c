#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: the name to print
 * @f: pointer to a function "f"
 * Return: nothing (void)
 */

void print_name(char *name, void (*f)(char *))
{
		f(name);
}
