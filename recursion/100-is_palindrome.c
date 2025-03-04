#include "main.h"

/**
 * _rev_recursion - check a string in reverse
 * @s: string to print
 * Return: nothing
 */

typedef void (*Pass)(char);

void _rev_recursion(char *s, Pass process_rev)
{
	if (*s == '\0')
	{
		return;
	}
	_rev_recursion(s + 1, process_rev);
	process_rev(*s);
}

/**
 * _check_recursion - check a string
 * @s: string to print
 * Return: nothing
 */

void _check_recursion(char *s, Pass process_check)
{
	if (*s == '\0')
	{
		return;
	}
	process_check(*s);
	_check_recursion(s + 1);
}

/**
 * is_palindrome - checking for palindrome
 * @s: string to check through
 * Return: 1 if palindrome, 0 if none
 */

int is_palindrome(char *s)
{
	if (s == 0)
	{
		return (1);
	}
	return (is_palindrome(_rev_recursion(s, Pass process_rev)));
}
