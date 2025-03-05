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
	int remains = j;
	int count = 0;
	int result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (j < 0)
	{
		printf("0\n");
	}
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
