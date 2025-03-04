#include "main.h"

/**
 * _check_recursion - Helper function to check if a string is a palindrome
 * @s: String to check
 * @start: Starting index
 * @end: Ending index
 * Return: 1 if palindrome, 0 if not
 */
int _check_recursion(char *s, int start, int end)
{
	if (start >= end)
	{
	return (1);
	}

	if (s[start] != s[end])
	{
	return (0);
	}

	return (_check_recursion(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - Helper function to calculate the length of a string recursively
 * @s: String to calculate the length of
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (s == NULL)
	{
	return (0);
	}
	if (length == 0)
	{
	return (1);
	}
	return (_check_recursion(s, 0, length - 1));
}
