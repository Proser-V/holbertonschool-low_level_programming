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
 * skip_spaces - skip all leading spaces
 * @str: target string
 * Return: a pointer to the first non-space character
 */

char *skip_spaces(char *str)
{
	while (*str == ' ')
		str++;
	return (str);
}

/**
 * extract_word - calculate the lenght of the current word
 * @str: target string
 * Return: the lenght of words
 */

int extract_word(char *str)
{
	int length = 0;

	while (str[length] != ' ' && str[length] != '\0')
		length++;
	return (length);
}

/**
 * strtow - split a string into words
 * @str: target string
 * Return: a pointer to an array of strings, or NULL if fail
 */

char **strtow(char *str)
{
	char **n_str;
	int index = 0, index2 = 0, length = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	/* Allocate memory for the word array */
	n_str = malloc((word_counter(str) + 1) * sizeof(char *));
	if (n_str == NULL)
		return (NULL);

	while (*str)
	{
		str = skip_spaces(str);
		if (*str == '\0')
			break;

		length = extract_word(str);
		if (length > 0)
		{
			n_str[index] = malloc((length + 1) * sizeof(char));
			if (n_str[index] == NULL)
			{
				while (index > 0)
					free(n_str[--index]);
				free(n_str);
				return (NULL);
			}
			for (index2 = 0; index2 < length; index2++)
				n_str[index][index2] = str[index2];
			n_str[index][length] = '\0';
			index++;
			str += length;
		}
	}
	n_str[index] = NULL;
	return (n_str);
}
