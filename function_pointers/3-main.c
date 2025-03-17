#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of strings containing arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int res = 0, a, b;
	int (*ope)(int, int) = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[2]) != 1 || !strchr("+-*/%", argv[2][0]) || ope == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' && b == 0) || (*argv[2] == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = ope(a, b);
	printf("%d\n", res);
	return (0);
}
