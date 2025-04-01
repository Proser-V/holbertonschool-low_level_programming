#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: Pointer to a string of "0" and "1" characters
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int index = 0, index2 = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		index++;
	}
	for (; index2 < index; index2++)
	{
		sum <<= 1;
		if (b[index2] == '1')
			sum += 1;
	}
	return (sum);
}
