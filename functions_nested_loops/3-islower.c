#include "main.h"

/**
 * _islower - Entry point
 * @c: entry parameter
 * Return: 1 if c is lowercase ; or 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
