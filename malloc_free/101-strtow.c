#include "main.h"
#include <stdlib.h>

/**
 * word_counter - help counter for words in a string
 * @str: target string to count in
 * Return: total number of words
 */

int word_counter(char *str)
{
	int word_count = 0;
	int index = 0;
	int check = 0;

	if (str == NULL || str[0] == '\0')
	{
		return (0);
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] != ' ' && check == 0)
		{
			word_count++;
			check = 1;
		}
		if (str[index] == ' ')
		{
		check = 0;
		}
	}
	return (word_count);
}

/**
 * copy_word - copy a word from source to destination
 * @dest: destination buffer
 * @src: source string
 * @lenght: length of the word
 * Return: nothing (void)
 */
void copy_word(char *dest, char *src, int lenght)
{
	int index;

	for (index = 0; index < lenght; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
}

/**
 * strtow - split a string into words
 * @str: target string
 * Return: a pointer to an array of strings, or NULL if fail
 */

char **strtow(char *str)
{
	char **n_str;
	int index = 0, index2 = 0, lenght = 0;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	n_str = malloc((word_counter(str) + 1) * sizeof(char *));
	if (n_str == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		while (*str == ' ')
		{
			str++;
		}

		if (*str == '\0')
		{
			break;
		}

		lenght = 0;
		while (str[lenght] != ' ' && str[lenght] != '\0')
		{
			lenght++;
		}

		n_str[index] = malloc((lenght + 1) * sizeof(char));
		if (n_str[index] == NULL)
		{
			for (index2 = 0; index2 < index; index2++)
			{
				free(n_str[index2]);
			}
			free(n_str);
			return (NULL);
		}

		copy_word(n_str[index], str, lenght);
		index++;
		str += lenght;
	}

	n_str[index] = NULL;
	return (n_str);
}
