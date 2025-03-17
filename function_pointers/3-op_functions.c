#include "3-calc.h"

/**
 * op_add - addition
 * @a: the first integer
 * @b: the second integer
 * Return: the result of the addition of a and b
 */

int op_add(int a, int b)
{
	int res;

	res = a + b;

	return (res);
}

/**
 * op_sub - substraction
 * @a: the first integer
 * @b: the second integer
 * Return: the result of the difference of a and b
 */

int op_sub(int a, int b)
{
	int res;

	res = a - b;

	return (res);
}

/**
 * op_mul - multiplication
 * @a: the first integer
 * @b: the second integer
 * Return: the result of the product of a and b
 */

int op_mul(int a, int b)
{
	int res;

	res = a * b;

	return (res);
}

/**
 * op_div - division
 * @a: the first integer
 * @b: the second integer
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	int res;

	res = a / b;

	return (res);
}

/**
 * op_mod - modulo
 * @a: the first integer
 * @b: the second integer
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	int res;

	res = a % b;

	return (res);
}
