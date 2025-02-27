#include "main.h"

/**
 * *rot13 - substitute letters with the 13th letter after
 * @str: target string
 * Return: the string
 */

char *rot13(char *str)
{
	int i;
	int j;
	char l[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int size = 52;

	for (i = 0; str[i] != '\0' ; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (str[i] == l[j])
			{
				str[i] = l13[j];
				break;
			}
		}
	}
	return (str);
}
