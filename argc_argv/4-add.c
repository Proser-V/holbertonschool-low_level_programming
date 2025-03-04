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
	int i;
	int j;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (i = 0; *argv[i] != '\0'; i++)
		{
			if (isdigit(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				j = atoi(argv[i]);
				j += result;
			}
		}
	}
	printf("%d\n", result);
	return (0);
}
