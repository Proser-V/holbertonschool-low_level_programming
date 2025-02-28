#include "main.h"

/**
 * *infinite_add - add 2 numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer used in the function
 * @size_r: buffer size
 * Return: a pointer to the result, or 0 if result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, i;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
	{
		return (0);
	}

	r[size_r - 1] = '\0';

	for (i = 0; i < size_r - 1 && (len1 > 0 || len2 > 0 || carry); i++)
	{
		sum = carry;
		if (len1 > 0)
		{
			sum += n1[--len1] - '0';
		}
		if (len2 > 0)
		{
			sum += n2[--len2] - '0';
		}

		r[size_r - 2 - i] = (sum % 10) + '0';
		carry = sum / 10;
	}

	if (carry > 0)
	{
		return (0);
	}

	return (r + size_r - 1 - i);
}
