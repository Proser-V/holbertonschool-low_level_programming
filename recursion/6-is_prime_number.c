#include "main.h"

/**
 * _prime_check - check divisibility
 * @n: the target number
 * @prime: testing integer
 * Return: if prime or not
 */

int _prime_check(int n, int prime)
{
	if (prime > n / 2)
	{
		return (1);
	}
	if (n % prime == 0)
	{
		return (0);
	}
	return (_prime_check(n, prime + 1));
}

/**
 * is_prime_number -  check for prime
 * @n: the target number
 * Return: 1 if prime, else return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_check(n, 2));
}
