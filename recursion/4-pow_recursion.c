#include "main.h"

/**
 * _pow_recursion - return the factorial of a given number
 * @x: the target number
 * @y: the power
 * Return: the value of x raised to the power of y, or -1 if an error occured
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
