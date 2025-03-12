#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: number of arguments
 * @av: array containing arguments
 * Return: a pointer to a new string, or NULL if fail
 */

char *argstostr(int ac, char **av)
{
	int index, index2, index3 = 0;
	char *n_str;
	int lenght = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < ac; index++)
	{
		for (index2 = 0; av[index][index2] != '\0'; index2++)
		{
			lenght++;
		}
	}
	n_str = malloc(lenght + ac + 1);
	if (n_str == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < ac; index++)
	{
		for (index2 = 0; av[index][index2] != '\0'; index2++)
		{
			n_str[index3] = av[index][index2];
			index3++;
		}
		n_str[index3] = '\n';
		index3++;
	}
	n_str[index3] = '\0';
	return (n_str);
}
