#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: target string
 * Return: the string
 */

char *cap_string(char *str)
{
int i;
int j;
char a[] = {'\n', '\t', ' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int size_a = 12;

	str[0] = str[0] - 32;

	for (i = 0; str[i] != '\0'; i++)
	{
	int k = i + 1;
		for (j = 0; j < size_a; j++)
		{
			if (str[i] == a[j] && str[k] != '\0' && str[k] >= 'a' && str[k] <= 'z')
			{
			str[k] = str[k] - 32;
			}
		}
	}
	return (str);
}
