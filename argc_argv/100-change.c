#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check - check conditions for main
 * @argc: number of arguments
 * @argv: array containing the arguments
 * Return: 0 on success, 1 on Error
 */

int check(int argc, char **argv)
{
	int i, k;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
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
	int j, remains, count = 0;

	if (check(argc, argv) == 1)
		return (1);

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("0\n");
		return (0);
	}

	remains = j;

	count += remains / 25;
	remains %= 25;

	count += remains / 10;
	remains %= 10;

	count += remains / 5;
	remains %= 5;

	count += remains / 2;
	remains %= 2;

	count += remains;

	printf("%d\n", count);
	return (0);
}
