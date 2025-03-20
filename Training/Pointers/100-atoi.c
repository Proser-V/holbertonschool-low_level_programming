#include "main.h"
#include <stdio.h>

/**
 * find_sign - Helper function of _atoi to check prealable conditions.
 * 
 * Despcription: Check the string for '+' or '-', the highest number
 *               of symbols define the sign to return.
 *               Also check for the presence of numbers in the string.
 *               Check if the string is NULL.
 * 
 * @s: The string to convert.
 * 
 * Return: 1 if positif, -1 if negatif, 0 if no numbers in the string.
 */

int find_sign(char *s)
{
	int index;
	int minus_count = 0;
	int plus_count = 0;
	int number_check = 0;

	if (s != NULL)
	{
		for (index = 0; s[index] != '\0'; index++)
		{
			if (s[index] == '-')
			{
				minus_count++;
			}
			if (s[index] == '+')
			{
				plus_count++;
			}
			if (s[index] >= '0' && s[index] <= '9')
			{
				number_check = 1;
				break;
			}
		}
		if (number_check == 0)
		{
			return (0);
		}
		if (minus_count > plus_count)
		{
			return (-1);
		}
		if (minus_count <= plus_count)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * _atoi - convert a string to an int.
 * 
 * Despcription: convert the initial portion of the string pointed to by s
 *               to int.
 * 
 * @s: The string to convert.
 * 
 * Return: The converted value or 0 on error.
 */

int _atoi(char *s)
{
	int index;
	int control = find_sign(s);
	int number_check;
	unsigned int result = 0;

	if (control == 0)
	{
		return (0);
	}

	for (index = 0, number_check = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			number_check = 1;
			result = (result * 10) + s[index] - '0';
		}
		else if (number_check == 1)
		{
			break;
		}
	}
	result = (result * control);
	return (result);
}
