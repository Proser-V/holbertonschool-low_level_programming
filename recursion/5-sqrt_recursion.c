#include "main.h"

/**
 * _sqrt_finder - find the square root
 * @n: the target number
 * @sq: testing integer
 * Return: the square root of n
 */

int _sqrt_finder(int n, int sq)
{
	if (sq * sq == n)
	{
		return (sq);
	}
	if (sq * sq > n)
	{
		return (-1);
	}
	return (_sqrt_finder(n, sq + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: the target number
 * Return: the natural square root of n, if no natural square root, return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_finder(n, 0));
}
