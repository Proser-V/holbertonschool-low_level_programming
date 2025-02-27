#include "main.h"

/**
 * *leet - replace some character by numbers
 * @str: target string
 * Return: the string
 */

char *leet(char *str)
{
int i;
int j;
char letters[] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
char numbers[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
int size = 10;

	for (i = 0; str[i] != '\0' ; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
		}
	}
	return (str);
}
