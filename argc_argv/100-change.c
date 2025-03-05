#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check - check conditions for main
 * @argc: number of arguments
 * @argv: array containing the arguments
 * @j : the integer value of agrv[1]
 * Return: 0 on success, 1 on Error
 */

int check(int argc, char **argv, int j)
{
	int i, k;

	j = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (j < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (isdigit(argv[i][k]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array containing the arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int j = atoi(argv[1]);
	int remains = j;
	int count = 0;
	int result = 0;

	(void)argc;

	while (remains >= 25)
	{
		result = remains - 25;
		remains = result;
		count++;
	}
	while (remains < 25 && remains >= 10)
	{
		result = remains - 10;
		remains = result;
		count++;
	}
	while (remains < 10 && remains >= 5)
	{
		result = remains - 5;
		remains = result;
		count++;
	}
	while (remains < 5 && remains >= 2)
	{
		result = remains - 2;
		remains = result;
		count++;
	}
	while (remains == 1)
	{
		count++;
		remains--;
	}
	printf("%d\n", count);
	return (0);
}
