#include "function_pointers.h"

/**
 * print_name - print a name
 * 
 * Description: this function prints a name through a function pointer.
 * 
 * @name: name to print
 * @f: a function pointer
 * 
 * Return: noting (void)
 */

void print_name(char *name, void (*f)(char *))
{
    f(name);
}