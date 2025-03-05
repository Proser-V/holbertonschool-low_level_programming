#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array containing the arguments
 * Return: 0 on success, 1 on Error
 */

int main(int argc, char **argv)
{
	int j = atoi(argv[1]);
	int remains = 0;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (j < 0)
	{
		printf("0\n");
	}
	if (j >= 25)
	{
		remains = j - 25;
		count++;
	}
	else if (j < 25 && j >= 10)
	{
		remains = j - 10;
		count++;
	}
	else if (j < 10 && j >= 5)
	{
		remains = j - 5;
		count++;
	}
	else if (j < 5 && j >= 2)
	{
		remains = j - 2;
		count++;
	}
	else if (j < 2 && j >= 1)
	{
		remains = j - 1;
		count++;
	}
	else if (remains == 0)
	{
	printf("%d\n", count);
	}
	return (0);
}
