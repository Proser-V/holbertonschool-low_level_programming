#include "main.h"
#include <stdio.h>

/**
 * _atoi - extract a number from a string
 * @s: source string
 * Return: the number value or 0 if no number in the string
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int num = 0;
	int sign = 1;
	int ok = 0;

	while (s[i] == ' ')
	{
		i++;
	}

		while (s[i] != '\0')
		{
			if (s[i] == '-')
			{
				sign = sign * -1;
			}
			if (s[i] >= '0' && s[i] <= '9')
			{
				num = (num * 10) + (s[i] - '0');
				ok = 1;
			}
			else if (ok == 1)
			{
				break;
			}
		i++;
		}
	if (ok == 0)
	{
		return (0);
	}
	else
	{
		return (num * sign);
	}
}
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
	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = _atoi(argv[1]);
		j = _atoi(argv[2]);
		result = i * j;
		printf("%d\n", result);
	}
	return (0);
}
